import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String[] S = new String[12];

    for (int i = 0; i < 12; i++) {
      S[i] = sc.next();
    }

    int answer = 0;

    for (int i = 0; i < 12; i++) {
      int result = S[i].indexOf("r");
      if (result != -1) {
        answer++;
      }
    }

    System.out.println(answer);

  }
}