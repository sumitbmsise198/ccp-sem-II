#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    char section[20];
    int result;
    int fees;
    char dep[20];
};
struct student getinfo();
void print(struct student s1);
int main(){
    struct student s1,s2;
    printf("Enter details of first student");
    s1 = getinfo();
    printf("Enter details of second student");
    s2 = getinfo();
    if(s1.result>s2.result){
        print(s1);
    }
    else{
        print(s2);
    }
    return 0;
}
struct student getinfo(){
    struct student s1;
    printf("\nRoll No: - \n");
    scanf("%d",&s1.roll);
    printf("Name: -\n");
    scanf("%s",s1.name);
    printf("Section: -\n");
    scanf("%s",s1.section);
    printf("Result:- \n");
    scanf("%d",&s1.result);
    printf("Fees: - \n");
    scanf("%d",&s1.fees);
    printf("Department:-\n");
    scanf("%s",s1.dep);
    printf("\n");
    return s1;
}
void print(struct student s1){
    printf("Roll No: - %d \n",s1.roll);
    printf("Name: -%s\n",s1.name);	
    printf("Section: %s-\n",s1.section);
    printf("Result:- %d\n",&s1.result);
    printf("Fees: - %d\n",&s1.fees);
    printf("Department:- %s\n",s1.dep);
}
