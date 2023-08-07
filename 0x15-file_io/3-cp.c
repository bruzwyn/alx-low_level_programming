#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

/**
 * open_file - Opens a file and returns the file descriptor.
 * @main - copies the content of a file to another file.
 * open_file: file to be opened
 * copy_file: file to be copied
 *
 * Return: The file descriptor on success, or exits with an error
 */


#define BUF_SIZE 1024


int open_file(const char *filename, int flags, int mode)
{
int fd = open(filename, flags, mode);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
exit(98);
}
return (fd);
}

/**
 * copy_file - Copies the content of one file to another.
 * @fd_from: The file descriptor of the source file.
 * @fd_to: The file descriptor of the destination file.
 *
 * Return: No return value. Exits with an error code if copying fails.
 */

void copy_file(int fd_from, int fd_to)
{
char buffer[BUF_SIZE];
ssize_t read_file, write_file;

do

{
read_file = read(fd_from, buffer, BUF_SIZE);
if (read_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
close(fd_from);
close(fd_to);
exit(98);
}

write_file = write(fd_to, buffer, read_file);
if (write_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file\n");
close(fd_from);
close(fd_to);
exit(99);
}
} while (read_file > 0);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or an error code otherwise.
 */

int main(int argc, char *argv[])
{
int fd_from, fd_to, ret_read, ret_write;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

copy_file(fd_from, fd_to);

ret_read = close(fd_from);
ret_write = close(fd_to);

if (ret_read == -1 || ret_write == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close file descriptor\n");
exit(100);
}

return (0);
}
