/*Tina is preparing a shopping list containing N items. 
She knows the quantity and price of each item on the list. The shop is offering a 20% discount on the items with a 
quantity of more than 100 units.
Given the quantity and price of each of the N items, your task is to calculate how much each item will cost.*/

//code:

#include <bits/stdc++.h>
  using namespace std;
 
  int main()
  {
 int N;
    float q,p;
    cin>>N;
    while(N--){
      cin>>q>>p;
      if(q>100){
        printf("%.1f\n",q*0.8*p);
      }
      else{
        printf("%.1f\n",q*p);
      }
    }
    
    return 0;
  }