import java.util.*;
public class Camelcase{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
  if(s.length()==0)
  {
    System.out.println("");
  }
  else{
StringBuffer sb=new StringBuffer();
String a[]=s.split(" ");
for(int i=0;i<a.length;i++){
String q=a[i];
sb.append(Character.toUpperCase(q.charAt(0)));
if(q.length()>0)
sb.append(q.substring(1).toLowerCase());
}
System.out.println(sb);
}
}
}
