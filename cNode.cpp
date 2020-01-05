#include<iostream>
#include"cNode.h"
using namespace std;

		cNode::cNode()
		{
		data=0;
		priority=0;
		
		}
		cNode::cNode(int d):data(d),priority(0)
		{
		}
		cNode ::cNode(int d,int priority):data(d),priority(priority)
		{
		}	
     	cNode & cNode::setData(int data)
		{
			this->data=data;
			return *this;
		}
		cNode & cNode ::setPriority(int priority)
		{
			this->priority=priority;
			return *this;
		}
		int cNode ::getData()const
		{
			return data;
		}
		int cNode::getPriority()const
		{
			return priority;
		}
		 void cNode::print() 
		{
			cout<<data<<" ";
		}
	
