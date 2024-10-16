#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor to initialize node with data and left, right children as NULL
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

                                                        // Function to perform level-order traversal (breadth-first)
void levelOrderTraversal(Node* root)
{
    if (root == NULL)
    {
        cout << "Tree is empty!" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL); // Level separator

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            // Completed one level
            cout << endl;
            if (!q.empty())
            {
                // More levels to process
                q.push(NULL);
            }
        }
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

                                                                            // Function to insert data into BST
Node *insertIntoBST(Node *root, int d)
{
    if (root == NULL)
    {
        root = new Node(d);  // Create a new node if root is NULL
        return root;
    }

    // If data to insert is greater than the root's data, insert into right subtree
    if (d > root->data)
    {
        root->right = insertIntoBST(root->right, d);
    }
    // Otherwise insert into left subtree
    else
    {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

                                                            // Function to take input and insert into BST
void takeInput(Node* &root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        cout << "Inserting: " << data << endl;  // Debugging line
        root=insertIntoBST(root, data);
        cin >> data;
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);     //Left
    cout<<root->data<<" ";   //Node
    inorder(root->right);    //Right
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";      //Node
    preorder(root->left);       //Left
    preorder(root->right);      //Right

    
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }

    postorder(root->left);       //Left
    postorder(root->right);      //Right
    cout<<root->data<<" ";      //Node

    
}

Node* minVal(Node* root){                                   // for minimum value in BST
    Node* temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){                                   // for maximun value in BST
    Node* temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}


Node* deleteFromBST(Node* root, int x){                       //for deletion from BST
    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == x){
        //0 child
        if(root->left==NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->right != NULL && root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right) -> data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
        }

    }
    else if(root->data > x){
        root->left = deleteFromBST(root->left,x);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right,x);
        return root;
    }
}


int main()
{
    Node *root = NULL;
    cout << "Enter data to create BST (end input with -1): ";

    takeInput(root);  // Call function to take input

    cout << "Printing the BST (Level Order Traversal):" << endl;
    levelOrderTraversal(root);  // Print the tree in level-order

    cout<<endl<<"Printing Inorder: ";
    inorder(root);

    cout<<endl<<"Printing Preorder: ";
    preorder(root);

    cout<<endl<<"Printing Postorder: ";
    postorder(root);


                                                                                            // DELETION HO RHA H IDHAR
    root = deleteFromBST(root, /*provide the number u want to delete from the nodes*/);

    cout << "Printing the BST (Level Order Traversal):" << endl;
    levelOrderTraversal(root);  // Print the tree in level-order

    cout<<endl<<"Printing Inorder: ";
    inorder(root);

    cout<<endl<<"Printing Preorder: ";
    preorder(root);

    cout<<endl<<"Printing Postorder: ";
    postorder(root);



    return 0;
}
