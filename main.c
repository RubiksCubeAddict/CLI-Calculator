#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	if (argc != 4) {
		printf("Usage: ./calc <num> <operation> <num>\n");
		return 1;
	}

	double a = atof(argv[1]);
	double b = atof(argv[3]);
	char op = argv[2][0];
	double result = 0.0;

	switch (op) {
		case('+'):
			result = a + b;
			break;
		case('-'):
			result = a - b;
			break;
		case('*'):
			result = a * b;
			break;
		case('/'):
			if (b == 0) {
				printf("Invalid calculation: cannot divide by 0!\n");
				return 1;
			}
			result = a / b;
			break;
		default:
			printf("Invalid operator!\n");
			return 1;
	}

	printf("%g\n", result);
	return 0;

}