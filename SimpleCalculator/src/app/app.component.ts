import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
//  title = 'app works!';
resultText="";
num;
flag=1;
callMe(event:any){
//  console.log(event);
if(this.flag==1)
this.resultText=this.resultText+event;
else {
  this.resultText=event;
this.flag=1;}
if(this.resultText.length>15)
{
  this.resultText="out of limit";
}
}
erase(){
  this.resultText="";
}
add(operand){
  this.resultText=this.resultText+""+operand;
  this.flag=1;
}
equals(){
  this.resultText=eval(this.resultText);
  this.flag=0;
}}
