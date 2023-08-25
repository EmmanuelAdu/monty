#include "monty.h"

int main(int argc, char *argv[])
{
	int op;
	char *ERR_M = "USAGE: monty file\n";
	if (argc != 2)
	{
		write(STDERR_FILENO, ERR_M, strlen(ERR_M));
		exit(EXIT_FAILURE);
	}
	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
