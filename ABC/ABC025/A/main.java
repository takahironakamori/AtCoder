import java.util.*;
public class Main {
  public static void main(String[] args){
    
    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    int N = sc.nextInt();
    String[] sArray = S.split("");
    
    String[] rArray = new String[25];
    int count = 0;
    
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
        rArray[count] = sArray[i] + sArray[j];
        count++;
      }
    }
    
    System.out.println(rArray[N-1]);
    
  }
}
