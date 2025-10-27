#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]);

int main() {
	char word[100];
	
	printf("Enter a Word :");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")] = '\0';

	
	if (isPalindrome(word)) 
	printf("It is a palindrome \n");
	else{
	printf("It is not a palindrome");
	}
	
	
	return 0;
}

int isPalindrome(char str[]) {
	int length = 0;
	
	while (str[length] != '\0') length++;
	
	int start = 0;
	int end = length - 1;
	
	while(start < end) {
		if(str[start] != str[end]) {
			return 0;
		}
		start++;
		end--;
	}
	return 1;
}
