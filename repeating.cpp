#include<iostream>
#include<math.h>
using namespace std;
void getRepeating(int a[],int n){
//bool visited[n];
int i;
for(i=0;i<n;i++){
if(a[abs(a[i])]>=0)
a[abs(a[i])]=-a[abs(a[i])];

else
cout<<abs(a[i])<<" ";
}
}
int main(){
int n,i;
cin>>n;
int a[256];
for(i=0;i<n;i++)
cin>>a[i];
getRepeating(a,n);
}
