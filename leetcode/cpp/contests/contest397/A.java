package leetcode.contests.contest397;

/**
 * A
 */
public class A {
    public int findPermutationDifference(String s, String t) {
        int ans = 0;
        int n = s.length();
        for(int i = 0;i < n; i++) {
            for(int j = 0; j < n; j ++) {
                if(s.charAt(i) == t.charAt(j))ans += Math.abs(i - j);
            }
        }
        return ans;
    }
    
}