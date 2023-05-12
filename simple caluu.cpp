#include<iostream>
using namespace std;

int main()
{
char operation ;
float nom1,nom2,sum;
cout<<"enter operation (+,*,-,/):";
cin>>operation ;
cout <<"enter first number:"<<endl;
cin>>nom1;
cout <<"enter second number:"<<endl;
cin>>nom2;
switch (operation){
case'+':
cout<<nom1<<"+"<<nom2<<"="<<nom1+nom2;
break;
case'*':
cout <<nom1<<"×"<<nom2<<"="<<nom1*nom2;
break;
case'-':
cout <<nom1<<"-"<<nom2<<"="<<nom1-nom2;

break;
case'/':
cout <<nom1 <<"/"<<nom2 <<"="<<nom1/nom2;
      break;    
    } 
                 return 0;
}