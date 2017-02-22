import java.util.*;
public class FindRepeating{
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
int a[]=new int[n];
int i=0;
for(i=0;i<n;i++)
a[i]=sc.nextInt();
HashSet<Integer>h=new HashSet<Integer>();
int min=-1;
for(i=a.length-1;i>=0;i--)
{
if(h.contains(a[i]))
min=i;
else
h.add(a[i]);
}
if(min!=-1)
System.out.println(a[min]);
else
System.out.println("All unique elements");
}
}
