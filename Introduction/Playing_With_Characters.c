#include <stdio.h>

int main(void)
{
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sen); /* space remove newline */

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
}
