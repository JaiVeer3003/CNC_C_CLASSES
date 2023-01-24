/*If sale price and profit of few items is given find the cost price of 1 item. Take number of items, sale price and profit as inputs.*/

#include<stdio.h>

int main()
{
int items,sale,profit,price;

printf("\nEnter number of items\n");
scanf("%d",&items);
printf("Enter Sales of total Items\n");
scanf("%d",&sale);
printf("Enter Profit\n");
scanf("%d",&profit);

price=(sale-profit)/items;

printf("Single Item Price is == %d\n\n",price);

return 0;

}	
