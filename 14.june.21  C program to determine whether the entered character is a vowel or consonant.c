#include <stdio.h>
void check(char x1, char x2);
int main() {
    char a,b;
    printf("Enter the character:  ");
    scanf("%c",&a);
    b=a;
    if(a>=65 && a<=90){
        a = a+32;        
    }
    check(a, b);
    return 0;
}
void check(char x1, char x2){
    switch(x1)
    {
        case 'a':
            printf("%c is a vowel", x2);
            break;
        case 'e':
            printf("%c is a vowel", x2);
            break;
        case 'i':
            printf("%c is a vowel", x2);
            break;
        case 'o':
            printf("%c is a vowel", x2);
            break;
        case 'u':
            printf("%c is a vowel", x2);
            break;
        default:
            printf("%c is a consonant", x2);
    }
}
