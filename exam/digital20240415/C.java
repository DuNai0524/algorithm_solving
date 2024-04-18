import java.util.Scanner;

public class C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int t = in.nextInt();
        // System.out.println("a:"+a+" b:"+b+" c:"+c+" t:"+t);
        int dis_a = a>t?a-t:t-a;
        int dis_b = b>t?b-t:t-b;
        int dis_c = c>t?c-t:t-c;
        if (dis_a < dis_b && dis_a < dis_c){
            System.out.println("A");
        }else if (dis_b < dis_a && dis_b < dis_c){
            System.out.println("B");
        }else if (dis_c < dis_a && dis_c < dis_b){
            System.out.println("C");
        }else {
            System.out.println("same");
        }
    }
}
