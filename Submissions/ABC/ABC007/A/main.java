import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    
    HashMap<String, Integer> hashMap = new HashMap<>();

    for (int i = 0; i < N; i++){
      String s = sc.next();
      if (hashMap.containsKey(s)){
        int v = hashMap.get(s);
        hashMap.put(s, v + 1);
      } else {
        hashMap.put(s, 1);
      }
    }

    sc.close();

    String result = "";
    int max = 0;

    for (Map.Entry<String, Integer> map : hashMap.entrySet()) {
      if (max < map.getValue()) {
        result = map.getKey();
        max = map.getValue();
      }
    }

    System.out.println(result);

  }

}