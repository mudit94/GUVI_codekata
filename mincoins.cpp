#include<iostream>
#include<climits>
using namespace std;
int getminimumCoins(int coins[],int n,int sum){
int table[sum+1];
table[0]=0;
int i,j,subres;
for(i=1;i<=sum;i++)
table[i]=INT_MAX;
for(i=1;i<=sum;i++){
for(j=0;j<n;j++){
if(coins[j]<=i){
subres=table[i-coins[j]];
if(subres!=INT_MAX && subres+1<table[i])
table[i]=subres+1;
}
}
}
return table[sum];
}
int main(){
int n,sum,i;
cin>>n>>sum;
int a[256];
for(i=0;i<n;i++)
cin>>a[i];
cout<<getminimumCoins(a,n,sum);
}
