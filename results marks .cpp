#include<iostream>
using namespace std;

int main(){
int results;
cout<<" enter marks:";
cin>>results;
if(results<0||results>100)
{
cout<<"wrong number";
}
else if ( results>0&& results <=40)
{
cout<<"F";
}
  else if (results >0&& results <=50)
{
cout<<"DD";
}
  else if (results >=0 && results<=60)
       {
    cout<<"CC:";
    }
    else if (results>=0 && results<=70)
    {
    cout<<"BC:";
    }
    else if( results >=0 && results<=80)  
    {
  cout <<"BB:" ;
    }   
    else if ( results >=0 && results <=90)
    {
    cout<<"AB:";
    }
       else if (results >=0 && results <=100)
    {
    cout <<"AA:";
     }
     return 0;
}