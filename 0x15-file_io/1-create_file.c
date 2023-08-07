#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - Creates a file and writes text_content to it.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)

{

int op, write_file;
ssize_t bytes_written, len;
len = 0;

if (filename == NULL)
return (-1);

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
write_file = write(op, text_content, len);

if (op == -1 || write_file == -1)
return (-1);

if (text_content != NULL)

{
while (text_content[len] != '\0')
len++;

bytes_written = write(op, text_content, len);
if (bytes_written == -1 || (ssize_t)bytes_written != len)

{
close(op);
return (-1);
}

}

close(op);

return (1);
}
