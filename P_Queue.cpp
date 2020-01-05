
#include <iostream>
#include "P_Queue.h"

using namespace std;

P_Queue::P_Queue() : Queue()                                 // We have to define default constructor again if we define even one of constructors.
{}

P_Queue::P_Queue(Node*& Ptr) : Queue(Ptr)
{}

P_Queue::P_Queue(const P_Queue& Source)
{
	this->top = Source.top;
	this->tail = Source.tail;

	if (Source.top)
	{
		Node* S_Ptr;

		tail = top = new Node(*Source.top);                         // Tail will act as D_Ptr the difference is we will not delete Tail.
		S_Ptr = Source.top->next;

		while (S_Ptr)
		{
			tail->next = new Node(*S_Ptr);
			S_Ptr = S_Ptr->next;
			tail = tail->next;
		}
	}
}

// P_Queue::P_Queue(const P_Queue &Source): Queue((Queue&) Source)      // If works it will be calling copy constructor of Queue by type conversion.
// {}

P_Queue& P_Queue::operator=(const P_Queue& Source)
{
	if (this == &Source)  return *this;                // If both Queues memory address are equal.

	if (true)
	{
		P_Queue Temp;

		Temp.top = top;
		Temp.tail = tail;
	}

	if (true)
	{
		P_Queue Temp = Source;

		top = Temp.top;
		tail = Temp.tail;

		Temp.top = Temp.tail = NULL;
	}

	return *this;
}

P_Queue& P_Queue::Add(Node*& Ptr)
{
	if (!top)                                                           // To handel the first case.
	{
		top = tail = Ptr;
		tail->next = Ptr = NULL;
	}
	else
	{
		if ((top->next)->getPriority() < Ptr->getPriority())                // If the Top priority is smaller than Ptr priority then we will use Push to add in the front.
			Stack::push(Ptr);
		else if (tail->getPriority() <= Ptr->getPriority())         // If the Tail priority is smaller than or equal to Ptr priority then we will use Add to add in the last.
			Queue::add(Ptr);
		else
		{
			Node* R_Ptr = top;

			while (R_Ptr->getPriority() >= Ptr->getPriority())       // To find the correct location.
				R_Ptr = R_Ptr->next;

			Ptr->next = R_Ptr->next;
			R_Ptr->next = Ptr;
			Ptr = NULL;
		}
	}
	return *this;
}

void P_Queue::Print() const
{
	if (!top)
		cout << "\n Empty data structure....\n";
	else
	{
		cout << "\n Data from High priority to Low priority is : \n";

		Node* Ptr = top;

		while (Ptr)
		{
			cout << " " << Ptr->getPriority() << ".    " << Ptr->getData() << "\n";
			Ptr = Ptr->next;
		}
	}
}
