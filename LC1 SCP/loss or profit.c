/*Practice Name: Lose Or Profit
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main () {;
float C_Price;
float S_Price;
float profit;
float loss;

    printf("Please enter the cost price for the items ");
    scanf("%f",&C_Price);

    printf("Please enter the sell price for the items ");
    scanf("%f",&S_Price);


    profit= (S_Price-C_Price);
    loss= (C_Price-S_Price);

    if(S_Price>C_Price){
            printf("The seller Made a profit of %.2f",profit);
    }else{
    printf("The selller has been loss of %.2f",loss);
    }

return 100;
}
