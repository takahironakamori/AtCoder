import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int N = sc.nextInt();
    int[] B = new int[N+1];

    for (int i = 2; i < N+1; i++) {
      B[i] = sc.nextInt();
    }
    
    sc.close();

    // 部下の数
    TreeMap<Integer, List> map = new TreeMap<>();

    // 部下の数を計算
    for (int i = 2; i < N+1; i++) {
      if (map.containsKey(B[i])) {
        List<Integer> list_ = map.get(B[i]);
        list_.add(i);
        map.put(B[i], list_);
      } else {
        List<Integer> list_ = new ArrayList<Integer>();
        list_.add(i);
        map.put(B[i], list_);
      }
    }

    // 社員の給料
    long[] salary = new long[N+1];

    // 社員の給料を計算
    for (int i = N; 0 < i; i--) {

      if (map.containsKey(i)) {
        List<Integer> list_ = map.get(i);
        if (1 == list_.size()) {
          salary[i] = salary[list_.get(0)] * 2 + 1;
        } else{
          long max = salary[list_.get(0)];
          long min = salary[list_.get(0)];
          for (int j = 1; j < list_.size(); j++) {
            max = Math.max(max, salary[list_.get(j)]);
            min = Math.min(min, salary[list_.get(j)]);
          }
          salary[i] = max + min + 1;
        }
      } else {
        salary[i] = 1;
      }
    }

    System.out.println(salary[1]);
    
  }

}
