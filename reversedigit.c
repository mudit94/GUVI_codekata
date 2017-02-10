#include<stdio.h>
int main(){
int num,r,s=0;
scanf("%d",&num);
while(num){
r=num%10;
s=s*10+r;
num/=10;
}
printf("%d",s);
}
