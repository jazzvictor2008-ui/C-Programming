#include<stdio.h>
#include<conio.h>
int main()
{
  char ch;
  FILE*fp;
  clrscr();
  fp=fopen("data.txt","w");
  fprintf(fp,"C coding is very interesting\nC is very interesting when i listen\nC class is very fun and interacting\nThe practical session in C class is very interactive\nThese classes have helped me to improve my skills\n");
  fclose(fp);
  fp=fopen("data.txt","r");
  while((ch=fgetc(fp))!=EOF)
  {
   printf("%c",ch);
  }
  fclose(fp);
  fp=fopen("data.txt","a");
  fprintf(fp,"I love coding very much\nC was easy at first but then it got confusing\nsir is good at teaching but we understand only some content\nSir repeats the concept many times\nSir is very friendly and teaches us with a smile\n");
  fclose(fp);
  return 0;
}