#include <iostream>

using namespace std;

class Node
{
public:
	Node(){};
	int x;
	Node* next;
};

class LinkedList
{

public:
	LinkedList(){head = NULL;};	

	void Push(int val);
	void Pop(int val);

	void PrintReversed();
	void Print();

	void InPlaceReversal();

private:
	void LinkedList::PrintBackwards(Node * pos);
	void LinkedList::Reversal(Node * pos, Node * current);
	Node *head;
};
