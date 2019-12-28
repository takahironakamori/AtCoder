import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    String S = sc.next();

    int count = (N + 1 ) / 2;
    String answer = "b";
    int result = -1;

    for (int i=1; i<count; i++) {
      if ((i % 3) == 1) {
        answer = "a" + answer + "c";
      } else if ((i % 3) == 2) {
        answer = "c" + answer + "a";
      } else if ((i % 3) == 0) {
        answer = "b" + answer + "b";
      }
    }

    if (answer.equals(S)) {
      result = count - 1;
    }    

    System.out.println(result);

  }
}