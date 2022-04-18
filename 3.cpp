// lab - 3 : middle deletion

#include<iostream>
using namespace std;

struct node{
     int data;
     node *next;
};
void printList(node *ptr);

int main(){    
   node *head , *stnode;
   head = NULL;
   int item , n;
   cout<<" Enter the node number : ";
   cin>>n;
   cout<<" Enter the nodes : ";
   for(int i = 0 ; i < n ; i++){
      cin>>item;
      node * tptr = new node;
      tptr->data = item;
      tptr->next = NULL;
      if(head == NULL){
        head = tptr;
        stnode = tptr;
      }else{
        stnode->next = tptr;
        stnode = tptr;
      }    
   }
   stnode = head; 
   printList(stnode);
   stnode = head; // resetting the head
   
    int pos;
    cout<<" Enter the position to delete : ";
	cin>>pos;
	if(pos<=1 || pos>=n){
		cout<<" Middle deletion can not be done "<<endl;
		
	}else{
		node *temp1 , *temp2;
  		temp1 = temp2 = head;
    	for(int i = 1 ; i < pos ; i++){
       		temp1 = temp2;
       		temp2 = temp2->next;
        }
		temp1->next = temp2->next;
		cout<<" [Update] deleted node : "<< temp2->data<<endl;
		delete(temp2); 
	}
	cout<<" After middle Deletion "<<endl;
	printList(stnode);
    stnode = head;
    
 return 0;
 }

void printList( node * ptr){
     if(ptr==NULL){
        cout<<" Empty List"<<endl;
     }else{
        while(ptr!=NULL){
	       cout<<" data : "<<ptr->data<<endl;
           ptr = ptr->next;
	   }     	 
	}
 }





