// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}
bool isSymmetric(struct Node* root);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
        if(isSymmetric(root))
            cout<<"True"<<endl;
        else 
            cout<<"False"<<endl;
  }
  return 0;
}
// } Driver Code Ends
/*
Structure of the node of the tree is as
struct Node
{
	int data;
	struct Node* left, *right;
};
*/
// complete this function
// return true/false if the is Symmetric or not

bool ismirror(Node* r1, Node* r2) {
    if (!r1 && !r2) {
        return true;
    }
    if (!r1 || !r2) {
        return false;
    }
    return (r1->data == r2->data && 
    ismirror(r1->left, r2->right) && 
    ismirror(r1->right, r2->left));
}

bool isSymmetric(struct Node* root)
{
	// Code here
	return (ismirror(root, root));
}