#include <stdio.h>

int main() {
    char str[100],strr[100];
    int i;
    printf("Enter string str1\n");
    scanf("%s",str);
        printf("Enter string str1\n");
    scanf("%s",strr);
    for(i=0;str[i]!='\0';i++)
    {
        strr[i] = str[i];
    }
    strr[i]='\0';
    printf("Copied String(str2) is %s and its length is %d",strr,i);
    return 0;
}
