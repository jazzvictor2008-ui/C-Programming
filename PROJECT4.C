#include<stdio.h>
#include<conio.h>
struct student
{
  char name[20];
  int roll;
  int marks;
  char city[20];
  char dream[50];
};
struct student s[10];
void read()
{
 int i ;
 for (i=0;i<10;i++)
 {
 printf("Enter the name:\n");
 scanf("%s",s[i].name);
 printf("Enter the Roll number:\n");
 scanf("%d",&s[i].roll);
 printf("Enter the marks:\n");
 scanf("%d", &s[i].marks);
 printf("Enter the city:\n");
 scanf("%s",s[i].city);
 printf("Enter your dream:\n");
 scanf("%s",s[i].dream);
 }
}
void display()
 {
  int i;
  printf("---------------Student Register-----------------");
  for(i=0;i<10;i++)
  {
   printf("\nStudent %d\n",i+1);
   printf("Student Name:%s\n",s[i].name);
   printf("Student Roll number:%d\n",s[i].roll);
   printf("Student Marks:%d\n",s[i].marks);
   }
 }
int main()
{
  read(s);
  display(s);
  return 0 ;
}
