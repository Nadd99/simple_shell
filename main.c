#include "shell.h"

/**
 * main - entry to program
 * @argc: arguments count
 * @argv: arguments vector
 * Return: ...
 */
int main(int argc, char *argv[])
{
	char *comd, *tokenize;
	size_t len;
	ssize_t end_line;
	int numtok;

	while (1)
	{
		write(1, "$ ", 2);
		end_line = getline(&comd, &len, stdin);
		if (end_line == -1)
			break;
		tokenize = strtok(comd, " \n\t");
		argv = malloc(sizeof(char *) * numtok);
		while (tokenize)
		{
			argv[numtok] = tokenize;
			tokenize = strtok(NULL, " \n\t");
			numtok++;
		}
		(void)argc;
		argv[numtok] = NULL;
		execve(comd, argv, NULL);
	}
	free(comd);
	return (0);
}
