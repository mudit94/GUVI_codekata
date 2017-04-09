#include<iostream>
using namespace std;
struct Point{
int x,y;
};
bool doOverlap(Point l1,Point r1, Point l2, Point r2){
if(l1.x>r2.x||l2.x>r1.x)
return false;

if(l1.y<r2.y||l2.y<r1.y)
return false;
return true;
}
int main(){
Point l1,r1,l2,r2;
int x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
l1.x=x1;
l1.y=y1;
r1.x=x2;
r1.y=y2;
l2.x=x3;
l2.y=y3;
r2.x=x4;
r2.y=y4;
int res=doOverlap(l1,r1,l2,r2);
if(res==1)
cout<<"Rectangles overlap";
else
cout<<"Rectangles do not overlap";
}
