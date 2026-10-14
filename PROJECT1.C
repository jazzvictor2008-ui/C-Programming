#include<stdio.h>
int main()
{
  int a,b;
  char op;
  clrscr();
  printf("Enter the first number:\n");
  scanf("%d",&a);
  printf("Enter the operator:\n");
  scanf(" %c", &op);
  printf("Enter the second number:\n");
  scanf("%d",&b);
  switch(op)
  {
  case '+':
    printf("Result=%d",a+b);
    break;
  case '-':
    printf("Result=%d",a-b);
    break;
  case '*':
    printf("Result=%d",a*b);
    break;
  case '/':
    if(b!=0)
      printf("Result=%d",a/b);
    else
      printf("Division not possible by 0");
      break;
  default:
     printf("Invalid operator");
 }
  return 0;
}