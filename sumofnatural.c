#include<stdio.h>
int main(){
int num,sum=0,i;
scanf("%d",&num);
  if(num<0)
    printf("0");
  else{
sum=num*(num+1)/2;
printf("%d\n",sum);}
}
