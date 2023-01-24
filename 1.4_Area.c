/*calculation of area of rectangle,square and circle in different or same program. */

#include<stdio.h>

int main()
{

int A_Rec,A_Sqr,wid,len,rad,sq_len;
float A_Cir;
printf("WELCOME TO THE AREA CALCULATOR\n\n");

printf("Are Of Rectangle\n");
printf("Enter Width & Length\n");
scanf("%d%d",&wid,&len);
A_Rec = wid*len; //Formula of Area of Rectangle
printf("Area Of Rectangle == %d\n\n",A_Rec);

printf("Area Of Circle\n");
printf("Enter the Radius\n");
scanf("%d",&rad); //Formula of Area of Circle
A_Cir = 3.14*(rad*rad);
printf("Area Of Circle == %f\n\n",A_Cir);

printf("Area Of Square\n");
printf("Enter the length\n");
scanf("%d",&sq_len); //Formula of Area of  Square
A_Sqr= sq_len * sq_len;
printf("Area Of Square == %d\n\n",A_Sqr);

return 0;
}	
