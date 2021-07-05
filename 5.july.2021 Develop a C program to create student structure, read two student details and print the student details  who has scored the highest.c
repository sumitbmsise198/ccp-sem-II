#include <stdio.h>  
struct student{
  int rollno;
  char name[20];
  char sec[2];
  char dep[4];
  int fees;
  int result;
};
struct student getinfo();
void print(struct student s1);
int main() {
   struct student s1,s2;
  printf("Enter details of 1st Student\n");
  s1 = getinfo();
  printf("Enter details of 2nd Student\n");
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
    printf("roll No. ");
  scanf("%d",&s1.rollno);
  printf("Name: ");
  scanf("%s",s1.name);
  printf("Section: ");
  scanf("%s",s1.sec);
  printf("Fees: ");
  scanf("%d",&s1.fees);
  printf("Result: ");
  scanf("%d",&s1.result);
    printf("Department: ");
  scanf("%s",s1.dep);
  return s1;
}
void print(struct student s1){
    printf("The details of student who got highest marks are as follows");
    printf("Roll No.: %d\n",s1.rollno);
    printf("Name: %s\n",s1.name);
    printf("Section: %s\n",s1.sec);
    printf("Department: %s\n",s1.dep);
    printf("Fees: %d\n",s1.fees);
    printf("Result = %d",s1.result);
}
