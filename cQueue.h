#pragma once
#include "cstack.h"
using namespace std;

class Queue: protected cstack
{
protected:
	Node* tail;
public:
	Queue();
	Queue(Node*& ptr);
	Queue(const Queue& source);
	Queue& operator=(const Queue& source);
	Queue& add(Node* &ptr);
	~Queue();;
	Node* remove();
};

