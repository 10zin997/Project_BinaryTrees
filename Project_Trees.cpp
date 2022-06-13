#include <iostream>

using namespace std;

int COUNTER = 0;
int leftCounter = 0;
int rightCounter = 0;

struct Node{
    int data;
    Node *left;
    Node *right;
};

Node *root;

class Tree{
    public:
    Tree(){
        root = NULL;
    }
    public:
        Node* insert2(Node *temp, Node *newNode){
            if(temp == NULL){
                temp = newNode;
                return temp;
            }
            else if(temp->data < newNode->data){
                
                COUNTER++;
                insert2(temp->left, newNode);
                rightCounter++;
                if (temp->right == NULL)
                   temp->right = newNode;

            }else{
                insert2(temp->right, newNode);
                leftCounter++;
                
                if (temp-> left == NULL)
                    temp->left = newNode;
                }
                return temp;
            }
        
    public:
        void insert1(int newData){
            Node *temp = root;
            Node *newNode;
            newNode = new Node;
            newNode ->left = NULL;
            newNode ->right = NULL;
            newNode ->data = newData;
            root = insert2(temp, newNode);
        }
    public:
    //create preorder traversal
        void preOrderTraversal (Node *temp = root){
            if(root == NULL){
                cout<< "Tree is empty" << endl;
            }
            else if (temp != NULL){
                   cout << temp->data <<"->";
                    preOrderTraversal(temp->left);
                    preOrderTraversal(temp->right);
                }
            }
    public:
    //create inorder traversal
        void inOrderTraversal (Node *temp = root){
            if(root == NULL){
                cout<< "Tree is empty" << endl;
                }
                else if (temp != NULL){
                    inOrderTraversal(temp->left);
                    cout << temp->data <<"->";
                    inOrderTraversal(temp->right);
                }
            }
        
    public:
    //create postorder traversal
        void postOrderTraversal (Node *temp = root){
            if(root == NULL){
                cout<< "Tree is empty" << endl;
            }
            else if (temp != NULL){
                    postOrderTraversal(temp->left);
                    postOrderTraversal(temp->right);
                    cout << temp->data <<"->";
                }
            }
    public:
    // delete node
    void deleteNode(int key){
        Node *temp;
        Node *parent;
        Node *temp2;
        temp = root;
        parent = root;
        if(temp == NULL){
            cout<< "Node is empty" << endl;
        }
        else{
            while(temp!= NULL && temp->data != key){
                parent = temp;
                if(temp->data < key){
                    temp = temp->right;
                }
                else{
                    temp = temp->left;
                }
            }
        }
        temp2 = temp;
        if(temp == NULL){
            cout<< "Node is empty" << endl;
        }
        else if(temp == root){
            if(temp->right == NULL && temp->left == NULL){
                root = NULL;
            }
            else if (temp -> left == NULL){
                root = temp->right;

        }
        else if( temp -> right == NULL){
            root = temp->left;
        }
        else{
            Node *temp3;
            temp3 = temp->right;
            while(temp3->left != NULL){
                temp = temp3;
                temp3 = temp3->left;
            }
        if(temp3!= temp->right){
            temp->left = temp3->right;
            temp3->right = root->right;
        }
        temp3->left = root->left;
        root = temp3;

        }
        }
    delete temp2;
            
    }
};

int main(){
    Tree obj;
    int option, data, key;
    while(1){
        cout<<"----------------------------------------------------"<<endl;
        cout<<"1. Insert a node in a tree:"<<endl;
        cout<<"2. Delete a node in a tree:"<<endl;
        cout<<"3. Print the binary tree"<<endl;
        cout<<"-----Enter -999 to exit the program-----"<<endl;
        cout<<"Enter your option: "<<endl;
        cin>>option;
    switch(option){
        case 1:
            cout<<"Enter the Node"<<endl;
            cin>>data;
            obj.insert1(data);
            break;
        case 2:
            cout<<"Enter to delete Node"<<endl;
            cin>>key;
            obj.deleteNode(key);
            cout<<"Node deleted"<<endl;
            break;
        case 3:
            obj.preOrderTraversal();
            cout<<"Preorder Traversal"<<endl;
            obj.inOrderTraversal();
            cout<<"Inorder Traversal"<<endl;
            obj.postOrderTraversal();
            cout<<"Postorder Traversal"<<endl<<endl;
            cout<<"The total number of nodes in the tree is: "<<COUNTER<<endl;
            cout<<"The total number of nodes in the left subtree is: "<<leftCounter<<endl;
            cout<<"The total number of nodes in the right subtree is: "<<rightCounter<<endl;
            break;
        case -999:
            exit(0);
            cout<<"Exiting the program"<<endl;
        default:
            cout<<"Incorrect option picked"<<endl;
            
    }
    
    }
    return 0;

}
