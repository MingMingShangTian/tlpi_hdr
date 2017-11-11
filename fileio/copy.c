#include <sys/stat.h>
#include <fcntl.h>
#include "tlpi_hdr.h"

#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif

int main(int argc, char * argv[]) {
	int inputFd, outputFd, openFlags;
	mode_t filePerms;
	ssize_t numRead;
	char buf[BUF_SIZE]

	if (argc != 3 || strcmp(argv[1], "--help") == 0)
		usageErr("%s old-file new-file\n", argv[0])
	
	inputFd = open(argv[1], O_RDONLY)
	openFlags = O_CREAT | O_WRONLY | OTRUNC;
	filePerms = S_IRUSR | 
	

		

}
