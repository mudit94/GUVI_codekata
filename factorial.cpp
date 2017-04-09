#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int num,fact=1,i;
cin>>num;
if(num<0){
    cout<<"Factorial doesn't exists";
    exit(1);}
for(i=num;i>=1;i--){
fact=fact*i;
}
cout<<fact<<"\n";
}
