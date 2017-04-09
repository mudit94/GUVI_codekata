#include<stdio.h>
int main(){
int num,r,s=0,i;
scanf("%d",&num);
int a[10000];
for(i=0;i<num;i++)
{scanf("%d",&a[i]);
s+=a[i];
}
printf("%d",s);
}
