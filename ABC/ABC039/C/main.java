import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    String s = sc.next();

    sc.close();

    String S = s.substring(0,12);

    String[] patterns = {"WBWBWWBWBWBW", "WBWWBWBWBWWB", "WWBWBWBWWBWB", "WBWBWBWWBWBW", "WBWBWWBWBWWB", "WBWWBWBWWBWB", "WWBWBWWBWBWB"};
    
    String[] musicalScale = {"Do", "Re", "Mi", "Fa", "So", "La", "Si"};

    for (int i = 0; i < 7; i++) {
      if (S.equals(patterns[i])){
        System.out.println(musicalScale[i]);
        break;
      }
    }

  }

}