import java.util.*;

public class Main {

  public static void main (String[] args) {

    Scanner sc = new Scanner(System.in);

    int N = sc.nextInt();
    int M = sc.nextInt();
    int[] A = new int[M];
    int[] B = new int[M];
    List<Integer>[] list = new List[N];

    for (int i = 0; i < N; i++) {
      list[i] = new ArrayList<>();
    }

    for (int i = 0; i < M; i++) {
      A[i] = sc.nextInt() - 1;
      B[i] = sc.nextInt() - 1;
      list[A[i]].add(B[i]);
      list[B[i]].add(A[i]);
    }

    sc.close();

    for (int i = 0; i < N; i++) {
      Set<Integer> answer = new HashSet<Integer>();
      List<Integer> f = list[i]; 
      for (int j = 0; j < f.size(); j++) {
        List<Integer> ff = list[f.get(j)]; 
        for (int k = 0; k < ff.size(); k++) {
          if (ff.get(k) != i && f.contains(ff.get(k)) == false) {
            answer.add(ff.get(k));
          }
        }
      }

      System.out.println(answer.size());

    }

  }

}