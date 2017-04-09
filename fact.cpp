#include<iostream>
using namespace std;
long int fact(long int n){
if(n<0)
return -1;
if(n<=1)
return 1;
else
return n*fact(n-1);
}
int main(){
long int n,f;
int i;
cin>>n;
f=fact(n);
if(f==-1)
cout<<"Factorial doesn't exists"<<"\n";
else
cout<<f<<"\n";
}
