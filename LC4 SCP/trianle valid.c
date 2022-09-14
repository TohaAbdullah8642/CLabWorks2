/*Practice Name: Checking Triangle if it is valid or not
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main (){
float angle_1;
float angle_2;
float angle_3;
float sum_angles;

printf("Please enter the first angle of the triangle > ");
scanf("%f",&angle_1);
    printf("Please enter the second angle of the triangle > ");
    scanf("%f",&angle_2);
        printf("Please enter the third angle of the triangle > ");
        scanf("%f",&angle_3);

            sum_angles - angle_1 + angle_2 + angle_3;

            if(sum_angles==180){
                printf("The Triangle is Valid");
            }else{
                printf("The Triangle is invalid");
            }

        return 100;
}
