#include<iostream>
using namespace std;
int main(){
int a,b,dup,r,s=0,i,num;
cin>>a>>b;
for(i=a;i<b;i++){
num=i;
s=0;
while(num){
r=num%10;
s+=r*r*r;
num/=10;
}
if(s==i)
cout<<i<<" ";

}

}
