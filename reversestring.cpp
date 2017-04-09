#include<iostream>
#include<string.h>
using namespace std;
int main(){
char a[1000000];
cin>>noskipws>>a;
char temp;
int len=strlen(a);
  int i;
  if(len==0){
    cout<<"Not valid string";
    return 0;}
  else{
for(int i=0;i<len/2;i++)
{
temp=a[i];
a[i]=a[len-i-1];
a[len-i-1]=temp;
}
cout<<a<<"\n";
}
}
