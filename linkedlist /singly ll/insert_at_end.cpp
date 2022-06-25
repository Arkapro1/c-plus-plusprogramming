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

void insertathead(node* &tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
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
    node* tail=n1;
    print(head);
    insertathead(tail, 12);
    print(head);
    insertathead(tail, 7);
    print(head);
    insertathead(tail, 9);
    print(head);
}