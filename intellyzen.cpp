#include<iostream>
using namespace std;

int comput(int n){

       int ans, ans1;
       ans = n/11;
       ans1 = n%11;
       cout<<"\n your weight is 9 : "<<ans;
       
      if(ans>=9)
       {
              ans = ans + ans/9;
              ans1 = ans%9;  
              cout<<"\n your weight is 9 : "<<ans;
       }
       else if(ans>=7)
       {
              ans = ans + ans/7;
              ans1 = ans%7;
              cout<<"\n your weight is  7: "<<ans;
       }
       else if(ans>=5)
       {
              ans = ans + ans/5;
              ans1 = ans%5;
              cout<<"\n your weight is 5: "<<ans;
       }
       else 
       {
              ans = ans + ans/1;
              ans1 = ans%1;
              cout<<"\n your weight is 1: "<<ans;
       }
       return ans;
}

int copm(int n){
       int i,ans;
       for(i=0;i<n;i++)
       {
             
       }
}

int main()
{
int n,i;

do{
       cout<<"\nenter weight ranging from 1 to 250 : ";
       cin>>n;
              if(n>250)
              {
               cout<<"\nyou enter weight  greater than 250 ";
              }
}while(n>250);


cout<<"\n your weight is : "<<comput(n);
return 0;
}











