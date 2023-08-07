#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints to the standard output.
 * @filename: The name of the file to be read.
 *
 * @letters: The number of letters to read from the file and print.
 * Description: This function opens the file and reads characters from it,
 * and writes the content to the standard output (stdout).
 *
 * It returns the actual number of letters read and printed.
 * If the file cannot be opened or read, or if 'filename' is NULL,returns 0.
 * If the write operation fails or
 * does not write the expected amount of bytes, it also returns 0.
 * Return: The actual of letters read from file and printed, 0 on failure
 */


ssize_t read_textfile(const char *filename, size_t letters)

{

ssize_t read_file, write_file, fp;
char *buffer;

if (filename == NULL)

{
return (0);
}
fp = open(filename, O_RDONLY);


buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)

{
close(fp);
return (0);
}

read_file = read(fp, buffer, letters);

write_file = write(STDOUT_FILENO, buffer, read_file);

if (fp == -1 || read_file == -1 || write_file == -1 || write_file != read_file)
{
free(buffer);
return (0);
}

return (write_file);
close(fp);
free(buffer);
}
