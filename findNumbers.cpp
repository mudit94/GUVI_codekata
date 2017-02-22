#include<iostream>
using namespace std;
int main(){
int n,i,j,k;
cin>>n;
int a[2000];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++){
for(j=01;j<n;j++){
for(k=0;k<n;k++){
if((a[i]*a[i])+(a[j]*a[j])==(a[k]*a[k])){
//cout<<a[i]*a[i]<<" "<<a[j]*a[j]<<" "<<a[k]*a[k]<<endl;
cout<<a[i]<<" "<<a[j]<<" "<<a[k];
cout<<endl;
}
}
}

}
}
