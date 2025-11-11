#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];
	scanf("%[^\n]s", s);  /* %[^\n] tells scanf to read and store characters into s until a newline character  = input */
	printf("Hello, World\n");  /* print first string 'the text' = output */
	printf("%s", s);  /* print secend string 'the string stored in the array s' = output */
    return 0;
}
