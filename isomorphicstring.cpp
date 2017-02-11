#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
using namespace std;
bool isIsomorphic(char a[],char b[]){
int len=strlen(a);
int len2=strlen(b);
if(len!=len2)
return false;
bool visited[256]={false};
int map[256];
memset(map,-1,sizeof(map));
for(int i=0;i<len;i++){
if(map[a[i]]==-1){
if(visited[b[i]]==true)
return false;
visited[b[i]]=true;
map[a[i]]=b[i];
}
else if(map[a[i]]!=b[i])
return false;
}
return true;
}
int main(){
char a[256],b[256];
cin>>a>>b;
int flag=isIsomorphic(a,b);
if(flag==1)
    cout<<"True";
else
    cout<<"False";
}
