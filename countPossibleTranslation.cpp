#include<iostream>
#include<string.h>
using namespace std;
int countPossibleTranslation(char* a,int n){
if(n<=1)
return 1;
int count[n+1];
count[0]=1;
count[1]=1;
for(int i=2;i<=n;i++)
{count[i]=0;
if(a[i-1]>'0')
count[i]=count[i-1];
if(a[i-2]<'2'||(a[i-2]=='2'&&a[i-2]<'7'))
count[i]+=count[i-2];
}
return count[n];
}
int main(){
char a[2000];
cin>>a;
int n=strlen(a);
cout<<countPossibleTranslation(a,n)<<"\n";
}
