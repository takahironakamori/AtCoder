import java.util.*;
public class Main {
  public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int W = sc.nextInt();
    int H = sc.nextInt();

    if ((W / 4 * 3) == H){
      System.out.println("4:3");
    } else {
      System.out.println("16:9");
    }

  }
}