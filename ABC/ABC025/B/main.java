import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int N = sc.nextInt();
    int A = sc.nextInt();
    int B = sc.nextInt();
    String[] s = new String[N];
    int[] d = new int[N];

    for (int i = 0; i < N; i++) {
      s[i] = sc.next();
      d[i] = sc.nextInt();
    }

    int position = 0;

    for (int i = 0; i < N; i++) {
      if (s[i].equals("East")) {
        if ((A <= d[i]) && (d[i] <= B)) {
          position += d[i];
        } else if (d[i] < A) {
          position += A;
        } else if (B < d[i]) {
          position += B;
        }
      } else {
        if ((A <= d[i]) && (d[i] <= B)) {
          position -= d[i];
        } else if (d[i] < A) {
          position -= A;
        } else if (B < d[i]) {
          position -= B;
        }
      }
    }

    if (position == 0) {
      System.out.println(0);
    } else if (position < 0) {
      System.out.print("West ");
      System.out.println(Math.abs(position));
    } else {
      System.out.print("East ");
      System.out.println(position);
    }

  }
}