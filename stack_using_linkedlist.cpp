#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node* top=NULL;
void push(int x)
{
    Node* temp;
    temp=new Node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty\n";
        return ;
    }
    else
    {
        
        cout<<"Popped element is:"<<top->data<<endl;
        top=top->next;
        
    }
}
void display()
{
    Node *temp;
    temp=top;
    cout<<"Stack elements:\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
void isEmpty()
{
    if(top==NULL)
        cout<<"Stack is empty\n";
    else
        cout<<"Stack is not empty\n";
}
int main()
{
    int ch,el;
    while(1)
    {
        cout<<"1.Push\n2.Pop\n3.Display\n4.IsEmpty\n5.Exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the element to push:";
                cin>>el;
                push(el);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                exit(1);
                break;
            default:
                cout<<"Wrong choice"<<endl;
                break;
        }
    }
    return 0;
}
