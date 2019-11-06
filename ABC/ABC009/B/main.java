  import java.util.*;

  public class Main {
    public static void main(String[] args){

      Scanner sc = new Scanner(System.in);
      int N = sc.nextInt();
      
      Map<Integer, Integer> map = new HashMap<Integer, Integer>();

      for( int i = 0; i < N; i++){
        int s = sc.nextInt();
        if (!map.containsKey(s)) {
          map.put(s, 1);
        }
      }

      List<Integer> sortedKeys = new ArrayList(map.keySet());
      
      Collections.sort(sortedKeys, Comparator.reverseOrder());

      System.out.println(sortedKeys.get(1));

    }
  }