#include<iostream>
using namespace std;

int main()
{
int n;
int i;
int j;
cout <<"enter number:";
cin>>n;
for (i=0;i<n;i++)
{
for (j=0;j<n+1;j++)
cout <<"*";
cout <<".";
  }  
    return 0;
}