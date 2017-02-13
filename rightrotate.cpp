#include<iostream>
using namespace std;
int main(){
int n,pos;
cin>>n>>pos;
int a[500];
for(int i=0;i<n;i++){
  cin>>a[(i+pos)%n];
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<"\n";
}
