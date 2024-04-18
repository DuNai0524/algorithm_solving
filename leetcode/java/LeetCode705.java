package leetcode.java;

import java.util.HashMap;
import java.util.Map;

public class LeetCode705 {
    
}

class MyHashSet {
    boolean[] set;
    public MyHashSet() {
        set = new boolean[1000010];
    }
    
    public void add(int key) {
        set[key] = true;
    }
    
    public void remove(int key) {
        set[key] = false;
    }
    
    public boolean contains(int key) {
        return set[key];
    }
}