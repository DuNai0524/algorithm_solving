package leetcode.contests.contest394;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class A {
    public int numberOfSpecialChars(String word) {
        int ans = 0;
        int n = word.length();
        Set<Character> set_upper = new HashSet<>();
        Set<Character> set_lower = new HashSet<>();
        for(int i = 0 ; i < n; i++) {
            if(Character.isUpperCase(word.charAt(i))){
                set_upper.add(Character.toLowerCase(word.charAt(i)));
            }else{
                set_lower.add(word.charAt(i));
            }
        }
        // 找两个 set 中的交集
        for(char c:set_upper){
            if(set_lower.contains(c))ans++;
        }
        return ans;
    }
}
