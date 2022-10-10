//level order traversal breadth first search 
// o(n)^2 --> hight time's lvl printing prosess
//o(n) with queue
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};
node* bulidtree(node* root){
    cout<<"enter the data for the node expt 0"<<endl;
    int data;
    cin>>data;
    if(!data){return NULL;}
        root=new node(data);
    cout<<"for left part"<<endl;
    root->left=bulidtree(root->left);
    cout<<"for right part"<<endl;
    root->right=bulidtree(root->right);
    return root;
}
// hight of the tree(ore vaiii)
int heightof(node*root){
    if(root==NULL)return 0;
    return (max(heightof(root->left),heightof(root->right))+1);
}
// o(n)^2
void LevelOrderTraversal(node* root,int lvl){
    if(root==NULL)return;
    if(lvl==1){
        cout<<root->data<<" ";
        return;
    }
    LevelOrderTraversal(root->left,lvl-1);
    LevelOrderTraversal(root->right,lvl-1);
}
int main(){
node* root=NULL;
root=bulidtree(root);
// o(n)^2
cout<<"the height of the tree is-> "<<heightof(root)<<endl;
cout<<"now printing the tree in lvl order"<<endl;
for(int i=1;i<=heightof(root);i++){
    LevelOrderTraversal(root,i);
}
cout<<"Sucsess!"<<endl;
}
