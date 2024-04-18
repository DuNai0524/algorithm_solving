package leetcode.contests.contest393;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class B {
    Integer[] primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    public int maximumPrimeDifference(int[] nums) {
        int dis = 0;
        List<Integer> primeList = Arrays.asList(primes);
        List<Integer> t = new ArrayList<>();
        for(int i = 0; i < nums.length; i++ ){
            if(primeList.contains(nums[i]))t.add(i);
        }
        dis = t.get(t.size() - 1) - t.get(0);
        return dis;
    }
}
