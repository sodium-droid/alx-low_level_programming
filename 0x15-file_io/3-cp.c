#include "main.h"
void error_exit(int code, const char *message, int fd1, int fd2);

/**
 * main - Entry point
 * @argc: count of arguments
 * @argv: vectors
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", "cp");
		return (97);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (bytes_read == -1)
			error_exit(98, "Error: Can't read from file", fd_from, fd_to);
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file", fd_from, fd_to);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd", fd_from, fd_to);
	return (0);
}
/**
 * error_exit - print error message
 * @code: err code
 * @message: message to print
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * Return: nothing
*/
void error_exit(int code, const char *message, int fd1, int fd2)
{
	if (fd1 != -1)
		close(fd1);
	if (fd2 != -1)
		close(fd2);
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
