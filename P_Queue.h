
#include "Queue.h"

class P_Queue :public Queue
{
private:

public:
	P_Queue();
	P_Queue(Node*& Ptr);
	P_Queue(const P_Queue& Source);
	P_Queue& operator=(const P_Queue& Source);
	P_Queue& Add(Node*& Ptr);
	void Print() const;
};

