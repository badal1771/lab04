#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node * next;
};
class stacke
{
    public:
    node * top;
    stacke()
    {
        top=NULL;
    }
    void push(int value)
    {
        node*temp=new node;
        temp->data=value;
        temp->next=NULL;
        if(top!=NULL)
            temp->next=top;
            top=temp;

    }
    void pop()
    {
        node *temp;
        temp=top;
    top=top->next;
    delete temp;

    }
   void display()
    {
        node * print;
        print=top;
        while(print!=NULL)
        {
            cout<<print->data<<"->";
            print=print->next;
        }
        cout<<endl;
    }
};
int main()
{
    stacke s;
    int n;
    int j;
    cout<<"enter the number of data which you want to add"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>j;
    s.push(j);
    }
    s.display();
    s.pop();
    s.display();
    return 0;

}

