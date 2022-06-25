#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(node* &head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void print(node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    
}

int main()
{
    node *n1 = new node(5);
    node *head = n1;
    print(head);
    insertathead(head, 12);
    print(head);
    insertathead(head, 7);
    print(head);
    insertathead(head, 9);
    print(head);
}