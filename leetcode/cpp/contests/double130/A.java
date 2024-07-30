package leetcode.contests.double130;

public class A {
    public boolean satisfiesConditions(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        for(int i = 0; i < n; i++) {
            for(int j = 0;j < m;j ++) {
                // 判断右边
                if(j + 1 < m){
                    if(grid[i][j] == grid[i][j+1])return false;
                }
                // 判断下边
                if(i + 1 < n){
                    if(grid[i][j] != grid[i+1][j])return false;
                }
            }
        }
        return true;
    }
}
