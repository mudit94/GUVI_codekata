#include<stdio.h>
int main(){
int num,r,s=0;
scanf("%d",&num);
while(num){
r=num%10;
s+=1;
num/=10;
}
printf("%d",s);
}
