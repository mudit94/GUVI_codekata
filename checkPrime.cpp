#include<iostream>
#include<math.h>
int isPrime(int n){
  if(n<0)
  return 0;
if(n==1)
return 0;
if(n==2)
return 1;
for(int i=3;i<sqrt(n);i+=2){
if(n%i==0){
return 0;
}
}
return 1;
}
using namespace std;
int main(){
int n,res;
cin>>n;
res=isPrime(n);
if(res==1)
cout<<"Prime"<<"\n";
else
cout<<"Not Prime";
}
