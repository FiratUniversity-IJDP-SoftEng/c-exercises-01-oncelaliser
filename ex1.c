#include <stdio.h>

int main()
{

	int array[5] = { 1, 2, 3, 4, 5 };
	int secretnumb = 3;
	for (int i = 0; i < 5; i++) {
		printf("%d", array[i]);
	}
	int n;
	printf("\nGuess the secret number : \n");
	scanf("%d", &n);
	if (n == secretnumb) {
		printf("Correct answer");
	}
	else {
		printf("Wrong answer");

		return 0;
	}

}
