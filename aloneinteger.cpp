#include<iostream>
using namespace std;
int findUnique(int a[],int n){
if(n==1)
return a[0];
int i,x=a[0];
for(i=1;i<n;i++){
x=x^a[i];
}
return x;
}
int main()
{
int n,a[100000],i;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
cout<<findUnique(a,n);
}
