/*Calculation of simple interest.*/

#include<stdio.h>

int main()
{
int  p,n;
float r,m,si;

printf("Please enter the Principle, Time in Month & Rate of Interest ");
scanf("%d%d%f",&p,&n,&r);

m=n/12.0;

printf("Num of years == %f",m);
si=p*m*r/100;

printf("SI of the above values == %f\n",si);

return 0;

}	
