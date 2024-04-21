#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize);
int main(void) {
	char  s[] = "hello";
	int size = strlen(s);
	reverseString(s, size);
	return 0;
}

void reverseString(char* s, int sSize) {
    for (int i = 0; i < sSize / 2; i++) {
        char temp = s[i];
        s[i] = s[sSize - i - 1];
        s[sSize - i - 1] = temp;
    }
    for (int i = 0; i < sSize; i++) {
        printf("%c ", s[i]);
    }
}