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

void insert_at_middle(node *head, int position, int data)
{
    node *temp = new node(data);
    node *nodeatposition = head;
    for (int i = 1; i < position - 1; i++)
    {
        nodeatposition = nodeatposition->next;
    }
    temp->next = nodeatposition->next;
    nodeatposition->next = temp;
}

void insertathead(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *n1 = new node(5);
    node *head = n1;
    // this is for build some linkedlist
    node *tail = n1;
            print(head);
            insertathead(tail, 12);
            print(head);
            insertathead(tail, 7);
            print(head);
            insertathead(tail, 9);
            print(head);

    // main part srat's here we can also add any node at any position;
    cout << "now let's insert at any part " << endl;
    cout << " so say how many time u want to insert ? 🤫: ";
    int n;
    cin >> n;
    
    while (n--)
    {
        cout << " so enter the position and the data of the new node";
        int position, data;
        cin >> position >> data;
        insert_at_middle(head, position, data);
        print(head);
    }
}