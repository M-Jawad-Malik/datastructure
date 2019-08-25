#include<iostream>
using namespace std;
struct node
  {
    int data;
    node *next;
  };	
  class list
  {
    private:
    node *head, *tail;
    public:
    list()
    {
      head=NULL;
      tail=NULL;
    }
    void createnode(int value)
    {
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
        head=temp;
        tail=head;
      }
      else
      {	
        tail->next=temp;
        tail=temp;
      }
    }
    void display()
  {
    node *temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  } 
  };
  int main()
{
	list l;
	l.createnode(50);
	l.createnode(12);
	l.createnode(13);
	l.createnode(58);
	l.createnode(454);
	l.createnode(89);
	l.display();
	return 0;
}	
