//User function Template for C++
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
int countNonLeafNodes(Node* root)
{
    // only gravity will pull me down

    // Count Non-Leaf Nodes in Tree
    
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return 0;
    return 1+countNonLeafNodes(root->left)+countNonLeafNodes(root->right);
}