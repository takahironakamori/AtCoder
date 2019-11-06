import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    String s = sc.next();
    String t = sc.next();

    sc.close();

    String[] S = s.split("");
    String[] T = t.split("");

    String result = "You can win";

    for (int i = 0; i < S.length; i++) {
      if (S[i].equals("@")) {
        if (!(T[i].equals("@")) &&
            !(T[i].equals("a")) &&
            !(T[i].equals("t")) && 
            !(T[i].equals("c")) && 
            !(T[i].equals("o")) && 
            !(T[i].equals("d")) && 
            !(T[i].equals("e")) &&
            !(T[i].equals("r"))) {
              result = "You will lose";
              break;
        }
      } else if (T[i].equals("@")) {
        if (!(S[i].equals("@")) &&
            !(S[i].equals("a")) &&
            !(S[i].equals("t")) && 
            !(S[i].equals("c")) && 
            !(S[i].equals("o")) && 
            !(S[i].equals("d")) && 
            !(S[i].equals("e")) &&
            !(S[i].equals("r"))) {
              result = "You will lose";
              break;
        }
      } else if (!(S[i].equals(T[i]))) {
        result = "You will lose";
        break;
      }
    }

    System.out.println(result);

  }

}