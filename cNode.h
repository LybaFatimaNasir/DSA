#include<iostream>
using namespace std;
class cNode{
	int data;
	int priority;
	public:
		cNode *next;
		cNode();
		cNode(int d);
		cNode(int d,int priority);
		cNode &setData(int data);
		cNode &setPriority(int priority);
		int getData()const;
		int getPriority()const;
		void print() ;
};
