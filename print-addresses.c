#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	unsigned long  value;
	for (int i=1; i<argc; i++) {
		value = (unsigned long)  strtol(argv[i], NULL, 10);
		printf("0x%012lX\n", value);
//		printf("%s\n%lu\n0x%lX\n", argv[i], value, value);
		
	}
}
