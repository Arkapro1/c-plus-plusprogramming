#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        /////////////this ⬇⬇⬇⬇⬇⬇⬇⬇ is because it should circular not single ---> 
        this->next = this;
        this->prev = this;
    }
};
void print(node* head){
node* conthh = head;
    while(head->next!=conthh){
        cout<<head->data<<" ";
        head=head->next;
        
    }
        cout<<head->data<<" "<<endl;

}
void insertAtEnd(node* consthead,node* &head, int data)
{ 
    node *temp = new node(data);
    head->next = temp;
    temp->prev = head;
    consthead->prev=temp;
    temp->next=consthead;
    head=temp;
   
}
int main()
{   
    node *n1 = new node(5);
    node *head = n1;
    node *consthead = n1;
    print(consthead);
    insertAtEnd(consthead,head,6);
    print(consthead);
    insertAtEnd(consthead,head,7);
    print(consthead);
    insertAtEnd(consthead,head,8);
    print(consthead);
    insertAtEnd(consthead,head,9);
    print(consthead);
    // testing the previous calling ⬇⬇⬇⬇⬇
    // cout<<head->next->next->next->next->next->data<<endl;

}