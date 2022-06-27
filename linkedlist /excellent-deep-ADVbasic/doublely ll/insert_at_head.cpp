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
// ai head fn
void insertAtHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
int main()
{
    node *n1 = new node(5);
    node *head = n1;
    // no nono dont do this ⬇⬇⬇⬇ consthead is the last one heere see😂;
    //node *consthead = n1;

    // cout<< head->data<<" "<<n1->next<<" "<<n1->prev<<endl;
    insertAtHead(head, 4);
    print(head);
    insertAtHead(head, 7);
    print(head);
    insertAtHead(head, 12);
    print(head);
    //checking 😸😸 
    cout<<((head->next)->prev)->data<<endl;
}