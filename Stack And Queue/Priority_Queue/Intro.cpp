/*#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int data;
   Node *next;
   Node(int d)
   {
      data = d;
      next = nullptr;
   }

};
class Queue{
   public:
   Node* front; Node* rear;
   void enqueue(int data){\
      Node* n = new Node(data);
      if(front == nullptr){
         front = rear = n;
         return;
      }
      else{
         rear -> next = n;
         rear = n;
      }
   }
   void dequeue(){
      if(front == nullptr){
         cout<<"queue is Empty";
      }
      else{
         Node* temp = front;
         int data = temp->data;
         cout<<data<<" ";
         front = front->next;
         delete(temp);

      }
   }
   void display(){
      Node* temp = front;
      while(temp != nullptr){
         cout<<temp->data<<" ";
         temp = temp -> next;
      }
      cout << endl;
   }
};
int main()
{
   Queue* qe = new Queue();
   qe->enqueue(1);
   qe->enqueue(2);
   qe->enqueue(3);
   qe->enqueue(4);
   qe->enqueue(5);

   qe->display();

   qe->dequeue();
   qe->dequeue();
   qe->dequeue();
   

   return 0;
}
*/

//priority queue
