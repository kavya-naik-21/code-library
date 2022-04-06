#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    void postOrder(Node *root)
    {
        if (root->left)
            postOrder(root->left);
        if (root->right)
            postOrder(root->right);
    std:
        cout << root->data << " ";
    }
    void preOrder(Node *root)
    {
        cout << root->data << " ";
        if (root->left)
            preOrder(root->left);
        if (root->right)
            preOrder(root->right);
    }
    void inOrder(Node *root)
    {
        if (root->left)
            inOrder(root->left);
        cout << root->data << " ";
        if (root->right)
            inOrder(root->right);
    }

    int height(Node *root)
    {
        // Write your code here.
        int h = 0;
        if (root->left)
            h = 1 + height(root->left);
        if (root->right)
            h = max(h, 1 + height(root->right));
        return h;
    }

}; // End of Solution

int main()
{

    Solution myTree;
    Node *root = NULL;

    int t;
    int data;

    cin >> t;

    while (t-- > 0)
    {
        cin >> data;
        root = myTree.insert(root, data);
    }
    Node *head = root;
    myTree.postOrder(root);
    root = head;
    myTree.preOrder(root);
    root = head;
    myTree.inOrder(root);

    int height = myTree.height(root);
    cout << height;
    return 0;
}
