import java.util.*;

public class Inverse{

public static void main(String[] args) {
  // write your code here  
  Scanner scn = new Scanner(System.in);
  String numstr = scn.nextLine();
  
  char[] no = numstr.toCharArray();
  int len = numstr.length();
  int sumlen = len*(len+1)/2;
  int sum=0;
  char[] revno = new char[len+1];
  char[] invrevno = new char[len+1];
  char[] invno = new char[len+1];
  
  for(char a:no){
      sum += Character.getNumericValue(a); 
  }
  if(sumlen == sum && len>3){
      //reverse no with 1 index array
      for(int i=len-1;i>=0;i--){
          revno[len-i]=no[i];
      }
      for(int j=1;j<=len;j++){
          invrevno[Character.getNumericValue(revno[j])] = (char)(j+'0');
      }
      for(int k=len;k>=1;k--){
          invno[len-k]=invrevno[k];
      }
      String opstr = new String(invno);  
      System.out.println(opstr);
  }
  
 }
}
