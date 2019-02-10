#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node*next;
	node()
	{
	next=NULL;
	}
};
class quene
{
	public:
	node *head;
	node*tail;
	quene()
	{
		head=NULL;
		tail=NULL;
	}
void push(int value)
{
	node*temp=new node;
	temp->data=value;
	if (head==NULL)
	{
		head=temp;
	}
	else
	{
		tail->next=temp;
	}
	tail=temp;
}
void pop()
{
	node*temp;
	temp=head;
	head=temp->next;
	delete temp;
}
void eempty()
{
	if (head==NULL)
	{
		cout<<"the data is empty"<<endl;
	}
	else 
	{
		cout<<"it contain data"<<endl;
	}
}
void size()
{
	node *curr=head;
	int i=0;
	while(curr!=NULL)
	{
		curr=curr->next;
		i++;
	}
	cout<<"the size of it "<<i<<endl;
}
void display()
{
	node*curr=head;
	while(curr!=NULL)
	{
		cout<<curr->data<<"->";
	curr=curr->next;
	}
	cout<<endl;
}
};
int main()
{
quene q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.display();
q.eempty();
q.size();
q.pop();
q.display();
q.eempty();
q.size();

return 0;
}
