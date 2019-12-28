import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    String S = sc.next();
    String[] sArr = S.split("");
    int[] answer = new int[6];

    for (int i = 0; i < 6; i++) {
      answer[i] = 0;
    }

    for (int i = 0; i < sArr.length; i++) {
      if (sArr[i].equals("A")) {
        answer[0]++;
      } else if (sArr[i].equals("B")) {
        answer[1]++;
      } else if (sArr[i].equals("C")) {
        answer[2]++;
      } else if (sArr[i].equals("D")) {
        answer[3]++;
      } else if (sArr[i].equals("E")) {
        answer[4]++;
      } else if (sArr[i].equals("F")) {
        answer[5]++;
      }
    }

    for (int i = 0; i < 6; i++) {
      System.out.print(answer[i]);
      if (i != 5){
        System.out.print(" ");
      }
    }

    System.out.println("");

  }
}