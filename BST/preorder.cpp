#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }
};

void preorder(Node* root)
{
    if (root == NULL)
        return;
    stack<Node*> s;
    s.push(root);
    while (s.empty() == false) {
        struct Node* node = s.top();
        printf("%d ", node->data);
        s.pop();
        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
}
int main()
{
    struct Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->right=new Node(6);
    preorder(root);
    return 0;
}
