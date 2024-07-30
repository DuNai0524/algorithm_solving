package leetcode.contests.contest393;

public class A {
    public String findLatestTime(String s) {
        char[] c = s.toCharArray();
        boolean x = c[0] == '?';
        boolean y = c[1] == '?';
        if (x && y) {
            c[0] = '1';
            c[1] = '1';
        } else if (x) {
            c[0] = c[1] <= '1' ? '1' : '0';
        } else if (y) {
            c[1] = c[0] == '0' ? '9' : '1';
        }
        if (c[3] == '?') c[3] = '5';
        if (c[4] == '?') c[4] = '9';
        return new String(c);
    }
}
