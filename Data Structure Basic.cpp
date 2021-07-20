#include<bits/stdc++.h>

using namespace std;

class Node
{

public:
    int data;
    Node *next;
};

void pushF(Node** head_r, int dat)
{
    //cout<<"x";
    if(*head_r == NULL)
    {
        Node* n = new Node();
        n->data = dat;
        n->next = NULL;
        *head_r = n;
        return;
    }
    Node* n = new Node();
    n->data = dat;
    n->next = *head_r;
    *head_r = n;

}

void pushB(Node** head_r, int dat)
{
    Node *l = *head_r;
    Node* n = new Node();
    //n= NULL;
    n->data = dat;
    n->next = NULL;

    if(*head_r == NULL)
    {
        *head_r = n;
        return;
    }

    while(l->next!= NULL)
    {
        //cout<<"P\n";
        //cout<<l->data<<endl;
        l = l->next;
    }
    l->next = n;
    return;
}
void pushP(Node** head_r, int dat, int pos)
{
    if(pos == 1)
    {
        if(*head_r == NULL)
        {
            Node* n = new Node();
            n->data = dat;
            n->next = NULL;
            *head_r = n;
            return;
        }
        Node* n = new Node();
        n->data = dat;
        n->next = *head_r;
        *head_r = n;
    }

    Node *l = *head_r;
    Node* nn = new Node();
    //nn = NULL;
    nn = *head_r;

    int i = 0;
    while(l->next != NULL)
    {
        i++;
        if(i == pos)
        {
            //cout<<"TTTTTTT";
            l->next->next = l->next;
            l->next->data = dat;
            //l->next = nn;
            cout<<"BK\n";
            break;
            //cout<<"BR\n";
        }
        //cout<<"DD" <<l->data<<endl;

        l = l->next;
    }
    //l->next = NULL;
}

int main()
{

    Node* head = new Node();
    head = NULL;
    pushF(&head, 5);
    // pushB(&head, 15);
    pushF(&head, 10);
    Node* x= new Node();
    x = head;
    while(x!= NULL)
    {
        cout<<x->data<<endl;
        x = x->next;
    }
    cout<<endl;

    pushB(&head, 15);

    x = head;
    while(x!= NULL)
    {
        cout<<x->data<<endl;
        x = x->next;
    }
    cout<<endl;

    pushP(&head, 20, 2);

    x = head;
    while(x!= NULL)
    {
        cout<<x->data<<endl;
        x = x->next;
    }
    cout<<endl;
}
