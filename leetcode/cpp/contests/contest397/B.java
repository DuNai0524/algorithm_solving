package leetcode.contests.contest397;

public class B {
    public int maximumEnergy(int[] energy, int k) {
        int n = energy.length;
        int ans = Integer.MIN_VALUE;
        int[] result = new int[n];
        for(int i = 0;i < n; i++){
            result[i] = energy[i];
        }
        for(int i = 0; i < n; i++) {
            if(i - k >=0){
                result[i] = Math.max(energy[i], result[i - k] + energy[i]);
            }else result[i] = energy[i];
        }
        for(int i = n - 1; i >= n - k;i--){
            ans = Math.max(ans, result[i]);
        }
        return ans;
    }
}
