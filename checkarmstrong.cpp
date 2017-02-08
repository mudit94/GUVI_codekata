#include<iostream>
using namespace std;
int main(){
int num,dup,r,s=0;
cin>>num;
dup=num;
while(num){
r=num%10;
s+=r*r*r;
num/=10;
}
if(s==dup)
cout<<"Armstrong number";
else
cout<<"Not an Armstrong number";
}
