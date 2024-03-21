#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    // 回溯 + 判断，模板套起来
    vector<vector<string>> ans;

    void backTrace(int n,int row,vector<string>& chessboard) {
        if(row == n) {
            ans.push_back(chessboard);
            return;
        }

        for(int col = 0; col < n; col ++) {
            if(isValid(row,col,chessboard,n)) {
                chessboard[row][col] = 'Q';
                backTrace(n,row+1,chessboard);
                chessboard[row][col] = '.';
            }
        }
    }

    bool isValid(int row,int col,vector<string>& chessboard,int n) {
        for (int i = 0; i < row; i++) {
            if (chessboard[i][col] == 'Q') {
                return false;
            }
        }
        for (int i = row - 1, j = col - 1; i >=0 && j >= 0; i--, j--) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }
        for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (chessboard[i][j] == 'Q') {
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> chessboard(n,string(n,'.'));
        backTrace(n,0,chessboard);
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
