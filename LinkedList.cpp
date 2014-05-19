#include "stdafx.h"
#include "LinkedList.h"


void LinkedList::Push(int x)
{
	Node* n = new Node();
	n->x = x;
	n->next = NULL;

	Node * pos = head;

	if ( pos != NULL ) 
	{
    	while ( pos->next != NULL ) 
		{
			pos = pos->next;
		}
		
		pos->next = n;
	}
	else
	{
		head = n;
	}
}


void LinkedList::Pop(int x)
{
	Node * pos = head;

	if ( pos != NULL ) 
	{
		if(pos->x == x)
		{
			head = pos->next;
			delete(pos);
		}
		else
		{
			while ( pos->next != NULL ) 
			{
				if (pos->next->x == x)
				{
					Node* temp = pos->next;
					pos->next=pos->next->next;
					delete(temp);
					break;
				}
				pos = pos->next;
			}
		}
	}	
}

void LinkedList::Print()
{
	Node * pos = head;
	if ( pos != NULL ) 
	{
    	while ( pos != NULL ) 
		{
			cout << pos->x <<  " ";
			pos = pos->next;
		}

	}
	cout << endl;
}

//Recursive backwards print
void LinkedList::PrintBackwards(Node * pos)
{
	if(pos != NULL)
	{
		PrintBackwards(pos->next);
		cout << pos->x <<  " ";
	}
}		

void LinkedList::PrintReversed()
{
	PrintBackwards(head);
	cout << endl;
}

//Recursive list reversal
void LinkedList::Reversal(Node * current, Node* previous)
{
	//Set next to previous
	if(current != NULL)
	{
		Reversal(current->next, current);
		current->next = previous;
	}
	else //if end set to head
	{
		head = previous;
	}
}	

void LinkedList::InPlaceReversal()
{
	Reversal(head, NULL);
}