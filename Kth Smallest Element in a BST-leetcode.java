class Solution {
    int ans,count;

    private boolean findKth(TreeNode root,int k){
        if(root==null)return false;
        if(findKth(root.left,k)) return true;
        this.count++;
        if(this.count==k){
            this.ans = root.val;
            return true;
        }
        return findKth(root.right,k);
    }
    public int kthSmallest(TreeNode root, int k) {
        findKth(root,k);
        return this.ans;
    }
}
