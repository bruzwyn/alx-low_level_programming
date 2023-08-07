#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text_content to a file.
 * @filename: Name of the file to append to.
 * @text_content: NULL-terminated string to append to the file.
 *
 * Description: This function appends the given text_content to the end of the
 * specified file. If the file does not exist, it will be created.
 * If text_content
 * is NULL or the file cannot be opened or written, -1 is returned.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)


{

int op, write_file, len = 0;

if (filename == NULL)
return (-1);

op = open(filename, O_WRONLY | O_APPEND);
write_file = write(op, text_content, len);

if (op == -1 || write_file == -1)
return (-1);

if (text_content != NULL)

{
while (text_content[len] != '\0')
len++;

write_file = write(op, text_content, len);
if (write_file == -1)

{
close(op);
return (-1);
}

}

close(op);

return (1);
}
