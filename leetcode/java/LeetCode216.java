package leetcode.java;

import java.util.ArrayList;
import java.util.List;

public class LeetCode216 {
    List<List<Integer>> ans = new ArrayList<>();
    List<Integer> path = new ArrayList<>();

    public void backTrace(int sum,int n,int k,int num,int startIndex) {
        if(num == k) {
            if(sum == n)ans.add(path);
            return;
        }
        for(int i = startIndex; i <= 9; i++) {
            path.add(i);
            sum += i;
            num++;
            backTrace(sum, n, k, num, i + 1);
            sum -= i;
            num--;
            path.remove(path.size() - 1);
        }
    }

    public List<List<Integer>> combinationSum3(int k, int n) {
        backTrace(0, n, k, 0, 1);
        return ans;
    }
}