#include <stdio.h>

int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("%c is a vowel.", a);
        break;

    case 'e':
        printf("%c is a vowel.", a);
        break;
    case 'i':
        printf("%c is a vowel.", a);
        break;
    case 'o':
        printf("%c is a vowel.", a);
        break;
    case 'u':
        printf("%c is a vowel.", a);
        break;
    default:
        printf("%c is a consonant.", a);
    }
    return 0;
}