#include "main.h"

/**
 * read_elf_header - Read and display the ELF header information.
 * @file_descriptor: The file descriptor of the ELF file.
 */
void read_elf_header(int file_descriptor)
{
	Elf32_Ehdr header;
	/*Assuming it's ELF32, adjust for ELF64 if needed*/

	if (read(file_descriptor, &header, sizeof(header)) != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Unable to read ELF header\n");
		exit(98);
	}

	/*Check for ELF magic number*/
	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1]
			!= ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
			header.e_ident[EI_MAG0], header.e_ident[EI_MAG1],
			header.e_ident[EI_MAG2], header.e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
			(header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			(header.e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n", header.e_ident
			[EI_VERSION]);
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       %d\n", header.e_ident
			[EI_ABIVERSION]);
	printf("  Type:                              %s\n", (header.e_type == ET_EXEC)
			? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               %#x\n",
			(unsigned int)header.e_entry);
}

int main(int argc, char *argv[])
{
	int file_descriptor;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file\n");
		return (98);
	}

	read_elf_header(file_descriptor);

	close(file_descriptor);

	return (0);
}

