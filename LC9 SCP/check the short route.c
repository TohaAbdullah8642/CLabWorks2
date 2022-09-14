/*Practice Name: Measuring the Distance about which route is short from the specific location by using the programs
Author: Abu Abdullah Toha
ID: 222-16-670*/

#include<stdio.h>
int main(){
    float a,b;

printf("Please enter the distance of the first route,A > ");
scanf("%f",&a);

printf("Please enter the distance of the second route,B > ");
scanf("%f",&b);

if(a<b){
    printf("A is the shortest route of the destinations");
    }else{
    printf("B is the shortest route of the destinations");
    }

    return 0;
}
