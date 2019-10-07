import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);

    String[] s1 = new String[4]; 
    String[] s2 = new String[4]; 
    String[] s3 = new String[4]; 
    String[] s4 = new String[4]; 

    for (int i = 0; i < 4; i++) {
      s1[i] = sc.next();
    }

    for (int i = 0; i < 4; i++) {
      s2[i] = sc.next();
    }

    for (int i = 0; i < 4; i++) {
      s3[i] = sc.next();
    }

    for (int i = 0; i < 4; i++) {
      s4[i] = sc.next();
    }

    sc.close();
    
    System.out.println(s4[3] + " " +s4[2] + " " + s4[1] + " " + s4[0]);
    System.out.println(s3[3] + " " +s3[2] + " " + s3[1] + " " + s3[0]);
    System.out.println(s2[3] + " " +s2[2] + " " + s2[1] + " " + s2[0]);
    System.out.println(s1[3] + " " +s1[2] + " " + s1[1] + " " + s1[0]);
    
  }
}
