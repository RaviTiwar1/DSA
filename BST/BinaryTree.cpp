#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree(node *root)
{

    cout << "Enter the data:" << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    root = new node(data);

    cout << "Enter the left child of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the right child of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // for seperator

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        // SEPERATOR hai ye as a tree wale format m print krne k liye or we can say ki Level order show krne k liye
        if (temp == NULL)
        {
            // purana level complete ho chuka h
            cout << endl;
            if (!q.empty())
            {
                // queue still have some child
                q.push(NULL);
            }
        }
        // seperator khatam yaha aur else wale part me value store hogi
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating the tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    // level Order
    cout<<"Level Order Traversal is:"<<endl;
    levelOrderTraversal(root);
    return 0;
}