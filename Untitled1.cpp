#include <iostream>
using namespace std;
class LinkedList
{
	private:
		Node *head;
		int data;
	public:
		LinkedList()
		{
			data=0;
			head=NULL;						
		}
		LinkedList(int val)
		{
			data=val;
			head=NULL;
			
		}	
		
	bool isEmpty()
		{
			return (head==Null);
		}
		
	void inseartAtBegining(int val)
	{
		if(head==null)
		{
			head= new Node(val);	
		}
		else {
			node*t=new Node(val);
			t->setNext(head);
			head=t;
		}
	}
	
	void inseartAtLast(int val)
	{
		Node* temp=head;
		while(temp!=null)
			{
				temp=temp->getNext();	
			}
			temp->setNext(val);
		}
		
	bool removeFromBegining()
	{
		Node*temp=head;
		if(! isEmpty())
		{
			head=head->getNext();
			delete temp;	
		}
		else
		return fals;
	}
	
	void removeFromLast()
	{
		while(t2==NULL)
		{
		Node*t1=head;
		Node*t2=head->getnext();
		}
		delete t2;
		t1->setNext(NULL);	
	}
		
	int getLength()
	{
		int count=0;
		node*temp=head;
		while(temp!=NULL)
		{
			count++;
			temp=temp->getnext();						
		}
		return count;	
	}
		
	int getFirstElement()
	{
		if(! isEmpty())
		{
		return head->Data;			
		}
		else 
		return 0;
	}
	
	int getLastElement()
	{
		Node* temp=head;
		while(temp!=null)
			{
				temp=temp->getNext();	
			}
			return temp->Data;
		else 
		return 0;
			
	}
	
	void printAllElements()
	{
		Node*temp=head;
		while (temp!=Null)
		{
			cout<<temp->data<<endl;
			temp=temp->getnext();
		}
	}
	
	
};










