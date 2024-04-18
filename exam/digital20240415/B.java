import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class B {
        public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] count = new int[101];
        // 注意 hasNext 和 hasNextLine 的区别
        int n = in.nextInt();
        int m = in.nextInt();
        for(int i = 0; i<n;i++){
            int t = in.nextInt();
            count[t]++;
        }
        int ans = 0;
        for(int i = 1;i<=m;i++){
            if(count[i]!=0){
                ans = Math.max(ans, count[i]);
            }
        }
        System.out.println(ans);
    }
}
