package leetcode.java;

public class LeetCode1026 {
    public int maxAncestorDiff(TreeNode root) {
        int ans = dfs(root, root.val, root.val);
        return ans;
    }

    public int dfs(TreeNode root,int mi,int ma){
        if(root == null) return 0;
        int diff = Math.max(Math.abs(root.val - mi), Math.abs(root.val - ma));
        mi = Math.min(mi, root.val);
        ma = Math.max(ma, root.val);
        diff = Math.max(diff, dfs(root.left, mi, ma));
        diff = Math.max(diff, dfs(root.right, mi, ma));
        return diff;
    }
}
