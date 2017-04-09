#include<iostream>
using namespace std;
int main(){
int a[6][6],i,j,maxsum=0,sum;
for(i=0;i<6;i++)
{for(j=0;j<6;j++)
cin>>a[i][j];
}
for(i=0;i<4;i++){
for(j=0;j<4;j++)
{sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
if(i==0&&j==0)
maxsum=sum;
if(sum>maxsum)
maxsum=sum;
}
}
cout<<maxsum<<"\n";
}
