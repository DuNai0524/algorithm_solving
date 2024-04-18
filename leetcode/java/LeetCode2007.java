package leetcode.java;

import java.util.*;

public class LeetCode2007 {
    public int[] findOriginalArray(int[] changed) {
        Arrays.sort(changed);
        Map<Integer,Integer> map = new HashMap<>();
        for(int i:changed)map.put(i, map.getOrDefault(i, 0) + 1);
        int[] res = new int[changed.length / 2];
        int i = 0;
        for(int a:changed){
            if(map.get(a)==0)continue;
            map.put(a, map.get(a) - 1);
            if(map.getOrDefault(a * 2, 0) == 0) {
                return new int[0];
            }
            map.put(a * 2, map.get(a * 2) - 1 );
            res[i++] = a;
        }
        return res;
    }
}
