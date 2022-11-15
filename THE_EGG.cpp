/* PROBLEM STATEMENT-
One Egg” is an egg supply company which supplies eggs to retailers. 
They have M classes of eggs. Each class can have N number of eggs (N can be the same or can vary class to class). 
They accept order via mail for X eggs. 
In response, they confirm if they can supply the eggs with a “Thank you” note and the number of eggs or 
with a “Sorry” note and the numbers of eggs they can supply. They also mention the breakdown of eggs by the class they will supply. 
The ordered eggs are adjusted against the different classes with the most number of eggs adjusted first 
then the balance is adjusted against the second-highest and so on.  The company is a bit superstitious as well. 
If the number of eggs ordered is greater than or equal to the total number of eggs in stock then they retain one egg and 
responds back with the “Sorry” note with total number of eggs in stock minus one and breakdown of eggs by class. */

code -

#include <stdio.h>
int main() {
int m,x,i,a[1000],sum=0,s;
scanf("%d %d",&m,&x);
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
if(sum>x)
    printf("Thank you, your order for %d eggs are accepted\n",x);
else
{
    printf("Sorry, we can only supply %d eggs\n",sum-1);
    x=sum-1;
}
for(i=0;i<m;i++)
{
    if(x>=a[i])
    {
        printf("%d\t%d\t%d\n",a[i],a[i],0);
        x=x-a[i];
    }
    else if(x<a[i])
    {
        s=a[i]-x;
     printf("%d\t%d\t%d\n",a[i],x,s);
     x=0;
     }
    
     else if(x==0)
     printf("%d\t%d\t%d\n",a[i],0,a[i]);
   
}
 return 0;
}