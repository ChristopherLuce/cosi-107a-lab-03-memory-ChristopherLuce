#include <stdio.h>

const char constant[] = "data";
int x;

void fun() {
	// a nothing function
}

void print_addr(char* label, void *ptr) {
	printf("%s: %p\n", label, ptr);
}

int main() {
	int stack_var = 1 << 24; // a favorite number of mine
	print_addr("stack variable", &stack_var);
	print_addr("initialized data", (void*)constant);
	print_addr("uninitialized data", &x);
	print_addr("main", main);
	print_addr("function", fun);
}

