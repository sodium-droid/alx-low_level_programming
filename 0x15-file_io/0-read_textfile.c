#include "main.h"
/**
 *read_textfile - reads a file
 *@filename: the file
 *@letters: characters to read.
 *Return: read text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	FILE *file;
	ssize_t bytesRead, bytesWritten;

if (filename == NULL)
	return (0);
file = fopen(filename, "r");
if (file == NULL)
	return (0);

buffer = (char *)malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
	fclose(file);
	return (0);
}
bytesRead = fread(buffer, sizeof(char), letters, file);
if (bytesRead == 0)
{
	free(buffer);
	fclose(file);
	return (0);
}
buffer[bytesRead] = '\0';
bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
free(buffer);
fclose(file);

if (bytesWritten == 0 || bytesWritten != bytesRead)
	return (0);
return (bytesWritten);
}
