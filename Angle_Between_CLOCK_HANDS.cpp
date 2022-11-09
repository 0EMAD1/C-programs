// Question - For given hours and minutes , find the angle that is formed between hours and minutes.
// Example -  4:30 , h=4 m=30 .. angle formed between both hands is (cout).


#include <bits/stdc++.h>
  using namespace std;
  //emaaaaaaaaaaad
  int main()
  {
    int t,hours,min,k;
    cin>>t;
    while(t--){

      cin>>h;
      cin>>m;
      
      hours=(h*30)+(m*0.5);
      
      min =m*6;
      k=abs(hours-min);
      
      if(k>180)
      {
        k=360-k;
        cout<<k<<"\n";
      }
      else
      {
      cout<<k<<endl;
      }
      
    }
  
    
    return 0;
  }