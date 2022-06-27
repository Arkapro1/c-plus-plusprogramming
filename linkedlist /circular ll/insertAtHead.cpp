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
void insertAtHead(node* &head,node* n1, int data)
{ 
    node *temp = new node(data);
    temp->next = head;
    head->prev = temp;
    //everytime i need to change the tail->next because fo the now head( AKA temp)
    n1->next = temp;
    // LOOPING frist->previous = last node; ➰
    temp->prev = n1;
    head=temp;
   
}
int main()
{   
    node *n1 = new node(5);
    node *head = n1;
    print(head);
    insertAtHead(head,n1,6); // n1 is sending as tail node😙
    print(head);
    insertAtHead(head,n1,7);
    print(head);
    insertAtHead(head,n1,8);
    print(head);
    insertAtHead(head,n1,9);
    print(head);
    // testing the previous calling ⬇⬇⬇⬇⬇
    // cout<<head->next->next->next->next->next->data<<endl;

}