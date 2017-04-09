#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=1,b=0;
for(int i=1;i<=n;i++)
{int c=a+b;
cout<<c<<" ";
a=b;
b=c;}
//cout<<fibo(i);
}
