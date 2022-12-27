#include <iostream>
#include <stdio.h> 
#include <stdlib.h> 

using namespace std;  
 
struct Nut 
{ 
  int data; 
  struct Nut *next; 
}; 
typedef struct Nut Node;
  
void insertFirst(Node *&Head, int new_data) 
{ 
    Node* new_node;			 
	new_node = new Node; 
    new_node->data  = new_data;

    if(Head == NULL)				
    {
    	Head = new_node;
    	Head -> next = NULL;
	}
	else
	{
		new_node->next = Head; 	
		Head = new_node;			
  	}
} 

void insertLast(Node* &Head, int new_data)
{ 
	Node *new_node;
	new_node = new Node;
	new_node->data = new_data;
	new_node -> next = NULL;

	if (Head == NULL)
		Head = new_node;
	else 
	{	
     	Node *p; 
		p = Head;
      	while (p -> next != NULL) 	
        	p = p->next;
		// noi vao cuoi danh sach
    	p ->next = new_node;	
	}
}     

void insertAfter(Node *&Head, Node* &p, int new_data)
{	

	if (p == NULL)
		cout <<"Cannot insert new node!";
	else
	{   
		Node* 	new_node;
		new_node = new Node;
		new_node->data = new_data;
		new_node->next = p->next;
		p->next = new_node;			
	}
}

void DeleteFirst(Node* &Head)
{	Node* 	p;
	if (Head == NULL)
		cout<<"List is empty!";
	else
	{	
		p = Head;
		Head = Head->next;
		delete p;
		p = NULL;			
	}
}

void DeleteLast(Node* &Head)
{  if (Head == NULL)
	cout<<"List is empty!";
   else
	{ Node  *p, *q; //p tim den nut cuoi, q truoc nut p
    	  p = Head -> next; q = Head;
	  while (p -> next != NULL)
		{ 	p = p->next;
           	q = q->next;
        }
	  delete    p;
      q -> next = NULL;		} //end if 
}

void DeleteAfter(Node* &Head, Node* &p)
{	Node* 	q;
	if (p->next ==NULL)
		cout<<"Cannot delete node!";
	else
	{
		q = p->next;
		p->next = q->next;
		delete  q;	
			
	}
}

void printList(Node* node) 
{ 
    cout<<"\t";
	while (node != NULL) 
	{ 
       	cout<< node->data; cout<<"\t";
        node = node->next; 
    } 
}
  
Node* Search(Node* Head, int x)
{	
 	Node*   p; 	//p de duyet và tim
 	p = Head; 	//tim tu dau ds
 	while ( p != NULL  && p->data != x) 	
 		p = p->next;
 	return p;
}
void Sap_Xep(node &pHead)
{
    Node *q = new Node;
    Node *p = new Node;
    for(p = pHead; p != NULL; p=p->next)
	{
        for(q = p -> next; q  != NULL; q=q->next)
	    {
            if(p-> info > q -> info)
            {
                swap(p -> info,q ->info );
            }
        }
    }
}
int main() 
{ 
	Node *danh_Sach; 
  	danh_Sach = new Node;
  	danh_Sach = NULL;
  
  	insertFirst(danh_Sach, 7); 
  	cout<<"Danh sach duoc khoi tao: ";	cout<<"\t\t\t";
  	printList(danh_Sach);

	cout<<"\nDanh sach khi chen them phan tu thu 2 vao dau: ";	cout<<"\t";
  	insertFirst(danh_Sach, 28);
  	printList(danh_Sach);
 
  	cout<<"\nDanh sach khi chen them phan tu thu 3 vao dau: ";	cout<<"\t";
  	insertFirst(danh_Sach, -15);
  	printList(danh_Sach);

  	cout<<"\nDanh sach khi chen them phan tu thu 4 vao cuoi: ";
  	insertLast(danh_Sach, 67);
  	printList(danh_Sach);
  	
   
  	cout<<"\nDanh sach khi chen them phan tu thu 5: ";	cout<<"\t\t";
  	insertAfter(danh_Sach, danh_Sach, 16);
  	printList(danh_Sach);
  	
   
  	cout<<"\nDanh sach khi chen them phan tu thu 6: ";	cout<<"\t\t";
  	insertAfter(danh_Sach, danh_Sach->next->next, 128);
  	printList(danh_Sach);
 /*
  	cout<<"\nDanh sach sau khi xoa phan tu dau: ";		cout<<"\t\t";
  	DeleteFirst(danh_Sach);
  	printList(danh_Sach);
 
 	cout<<"\nDanh sach sau khi xoa phan tu cuoi: ";		cout<<"\t\t";
 	DeleteLast(danh_Sach);
  	printList(danh_Sach);


  	cout<<"\nDanh sach sau khi xoa phan tu giua: ";		cout<<"\t\t";
 	DeleteAfter(danh_Sach, danh_Sach->next);		
  	printList(danh_Sach);
 
 	Search(danh_Sach,16);
*/
	cout<<"\n";	
  	return 0; 
} 
