#include <stdio.h>
#include <string.h>

int main() {

	printf("Which pet do you have cat or dog : \n");
	char str[5];

	scanf("%s", &str);

	if (strcmp (str, "dog") == 0) {
		printf("woof");
	}
	else if (strcmp(str, "cat") == 0) {
		printf("meows");
	}
	else {
		printf("Invalid animal");
	}


	return 0;
}

