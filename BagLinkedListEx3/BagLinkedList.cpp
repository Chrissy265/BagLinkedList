#include "Bag.h"
#include <list>
#include <iostream>
#include<stdlib.h>

using namespace std;

Bag::Bag()
{
	first = new Node; 
	first->next = NULL;
}

Bag::~Bag()
{
	Node * rid; 
 
while (first !=NULL)
{
	rid = first; 
	first = first->next; 
	delete rid; 
}
}

bool Bag::isEmpty()
{
	return first->next == NULL; 
}

void Bag::print()
{
	Node* current = first->next; 
	while (current != NULL)
	{
		cout << current->info << "";
		current = current->next;
	}
}

int Bag::getSize()
{
	Node* current = first->next; 

	while (current != NULL)
	{
		return first->info; 
	}
}

void Bag::clear()
{

	Node* old = first->next,
		* p = first;

	//Finding the address of the node before the one to be deleted
	bool found = false;
	while (old != NULL && !found)
	{
		if (old->info == item) found = true;
		else
		{
			p = old;
			old = p->next;
		}
	}

	//if item is in the list, remove it.
	if (found)
	{
		p->next = old->next;
		delete old;
	};

}
void Bag::add(char item)
{
	Node* p = new Node;
	p->info = item; 
	p->next = first->next; 

	first->next = p; 
}

void Bag::remove(char item)
{

	Node* old = first->next,
		* p = first;

	//Finding the address of the node before the one to be deleted
	bool found = false;
	while (old != NULL && !found)
	{
		if (old->info == item) found = true;
		else
		{
			p = old;
			old = p->next;
		}
	}

	//if item is in the list, remove it.
	if (found)
	{
		p->next = old->next;
		delete old;
	};


}

int Bag::count(char item)
{
	Node* current = first->next;
   if (first != NULL)
   {  
	   for ( int i = 0; i> 0; i++)
	   {
			   cout << current->info << "";
			   current = current->next;
		   
	   }

   }
}