class Solution {
public:
    struct camera{
        bool has=false;
        bool need=false;
        bool covered=false;
    };
    int count=0;
    camera helper(TreeNode* root){
        if(!root) return {false,false,true};
        camera left=helper(root->left);
        camera right=helper(root->right);
        if(left.need || right.need){
            count++;
            return {true,false,true};
        }
        if(left.has || right.has) return {false,false,true};
        if(left.covered && right.covered) return {false,true,false};
        return {false,false,false};  
    }
    int minCameraCover(TreeNode* root) {
        camera cam=helper(root);
        if(cam.need && !cam.covered) count++;
        //helper(root);
        return count;
    }
};