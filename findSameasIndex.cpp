#include<iostream>
using namespace std;
int findSameasIndex(int a[],int n){
int i,pos=-1,flag=0;
for(i=0;i<n;i++){
if(a[i]==i){
flag=1;
pos=i;
break;
}

}
return pos;

}
int main(){
  int n;
  cin>>n;
  int a[256];
  for(int i=0;i<n;i++)
  cin>>a[i];
  cout<<findSameasIndex(a,n);
}
