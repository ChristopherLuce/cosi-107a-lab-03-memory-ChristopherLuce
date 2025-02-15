#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int value;
	for (int i=1; i<argc; i++) {
		value = (strtol(argv[i], NULL, 0) >> 8) & 0xFF;
		printf("0x%02X %3d\n", value, value);
	}
}
