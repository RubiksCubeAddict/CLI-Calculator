#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

	if (argc != 4) {
		printf("Usage: ./calc <num> <operation> <num>\n");
		printf("Operations: +, -, *, /, ^\n");
		return 1;
	}

	char *endptr;

	double a = strtod(argv[1], &endptr);
	if (*endptr != '\0') {
		printf("Error: '%s' is not a valid number.\n", argv[1]);
		return 1;
	}

	double b = strtod(argv[3], &endptr);
	if (*endptr != '\0') {
		printf("Error: '%s' is not a valid number.\n", argv[3]);
		return 1;
	}

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
			if (b == 0.0) {
				printf("Invalid calculation: cannot divide by 0!\n");
				return 1;
			}
			result = a / b;
			break;
		case '^':
			result = pow(a, b);
			break;
		default:
			printf("Error: Invalid operator '%c' (supported: +, -, *, /, ^)\n", op);
			return 1;
	}

	printf("%g\n", result);
	return 0;

}