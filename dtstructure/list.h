#include<iostream>
struct link
{
	int no;
	link *next;
};
class list
{
	private:
		link *first,*last;
	public:
	list()
	{
		first=NULL;
		last=NULL;
		}	
	void add(int n)
	{
		link *temp;
		temp=new link;
		temp->no=n;
		temp->next=NULL;
		if(first==NULL)
		{
			first=temp;
			last=temp;
		}
		else 
		{
			last->next=temp;
			last=temp;
		}
		
		}
		void show()
		{
			link *temp;
			temp=first;
			std::cout<<"Data : ";
			while(temp!=NULL)
			{
				std::cout<<temp->no<<"  "<<temp->next<<" ";
				temp=temp->next;
			}
			std::cout<<std::endl;
			}	
		void remove(int n)
		{
			link *temp;
			int i=0;
			temp=first;
			if(first->no==n)
			{
			first=first->next;
				std::cout<<n<<" deleted "<<std::endl;
				return;}
				
				
			while(temp!=NULL)
			{
				
				if(temp->no==n)
				{
					last->next=temp->next;
					delete temp;
					std::cout<<n<<" has been deleted "<<std::endl;
					return;
				}
				else 
				{
					i=1;
				}
				
			last=temp;
				temp=temp->next;
				
			}
			if(i==1)
			{
				std::cout<<"No not found"<<std::endl;
			}
				
		
			
			
			
			}	
};
