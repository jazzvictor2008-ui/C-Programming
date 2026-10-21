#include<stdio.h>
int main()
{
 int EPIN,PIN=1234,choice;
 float balance=10000,amount;
 printf("Enter the PIN");
 scanf("%d" , &EPIN);
 if(EPIN!=PIN)
 {
   printf("Invalid PIN\n");
   return 0;
 }
 printf("Login successful\n");
 do
 {
   printf("----MENU----\n");
   printf("\n1.Check balance\n");
   printf("\n2.Withdraw\n");
   printf("\n3.Deposit\n");
   printf("\n4.Exit\n");
   printf("ENTER THE CHOICE:");
   scanf("%d",&choice);

  switch(choice)
  {
    case 1:
     printf("Total Balance=%f", balance);
     break;
    case 2:
     printf(" Enter the withdraw amount\n");
     scanf("%f" , &amount);
     if(amount<=0)
       printf("\nInvalid amount\n");
     else if(amount>balance)
       printf("\nInsufficient Balance\n");
     else
     {
      balance=balance - amount;
      printf("\nWithrawal successful\n");
      printf("\nNew Blanace=%f",balance);
     }
     break;
    case 3:
     printf("\nEnter the deposit amount\n");
     scanf("%f",&amount);
     if(amount>0)
     {
      balance+=amount;
      printf("\nDeposit successful\n");
      printf("\nTotal amount=%f", amount);
     }
     else
     printf("\nInvalid amount\n");
     break;
    case 4:
      printf("Thank you\n");
      break;
    default:
      printf("\n Invalid choice\n");
   }
   }while(choice!=4);
  return 0;
 }





