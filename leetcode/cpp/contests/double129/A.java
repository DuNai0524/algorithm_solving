package leetcode.contests.double129;

public class A {
    public boolean canMakeSquare(char[][] grid) {
        // 数四个角就可以了
        int[][] vis = {{1,0},{0,1},{1,1},{0,0}};
        for(int i = 0;i<=1;i++){
            for(int j = 0;j<=1;j++){
                int countB = 0,countW = 0;
                for(int k = 0;k<4;k++){
                    if(grid[i+vis[k][0]][j+vis[k][1]]=='W')countW++;
                    else countB++;
                }
                if(countB == 1 || countW == 1 || countB == 0 || countW == 0)return true;
            }
        }
        return false;
    }
}
