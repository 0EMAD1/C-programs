/* A Milkman serves milk in packaged bottles of varied sizes. The possible size of the bottles are {1, 5, 7 and 10} litres. He wants to supply the desired quantity using as fewer bottles as possible irrespective of the size. 
Your objective is to help him find the minimum number of bottles required to supply the given demand for milk.*/
INPUT- 
 The first lihe contains the value of N by which the number of inputs can be given.
 The second line consists  , the Quantuty of milk ordered.
 
code -

#include <stdio.h>
int main()
{
 int n,b=0,i,m,s=0;
 scanf("%d",&m);
 for( i=0;i<m;i++)
 {
 scanf("%d",&n);
 b=n/10;
   n=n%10;
 s=s+b;
 b=0;
b=n/7;
 n=n%7;
  s=s+b;
 b=0;
 b=n/5;
n=n%5;
s=s+b;
 b=0;
b=n/1;
 s=s+b;
printf("%d\n",s);
 s=0;b=0;
 }
 return 0;
}
