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
void deletele(node* head,int position){
    // declaration going on
node* beforePosition=head;
node* afterPosition;
node* atPosition;
for (int i = 1; i <position-1; i++)
{
    beforePosition=beforePosition->next;
}
atPosition=beforePosition->next;
afterPosition=atPosition->next;
        // declaration done 

    beforePosition->next=afterPosition;
    atPosition->next=NULL;
        //deletion done


}
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
    cout<<"let's delete one node"<<endl;
    cout<<"enter the position of node that u want to delete"<<endl;
    int n;
    cin>>n;
    deletele(head,n);
    print(head);
}