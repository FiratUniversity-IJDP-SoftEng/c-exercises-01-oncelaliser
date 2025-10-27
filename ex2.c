#include <stdio.h>

int main() {

	char str[] = "Happy Birthday!";

	printf("Enter your age :");
	int a;
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		printf("%s \n", str);
	}




	return 0;
}
