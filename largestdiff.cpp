#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
int n,i;
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
int maxdiff=0,p,q,r=0;
for(i=0;i<n-1;i++){
p=a[i];
q=a[i+1];
//cout<<p<<" "<<q<<"\n";
if(abs(p-q)>maxdiff){
maxdiff=abs(p-q);
//cout<<maxdiff;
r=i;
}
}
cout<<r<<"\n";
}
