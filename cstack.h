#include<iostream>
using namespace std;
#include "cNode.cpp"

class cstack{    
	cNode *top;        //top (head of the stack)
	public:
		cstack();      //default constructor
		cstack(cNode * & ptr);    // constructor with one parameter
		bool IsNotEmpty()const;  // function for checking if the stack is not empty
		bool IsEmpty()const;    //function for checking if the stack is empty
		cstack & push (cNode * & ptr);  //push function to add in the stack
		cstack & pop  (cNode * & ptr); //pop function for removing from the stack
		void print ()const;   // print function for printing stack
		~cstack();    //Destructor
		cstack(const cstack & src);    //Copy consructor
		cstack &operator =(const cstack & robj);   //Assignment operator
};
