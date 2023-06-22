#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
      node* left;
      node* right;
      node(int data): data(data)
      {}
};
void print(node*n){

}
int main() {
    node*root=new node(1);
    node*node2=new node(2);
    node*node3=new node(3);
    node*node4=new node(4);
    node*node5=new node(5);
    root->left=node2;
    root->right=node3;
node2->left=node4;
node2->right=node5;
cout<<root->left->right->data;
    return 0;
}
