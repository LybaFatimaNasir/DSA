#include<iostream>
using namespace std;
#include"P_Queue.cpp"



int main() {
   int c, i, p;
   P_Queue pq;
   Do//perform switch opeartion {
      cout<<"1.Insert\n";
      
      cout<<"2.Display\n";
      cout<<"3.Exit\n";
      cout<<"Enter your choice : ";
      cin>>c;
      switch(c) {
         case 1:
            cout<<"Input the item value to be added in the queue : ";
            cin>>i;
            cout<<"Enter its priority : ";
            cin>>p;
            pq.Addt(i, p);
            break;
        
         case 2:
            pq.Print()();
            break;
         case 3:
            break;
         default:
         cout<<"Wrong choice\n";
      }
   }
   while(c != 3);
   return 0;
}
