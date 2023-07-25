#include<stdio.h>
int main ()
{
    char c;
    printf("Enter a character - ");
    scanf("%c",&c);
    printf("\n");
    switch(c)
    {
        case 'a':printf("a is a vowel letter");break;
        case 'A':printf("A is a vowel letter");break;
        case 'e':printf("e is a vowel letter");break;
        case 'E':printf("E is a vowel letter");break;
        case 'i':printf("i is a vowel letter");break;
        case 'I':printf("I is a vowel letter");break;
        case 'o':printf("o is a vowel letter");break;
        case 'O':printf("O is a vowel letter");break;
        case 'u':printf("u is a vowel letter");break;
        case 'U':printf("U is a vowel letter");break;
        default:printf("%c is not vowel letter\n",c);
    }
}

