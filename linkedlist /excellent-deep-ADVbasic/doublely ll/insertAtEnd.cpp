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
        next = NULL;
        prev = NULL;
    }
};
// print fn
void print(node* head){
    while (head!=NULL)
    {
        cout<< head->data<<" ";
        head=head->next;
    }
    cout<<endl;;
}
// at head fn
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    head->next = temp;
    temp->prev = head;
    head = temp;
}
int main()
{
    node *n1 = new node(5);
    node *head = n1;
    // heere we need consthead because the head is going to be the last one (we are using & <<<---address)
    node *consthead = n1;
    print(consthead);

    // cout<< head->data<<" "<<n1->next<<" "<<n1->prev<<endl;
    insertAtHead(head, 4);
    print(consthead);
    insertAtHead(head, 7);
    print(consthead);
    insertAtHead(head, 12);
    print(consthead);
    //checking 😸😸 
    cout<<((head->next)->prev)->data<<endl;
}