/*calculation of parameter of rectangle,square and circle in different or same program.*/

#include<stdio.h>

int main()
{
int Traingl,Rectngl,a,b,c,l,w,r;
float Cir;

printf("Welcometo  parameter Calculator\n\n");

printf("Enter the a,b,c of Triangle\n");
scanf("%d%d%d",&a,&b,&c);
 Traingl= a+b+c;
printf("Parameter of Triangle == %d\n\n",Traingl); 

printf("Enter the Len and width of Rectangle\n");
scanf("%d%d",&l,&w);
 Rectngl= 2*(l+w) ;
printf("Parameter of Rectangle == %d\n\n",Rectngl);

printf("Enter the Radius  of Circle\n");
scanf("%d",&r);
 Cir= 2*3.14*r;
printf("Parameter of Circle == %f\n\n",Cir);

return 0;

}

