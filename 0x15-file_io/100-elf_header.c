#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 128

/**
 * print_elf_header - Display the information contained in the ELF header.
 * @elf_header: Pointer to the ELF header data.
 */

void print_elf_header(unsigned char *elf_header)


{

int i;

printf("ELF Header:\n");
printf("Magic:   ");
for (i = 0; i < 16; i++)
printf("%02x ", elf_header[i]);
printf("\n");

printf("Class:                             ");
if (elf_header[4] == 1)
printf("ELF32\n");
else if (elf_header[4] == 2)
printf("ELF64\n");
else
printf("<unknown: %x>\n", elf_header[4]);

printf("Data:                              ");
if (elf_header[5] == 1)
printf("2's complement, little endian\n");
else if (elf_header[5] == 2)
printf("2's complement, big endian\n");
else
printf("<unknown: %x>\n", elf_header[5]);

printf("Version:                           %d (current)\n", elf_header[6]);
printf("OS/ABI:                            %d\n", elf_header[7]);
printf("ABI Version:                       %d\n", elf_header[8]);
printf("Type:		%d\n", *(unsigned short *)&elf_header[16]);
printf("Entry point address:    %lx\n", *(unsigned long *)&elf_header[24]);
}

/**
 * main - Copies the content of one file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, or an error code otherwise.
 */
int main(int argc, char *argv[])
{
int fd, read_ret;
unsigned char elf_header[BUF_SIZE];

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot read from file '%s'\n", argv[1]);
exit(98);
}

read_ret = read(fd, elf_header, BUF_SIZE);
if (read_ret == -1)

{
dprintf(STDERR_FILENO, "Error: Cannot read from file '%s'\n", argv[1]);
close(fd);
exit(98);
}

if (read_ret < BUF_SIZE)

{
dprintf(STDERR_FILENO, "Error: '%s' is not an ELF file\n", argv[1]);
close(fd);
exit(98);
}

print_elf_header(elf_header);

close(fd);
return (0);
}

