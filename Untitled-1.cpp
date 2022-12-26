#include <iostream>

using namespace std;
struct Node{
int data;
Node *left;
Node *right;
};
Node* create(int item){
    Node* node=new Node;
    node->data=item;
    node->left=node->right = NULL;
    return node;

}
Node* insertion(Node* root, int item) //Insert a node
{

    if(root == NULL){
        return create(item);//return new node if tree is empty
        }
    if(item < root->data){
        root->left = insertion(root->left,item);
        cout<<"Node inserted on left  side"<<endl;
        }
    else{
       root->right = insertion(root->right,item);
        cout<<"Node inserted on right side"<<endl;
        }
    return root;
}

int main()
{
    Node* root = NULL;
    root=insertion(root,10);
    root=insertion(root,15);
    root=insertion(root,7);
    root=insertion(root,9);
    root=insertion(root,9);
    root=insertion(root,2);
    cout<<root;

    return 0;

}
