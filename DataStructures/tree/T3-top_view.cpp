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

    void topView(Node *root)
    {
        map<int, int> mp;
        queue<pair<int, Node *>> q;
        q.push({0, root});
        while (!q.empty())
        {
            auto it = q.front();
            q.pop();
            Node *node = it.second;
            int line = it.first;
            if (!mp[line])
                mp[line] = node->data;
            if (node->left)
                q.push({line - 1, node->left});
            if (node->right)
                q.push({line + 1, node->right});
        }
        for (auto itr : mp)
        {
            cout << itr.second << " ";
        }
    }
};

int main()
{

    Solution myTree;
    Node *root = NULL;

    int t;
    int data;

    std::cin >> t;

    while (t-- > 0)
    {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.topView(root);

    return 0;
}
