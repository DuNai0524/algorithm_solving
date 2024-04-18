import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A {

    // 回溯
    public static void backTrace(int n,int m,List<Integer> path,int sum,int startIndex) {
        if(sum == m){
            for(int i = 0; i < path.size(); i++){
                System.out.print(path.get(i)+" ");
            }
            System.out.println();
            return;
        }else if(sum > m)return;

        for(int i = startIndex; i <= n; i++){
            sum += i;
            path.add(i);
            backTrace(n, m, path, sum, i + 1);
            sum -= i;
            path.remove(path.size() - 1);
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        backTrace(n, m, new ArrayList<Integer>(), 0, 1);
    }
}