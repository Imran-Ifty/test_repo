// lab : 4-2 // using function
 #include<iostream>
 #include<stdlib.h>

 using namespace std;
 struct node{ 
    int data;
    node *next;
 }; 
 node* createList(int n);
 void printList(node *ptr);   
 
 int main(){
  node *head;
  head = new node;
  int n ;
  cout<<" Enter the number of node : ";
  cin>>n;
  head = createList(n);
  printList(head); 

 return 0 ;
 }

 node* createList(int n){
     node * head , *nptr , *tptr;
     head = NULL;
     int item;
     nptr = new node;
     cout<<" Enter the node values : ";
     for(int i = 0 ; i < n ; i++){
 	 cin>>item;
         tptr = new node;
    	 tptr-> data = item;
         tptr-> next = NULL;
         if(head == NULL){
             nptr = tptr;
	         head = nptr;
         }else{
             nptr->next = tptr;
	         nptr = tptr;
         } 	
      }   
   nptr = head;
   return nptr;
    
 }
 void printList(node *ptr){
    if(ptr==NULL){
       cout<<"No data in the list "<<endl;	
    }else{
    	cout<<"*** Printing list ***"<<endl;
        while(ptr!=NULL){
	  	    cout<< " data : "<< ptr->data<<endl;
	   		ptr = ptr->next;
	    }
        cout<<endl;
    }
 }  
 





