#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//Height - Number of nodes on the longest path from this node to a leaf.


class Solution {
public:
    // Balanced height of the BST
    // | height(left) - height(right) | <= 1

    int height ( TreeNode* root){
        if (root  == NULL){
            return 0;
        }
        
        int left = height(root -> left);

        if( left == -1){
            return -1;
        }

        int right = height (root -> right );

        if(right == -1 ){
            return -1;
        }

        if(abs( right - left) > 1){
            return -1;
        }

        return 1 + max(left , right);
        // +1 --> "Count the current node."
        
    }
    bool isBalanced(TreeNode* root) {
        return height ( root ) != -1;
        // if not -1 then return true otherwise false 
    }
};