#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{      
    // if file does not have in directory  
    // then file foo.txt is created. 
    unsigned int sz;
	int fd;
	size_t count;
	
	fd = open("numbers.dict", O_RDONLY);
     
    printf("fd = %d\n", fd); 
    char *c;
	
	c = (char *)malloc(1);

    if (fd ==-1)
    {
        // print which type of error have in a code
        printf("Error\n");
		return (1);
    }
	count = 65535;
	sz = read(fd, c, count);
  	printf("called read(%d, c, 10).  returned that %d bytes  were read.\n", fd, sz);
  	c[sz] = '\0';
  	printf("Those bytes are as follows:\n%s", c);
    return (0);
}