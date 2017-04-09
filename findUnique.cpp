#include<iostream>
using namespace std;
int findUnique(int a[],int n){
if(n==0)
return 0;
int i;
int s=a[0];
for(i=1;i<n;i++)
s=s^a[i];
return s;
}
int main(){

int n,i;
cin>>n;
int a[256];
for(i=0;i<n;i++)
cin>>a[i];
cout<<findUnique(a,n);
}
