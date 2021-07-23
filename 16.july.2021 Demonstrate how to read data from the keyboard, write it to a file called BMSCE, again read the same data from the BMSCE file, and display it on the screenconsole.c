#include <stdio.h>

int main()
{
    char c;
    FILE *fp;
    fp=fopen("BMSCE.txt","w");
    printf("Enter the data into the file\n");
    while((c=getchar())!=EOF)
    {
        putc(c,fp);
    }
    fclose(fp);
    printf("The contents of the file\n");
    fp=fopen("BMSCE.txt","r");
    while((c=getc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}
	
