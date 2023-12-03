#include <iostream>
using namespace std;

class Node{
    public:
     int data;
     Node* next;
     
     Node(int data){
       this->data = data;
       this->next = NULL;
     }
};


Node* getMiddle(Node* &head){
   if(head == NULL){
     cout<<"LL is empty"<<endl;
     return head;

   }
   if(head->next == NULL){
     cout<<"middle node"<<endl;
     return head;
   }
   // ll having more than 1 node

     Node* slow = head;
     //Node* fast = head; //if odd
     Node* fast = head->next; //if even

     while(slow != NULL && fast != NULL){ 
          // fast aage badhega
          fast = fast->next;
           if(fast != NULL){
              fast = fast ->next;
              slow = slow->next;
     }
    }
     return slow;
}




void print(Node* &head){ 
   Node* temp = head;
   while(temp != NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
   }
   //cout<<endl;
}



int main(){
   Node* head = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);
   Node* fourth = new Node(40);
   Node* fifth  = new Node(50);
   Node* sixth = new Node(60);
   head->next = second;
   second->next = third;
   third->next = fourth;
   fourth->next = fifth;
   fifth->next = sixth;
  print(head);
  cout<<"Middle Node is: "<<getMiddle(head)->data<<endl;
}
