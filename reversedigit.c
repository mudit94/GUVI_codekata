#include<stdio.h>
int main(){
int num,r,s=0,flag=0;;
scanf("%d",&num);
r=num%10;
if(r==0)
flag=1;
while(num){
r=num%10;
s=s*10+r;
num/=10;
}
if(flag==1)
printf("0%d",s);
else
printf("%d",s);
}
