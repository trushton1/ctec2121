#include<stdio.h>

int main() {
	
	int a = 5, b = 5;
	char c;
	
	printf("Please select one of the four basic mathematical operations...\n");
	scanf("%c", &c);
	
	switch (c) {
		case '+': printf("a %c b = %i", c, addition(a,b));
			break;
		case '-' : printf("a %c b = %i", c, subtraction(a,b));
			break;
		case '*' : printf("a %c b = %i", c, multiplication(a,b));
			break;
		case '/' : printf("a %c b = %i", c, division(a,b));
			break;
		case '%' : printf("a %c b = %i", c, remainder(a,b));
			break;
		default : printf("INVALID CHOICE");
			break;
	}
	
	printf("\n\n");
}

int addition(a, b) {
	return a + b;
}

int subtraction(a,b) {
	return a - b;
}

int multiplication(a,b) {
	return a * b;
}

int division(a,b) {
	return a / b;
}

int remainder(a,b) {
	return a % b;
}
