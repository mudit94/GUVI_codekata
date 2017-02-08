#include<iostream>
using namespace std;
int main(){
int num,dup,r,s=0;
cin>>num;
dup=num;
while(num){
r=num%10;
s=s*10+r;
num/=10;
}
if(dup==s)
cout<<"Palindrome";
else
cout<<"Not a Palindrome";
}
