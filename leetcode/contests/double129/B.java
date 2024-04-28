package leetcode.contests.double129;

public class B {
    public long numberOfRightTriangles(int[][] grid) {
        long ans = 0;
        // 统计每行每列几个1，然后用数学方法做出来
        int n = grid.length;
        int m = grid[0].length;
        int[] h = new int[n];
        int[] l = new int[m];
        for(int i = 0; i < n; i++){
            for(int j = 0;j<m;j++) {
                if(grid[i][j]==1)h[i]++;
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0;j<n;j++) {
                if(grid[j][i]==1)l[i]++;
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0;j<m;j++) {
                if(grid[i][j]==1){
                    ans += (h[i] - 1) * (l[j] - 1);
                }
            }
        }
        return ans;
    }
}
