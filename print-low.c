#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int value;
	for (int i=1; i<argc; i++) {
		value = strtol(argv[i], NULL, 0) & 0xFF;
		printf("%d 0x%02X %3d\n", i, value, value);
	}
}
