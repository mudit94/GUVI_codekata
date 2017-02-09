#include<iostream>
#include<math.h>
int isPrime(int n){
  if(n<0)
  return 0;
if(n==1)
return 0;
if(n==2)
return 1;
if(n%2==0)
return 0;
for(int i=3;i<=sqrt(n);i+=2){
if(n%i==0){
return 0;
}
}
return 1;
}
using namespace std;
int main(){
int a,b,i,res;
cin>>a>>b;
for(i=a;i<=b;i++){

res=isPrime(i);
if(res==1)
cout<<i<<"\n";
else
continue;
}
}
