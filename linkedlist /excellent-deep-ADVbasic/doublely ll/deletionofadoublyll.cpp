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
//delete any node(🙂)
void deleteAnyNode(node* beforeThePosiiton,int position){
    //before
    for(int i=1;i<position-1;i++){
        beforeThePosiiton=beforeThePosiiton->next;
    }
    //after 
    node* aftertheposition=(beforeThePosiiton->next)->next;
    //task done
    beforeThePosiiton->next=(aftertheposition);
    // for the last deletion (null)->pre is not possible 🙆;
    if(aftertheposition!=0)
    aftertheposition->prev=beforeThePosiiton;
}

// at any point
void insertAtAnyposition(node *beforeposition, int position, int data)
{
    // declaring the before position
    for (int i = 1; i < position - 1; i++)
    {
        beforeposition = beforeposition->next;
    }
    // declaring the after position
    node *afterposion;
    afterposion = (beforeposition->next);
    // temp done;
    node *temp = new node(data);
    // main part
    beforeposition->next = temp;
    temp->next = afterposion;
    temp->prev = beforeposition;
    // this is required for the last part adding ⬇⬇⬇⬇
    if(afterposion!=NULL)
    afterposion->prev = temp;
}

// print fn
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    ;
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
    // //checking 😸😸
    // cout<<((head->next)->prev)->data<<endl;
    // checking anypoint fn annddd done
    // insertAtAnyposition(consthead,3,3);
    // print(consthead);
    cout << "now let's try insertAtAnyPosition" << endl;
    cout << "now let me know that how many time u want to insert this stuff " << endl;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter --> position,data" << endl;
        int position, data;
        cin >> position >> data;
        insertAtAnyposition(consthead, position, data);
        print(consthead);
    }
    cout<<"let's delete a node so enter position: ";
    int position;
    cin>>position;
    deleteAnyNode(consthead,position);
    print(consthead);
}