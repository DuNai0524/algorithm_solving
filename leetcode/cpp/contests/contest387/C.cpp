#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperationsToWriteY(vector<vector<int> > &grid) {
        int ans = 0;
        vector<int> countNormal(3, 0); // 非对角线上统计元素
        vector<int> countAbNormal(3, 0); // 对角线以及中心线往下走统计元素
        int n = grid.size(), m = grid[0].size();
        int mid_i = n / 2, mid_j = m / 2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // y 上面部分的情况
                if ((i == j && i <= mid_i) || (j == (n - i - 1) && i <= mid_i)) {
                    countAbNormal[grid[i][j]]++;
                } else if (j == mid_j && i > mid_i) {
                    countAbNormal[grid[i][j]]++;
                } else {
                    countNormal[grid[i][j]]++;
                }
            }
        }

        int sum_normal = 0;
        // 统计众数，然后判断
        int index_normal = 0;
        for (int i = 0; i < 3; i++) {
            sum_normal += countNormal[i];
            cout << countNormal[i] << " ";
            if (countNormal[index_normal] < countNormal[i])index_normal = i;
        }
        cout << endl;

        int sum_abnormal = 0;
        int index_abnormal = 0;
        for (int i = 0; i < 3; i++) {
            sum_abnormal += countAbNormal[i];
            cout << countAbNormal[i] << " ";
            if (countAbNormal[index_abnormal] < countAbNormal[i])index_abnormal = i;
        }
        cout << endl;

        if (index_normal == index_abnormal) {
            if ((sum_normal - countNormal[index_normal]) > (sum_abnormal - countAbNormal[index_abnormal])) {
                ans += countAbNormal[index_abnormal];
                countAbNormal[index_abnormal] = 0;
                for (int i = 0; i < 3; i++) {
                    if (countAbNormal[index_abnormal] < countAbNormal[i])index_abnormal = i;
                }
            } else if ((sum_normal - countNormal[index_normal]) == (sum_abnormal - countAbNormal[index_abnormal])){
                if (countNormal[index_normal] < countAbNormal[index_abnormal]) {
                    ans += countNormal[index_abnormal];
                    for (int i = 0; i < 3; i++) {
                        if (countNormal[index_normal] < countNormal[i])index_normal = i;
                    }
                } else {
                    ans += countAbNormal[index_abnormal];
                    countAbNormal[index_abnormal] = 0;
                    for (int i = 0; i < 3; i++) {
                        if (countAbNormal[index_abnormal] < countAbNormal[i])index_abnormal = i;
                    }
                }
            } else {
                ans += countNormal[index_normal];
                countNormal[index_normal] = 0;
                for (int i = 0; i < 3; i++) {
                    if (countNormal[index_normal] < countNormal[i])index_normal = i;
                }
            }
        }
        for (int i = 0; i < 3; i++) {
            if (i != index_normal)ans += countNormal[i];
            if (i != index_abnormal)ans += countAbNormal[i];
        }
        return ans;
    }
};


int main() {
    Solution s;
    int m, n;
    cin >> m >> n;
    vector<vector<int> > vec(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> vec[i][j];
        }
    }
    cout<<s.minimumOperationsToWriteY(vec);
}
