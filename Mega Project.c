#include<stdio.h>
#include <stdlib.h>

int pin = 0;
int ok;

void readpin(){

   while(pin != 141){

      printf("Dail 141 to continue\n :");
      scanf("%d",&pin);


    if (pin !=141){
       printf(" Must input 141 to continue\n");
      }
                             }
                        }

     int main(){

    int option;

    char transaction = 'y';

    unsigned long amount = 15000;
    int offer, area, done;


  int ok=0;

//Press...\n 1. My offer\n 2. My Area\n 3. Data bundles\n 4.
    readpin();

   do{

       printf("1. Check balance\n");
       printf("2. My offer\n");
       printf("3. My Area\n");
       printf("4. #5500/22gb/30 days\n");
       printf("5. Quit\n");
       printf("-----------------------------------------------------------------------------------------\n\n");
       printf("Choose one :\t");
       scanf("%d",&option);

   switch(option){

     case 1:
       printf("\nYour balance is %lu", amount);
       break;

    case 2:
       printf(" 1. 500mb/#100/7 days\n");
       printf("2. 1gb/#200/7 days\n");
       printf("3. 1.5gb/#300/7 days\n");
       printf("4. 1TB/#1000/14days\n");
       scanf("%d", &offer);

       switch (offer){

         case 1:
            printf("1st choice selected\n");
            printf("What do you want to do when your data expires?\n");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. Cancel\n");
            scanf("%d", &offer);

         if (offer==1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(offer==2){
           printf("Successful. your data plan will not roll over");
         }

         break;

        case 2:
            printf(" 2nd choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &offer);

        if (offer = 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(offer=2){
           printf("Successful. your data plan will not roll over");
         }


         break;

          case 3:
            printf(" 3rd choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &offer);

         if (offer == 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(offer==2){
           printf("Successful. your data plan will not roll over");
         }

         break;

          case 4:
            printf(" 4th choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &offer);
        if (offer == 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(offer==2){
           printf("Successful. your data plan will not roll over");
         }

          break;

          default:
               {
                    printf("INVALID CHOICE");
               }
               break;

       }

       break;

          case 3:
               printf("My Area selected.\n");
               printf("1. 1500/#300mb/5days\n");
               printf("2. 1900/#500mb/5days\n");
               printf("3. 2500/#800mb/5days\n");
               scanf("%d", &area);

                 switch(area){

                  case 1:
            printf("1st choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &area);

        if (area == 1){
          printf("Successful. your data plan will roll over.", area);
                                  }

         else if(area==2){
           printf("Successful. your data plan will not roll over");
         }
        /* else{
          printf("Invalid choice", area);
         };*/
         break;

          case 2:
            printf("2nd choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &area);

         if (area == 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(area==2){
           printf("Successful. your data plan will not roll over");
         }
         /*else{
          printf("Invalid choice");
         };*/
         break;

          case 3:
            printf("3rd choice selected\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &area);

       if (area== 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(area==2){
           printf("Successful. your data plan will not roll over");
         }
         else{
          printf("Invalid choice");
         };
         break;

                 }
                 break;

      case 4:
            printf("4. #5500/22gb/30 days\n");
            printf("What do you want to do when your data expires?\n :");
            printf("1. Roll over with 160 mb extra\n");
            printf("2. cancel\n");
            scanf("%d", &option);

         if (option == 1){
          printf("Successful. your data plan will roll over.");
                                  }

         else if(option==2){
           printf("Successful. your data plan will not roll over");
         }
         break;

     case 5:
          printf(" Have a nice day\n");
          printf("---------------------------------------------------------\n");
          printf("Thank you for using our services");

          break;

     default:
         printf("INVALID CHOICE");
         break;


   }

         printf("\n\nDo you wish to make another transaction? (y/n) : \n");
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

while(ok!=1);
        printf("\n\nThank you for using our services!");
     }

