#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <cs50.h>

float count_letters(string text, int str_length);
float count_words(string text, int str_length);
float count_sent(string text, int str_length);



int main() {
	string text = get_string("Text :");
	int length = strlen(text);

	float letter_count = count_letters(text, length);

	float words_count = count_words(text, length);

	float sent_count = count_sent(text, length);

	int l = round(words_count / letter_count) * 100;
	int s = round(words_count / sent_count) * 100;

	float index = 0.0588 * l - 0.296 * s - 15.8;

	index = round(index);

	if (index < 1) {
		printf("Before 1 grade\n");
	}
	else if (index > 16) {
		printf("Grade 16\n");
	}
	else {
		printf("Grade %i\n", (int)index);
	}
	return 0;
}

float count_letters(string text, int str_length) {


	int letters = 0;

	for (int i = 0; i < str_length; i++) {
		if (isalpha(text[i]) != 0) {
			letters++;
		}
	}
	return letters;
}

float count_words(string text, int str_length)
{

	int words = 0;

	for (int i = 0; i < str_length; i++) {
		if (text[i] == 32)
			words++;
	}
	return words;
}

float count_sent(string text, int str_length)
{

	int sent = 0;
	for (int i = 0; i < str_length; i++) {
		if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
			sent++;
		}
	}
	return sent;
}

