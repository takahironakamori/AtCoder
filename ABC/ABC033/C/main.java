import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    String s_ = sc.next();

    sc.close();
    
    String[] S = s_.split("");

    int count = 0;
    
    boolean has0 = false;

    for (int i = 0; i < S.length; i++) {
      
      if (i == S.length -1) {
        if (!(S[i].equals("0")) && has0 == false) {
          count++;
        }
      } else {
        if (S[i+1].equals("+")) {
          if (!(S[i].equals("0")) && has0 == false) {
            count++;
          }
          has0 = false;
        } else {
          if (S[i].equals("0")) {
            has0 = true;
          }
        }
      }

    }
    
	System.out.println(count);
    
  }

}
