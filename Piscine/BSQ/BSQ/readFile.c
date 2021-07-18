#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	openFile(const char *filename)
{
	int		fileDescriptor;

	fileDescriptor = (open(filename, 0));
	return (fileDescriptor);
}

int	getFileSize(int fileDescriptor)
{
	char	c;
	int		totalSize;

	totalSize = 0;
	while (read(fileDescriptor, &c, 1))
		totalSize++;
	return (totalSize);
}

char	*fillBuffer(const char *filename)
{
	char	*buffer;
	int		fileDescriptor;
	int		fileSize;

	fileDescriptor = openFile(filename);
	if (fileDescriptor < 0)
		return (0);
	fileSize = getFileSize(fileDescriptor);
	buffer = malloc(fileSize * sizeof(char));
	if (!buffer)
		return (0);
	if (close(fileDescriptor))
		return (0);
	fileDescriptor = openFile(filename);
	read(fileDescriptor, buffer, fileSize);
	return (buffer);
}
