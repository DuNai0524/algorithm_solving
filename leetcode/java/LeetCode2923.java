package leetcode.java;

import java.util.List;

public class LeetCode2923 {
    public int findChampion(int[][] grid) {
        int n = grid.length;
        for (int i = 0 ; i < n; i++) {
            int sum = 0;
            for(int j = 0;j < n;j++){
                sum += grid[i][j];
            }
            if( sum == n - 1)return i;
        }
        return -1;
    }
}
