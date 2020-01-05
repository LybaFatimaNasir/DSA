#include<iostream>
using namespace std;
#include "cstack.h"
#include "cNode.cpp"

cstack::cstack():top(NULL)
{
}
cstack::cstack():top(ptr)
{
	top->next=NULL;
	ptr->NULL;
}
bool cstack::IsNotEmpty()const
{
	if(top)
	return true;
	else
	return false;
}
bool cstack::IsEmpty()const
{
	if(top)
	return false;
    else
	return true;
}
cstack & cstack::push(cNode * & ptr)
{
	ptr->next=top;
	top=ptr;
	ptr=NULL;
}
cstack & csatck::pop()
{
	cNode *ptr=top;
	top=top->next;
	ptr->next=NULL;
	return ptr;
}
void print()const 
{
	if(!top)
	cout<<" \nSTACK is Empty!";
	else
	cNode *ptr=top;
	while(ptr)
	{
		ptr->print();
		ptr=ptr->next;
	}
}
~cstack()
{
	ptr=ptr->next;
	delete top;
	top=ptr;
}
cstack(const cstack & src)
{
	this->top=src.top;
	if(src.top)
	{
		cNode *sptr,* dptr;
		dptr=top= new cNode(* src.top);
		sptr=src.top->next;
		while(sptr)
		{
			dptr->next=new cNode (* sptr);
			sptr=sptr->next;
			dptr=dptr->next;
		}
	}
}
cstack & operator =(const cstack & robj)
{
	if(this==& robj)
	return * this;
	else if(true)
	{
		cstack temp;
		temp.top=top;
	}
	if(true)
	{
		cstack temp=robj;
		top=temp.top;
		temp.top=NULL;
		return * this;
	}
}
