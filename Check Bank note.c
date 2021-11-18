#include<stdio.h>
int main()
{
    int amount;
    printf("Enter your amount : ");
    scanf("%d",&amount);

    printf("There are :");

     int total = (int)amount/1000;
     printf("\n%d Note(s) of 1000.00\n",total);
     amount = amount - (total*1000);

        total = (int)amount/500;
     printf("\n%d Note(s) of 500.00\n",total);
     amount = amount - (total*500);

        total = (int)amount/100;
     printf("\n%d Note(s) of 100.00\n",total);
     amount = amount - (total*100);

        total = (int)amount/50;
     printf("\n%d Note(s) of 50.00\n",total);
     amount = amount - (total*50);

        total = (int)amount/20;
     printf("\n%d Note(s) of 20.00\n",total);
     amount = amount - (total*20);

        total = (int)amount/10;
     printf("\n%d Note(s) of 10.00\n",total);
     amount = amount - (total*10);

        total = (int)amount/5;
     printf("\n%d Note(s) of 5.00\n",total);
     amount = amount - (total*5);

        total = (int)amount/2;
     printf("\n%d Note(s) of 2.00\n",total);
     amount = amount - (total*2);

        total = (int)amount/1;
     printf("\n%d Note(s) of 1.00\n",total);
     amount = amount - (total*1);

     return 0;

}
