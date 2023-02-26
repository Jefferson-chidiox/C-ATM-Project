#include<stdio.h>
#include <stdlib.h>

int pin = 0;
int ok;

void readpin(){

   while(pin !=1531){

      printf("Enter your default pin number --1531--\n");
      scanf("%d",&pin);

    if (pin !=1531){
       printf("ENTER YOUR VALID PASSCODE\n");
      }
                             }
                        }
     int main(){
    int option = 0;

    char transaction = 'y';

    unsigned long amount = 15000;
    unsigned long deposit = 0;
    unsigned long withdraw = 0;

    readpin();

   do{

       printf("\n*******Welcome Uche Unknownsurname to Malonez ATM services!********\n");
       printf("1. Check balance\n");
       printf("2. Withdraw\n");
       printf("3. deposit\n");
       printf("4. QUIT\n");
       printf("-----------------------------------------------------------------------------------------\n\n");
       printf("Choose one :\t");
       scanf("%d",&option);

   switch(option){

     case 1:
       printf("\nYour balance is %lu", amount);
       break;

    case 2:
       printf("Please input the amount you want to withdraw :");
       scanf("%lu",&withdraw);

   if (withdraw % 100 != 0 ) {

       printf("PLEASE INPUT THE VALUE IN MULTIPLES OF 100\n");

                                           }

   else if (withdraw >(amount - 500) ){

       printf("INSUFFICIENT BALANCE\n");

                                                      }

   else{

       amount = amount - withdraw;
       printf("\n\nPlease collect cash\n");
       printf("Balance is  %lu", amount);

         }
         break;

     case 3:
          printf("\nInput amount you wish to deposit\n");
          scanf("%lu", &deposit);
          amount  = amount+ deposit;
          printf("\nYour balance is %lu",amount);

          break;

     case 4:
          printf("Hope to see you soon\n");
          printf("\n\n---------------------------------------------------------\n\n");
          printf("Thank you for using our services");

          break;

     default:
         printf("Invalid choice");


   }

         printf("\nDo you wish to make another transaction (y/n) : \n");
         fflush(stdin);
         scanf("%c", &transaction);

     if (transaction == 'n' || transaction == 'N' )
          ok =1;

     else if (transaction == 'y' || transaction == 'Y' ){
          ok !=1;
     }
     else{
          printf("Invalid choice");
          ok =1;
     }
       }

while(!ok);
        printf("\n\nThank you for using our services");
     }
