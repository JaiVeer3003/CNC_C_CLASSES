/*Create variables of different types and then try scanf and printf on all the variables.*/

#include<stdio.h>

int main()
{
int a,b,c;
char ch;
float res;

printf("Basic Calculator\n\n");
printf("Enter the Two values:\n\n");
scanf("%d%d",&a,&b);

c=a+b;
printf("Sum = %d\n",c);

c=a-b;
printf("Sub = %d\n",c);

c=a*b;
printf("Mul = %d\n",c);

c=a/b;
printf("Quotient = %d\n",c);

res=a%b;
printf("devide = %f\n",res);

printf("Experiments with Char data type :\n");

printf("Enter the value in char:\n");
scanf(" %c",&ch);

printf ("Entered value in char is = %c\n",ch);


return 0;

}	
