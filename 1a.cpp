#include<iostream>
using namespace std;
//making a node
class node
{
public:
	int data;
	node*next;
};
//making a stack 
class stack
{
public:
	//making top
	node*top;
	stack()
	{
		top=NULL;
	}
//making of insert of data
void push(int value)
{
//making a new node and taking its data
	node *temp=new node;
	temp->data=value;
	if (top==NULL)
	{
		top=temp;
		top->next=NULL;
	}
	else 
	{
		temp->next=top;
		top=temp;
	}
}
void pop()
{
	node *temp;
	temp=top;
	top=temp->next;
	delete temp;
}
void size()
{
	node *curr=top;
	int i=0;
	while(curr!=NULL)
	{
		curr=curr->next;
		i++;
	}
	cout<<"number of size"<<i<<endl;
}
void topp()
{
	cout<<"the top value is "<<top->data<<endl;
}
void eempty()
{
	node*curr=top;
	if (curr==NULL)
	{
		cout<<"the data is empty"<<endl;
	}
	else 
	{
	cout<<"it contain data"<<endl;
	}
}
		
void display()
{
	node *curr=top;
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
stack s;
s.push(1);
s.push(2);
s.push(3);
	s.display();
	s.eempty();
	s.size();
	s.topp();
	s.pop();
	s.display();
	s.eempty();
	s.topp();
	s.size();
	return 0;
	}
		
