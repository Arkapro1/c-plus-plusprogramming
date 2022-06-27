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
void insert_at_middle(node *&consthead, int position, int data) // we are using the address for cont head because is case of top inserting the consthead should be charged (globally) to temp because the temp is now at top;
{
    if (position == 0)
    {
        cout << "really the value is add in 0 position🤣 😁" << endl;
        return;
    }
    node *useconthead = consthead;
    node *temp = new node(data);
    node *beforeThePosiiton = useconthead;
    // for inserting at first one;
    if (position == 1)
    {
        beforeThePosiiton = useconthead->prev;
        consthead = temp;
    }
    else
    {
        for (int i = 1; i < position - 1; i++)
        {
            beforeThePosiiton = beforeThePosiiton->next;
        }
    }

    node *theposition = beforeThePosiiton->next;
    beforeThePosiiton->next = temp;
    temp->prev = beforeThePosiiton;
    temp->next = theposition;
    theposition->prev = temp;
}
void print(node *head)
{
    node *conthh = head;
    while (head->next != conthh)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << head->data << " " << endl;
}
void insertAtEnd(node *consthead, node *&head, int data)
{
    node *temp = new node(data);
    head->next = temp;
    temp->prev = head;
    consthead->prev = temp;
    temp->next = consthead;
    head = temp;
}
int main()
{
    node *n1 = new node(5);
    // we are using head as a tail ----- it is becoming tail every time
    node *head = n1;
    node *consthead = n1;
    print(consthead);
    insertAtEnd(consthead, head, 6);
    print(consthead);
    insertAtEnd(consthead, head, 7);
    print(consthead);
    insertAtEnd(consthead, head, 8);
    print(consthead);
    insertAtEnd(consthead, head, 9);
    print(consthead);
    cout << "Now let's insert element" << endl;
    cout << "so,, enter the position and the data" << endl;
    int position, d;
    cin >> position >> d;
    insert_at_middle(consthead, position, d);
    print(consthead);
}