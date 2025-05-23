class Solution:
    def lowestCommonAncestor(self, root: 'TreeNode', p: 'TreeNode', q: 'TreeNode') -> 'TreeNode':
        if not root or not p or not q:
            return None
        if (max(p.val, q.val) < root.val):
            return self.lowestCommonAncestor(root.left, p, q)
        elif (min(p.val, q.val) > root.val):
            return self.lowestCommonAncestor(root.right, p, q)
        else:
            return root
    
    def iter(self, root, p, q):
        if not root or not p or not q:
            return None
        node = root
        while node:
            if max(p.val, q.val) < node.val:
                node = node.left
            elif min(p.val, q.val) > node.val:
                node = node.right
            else:
                return node
        return node
