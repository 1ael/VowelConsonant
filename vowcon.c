#include <stdio.h>
#include <stdbool.h>
int main(){
	char ch;
	bool isVowel = false;

	printf("enter a letter:\n");
	scanf("%c",&ch);

	if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o'|| ch == 'O' || ch == 'u' || ch == 'U'){
		isVowel = true;
	}
	
	if (isVowel == true)
		printf("%c is a vowel\n", ch);
	else
		printf("%c is a consonant\n", ch);
	return 0;
}
