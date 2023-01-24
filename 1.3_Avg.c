/*Calculate average of 4 integers and print the output as an integer.*/

#include<stdio.h>

int main()
{
int a,b,c,d,sum,avg,rem_avg ;

printf("Enter the 4 numbers to calculate the avg\n");
scanf("%d%d%d%d",&a,&b,&c,&d);

sum=a+b+c+d;
printf("Sum of values =  %d\n",sum);
avg=sum/4;
rem_avg=sum%4; /*Reminder value assigning to the variable*/
printf("Avg of values == %d\n",avg);

printf("Accurate Avg == %d.%d\n",avg,rem_avg);
return 0;

}	
