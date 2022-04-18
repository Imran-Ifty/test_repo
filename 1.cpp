// lab : 4-1
 #include<iostream>
 #include<stdlib.h>

 using namespace std;
 struct node{ 
    int data;
    node *next;
 }; 
 int main(){
  node * head , *nptr , *tptr;
  head = NULL;
  nptr = new node;
  int n , item;
  cout<<" Enter the number of node : ";
  cin>>n;
  cout<<" Enter the node values of : ";
  for(int i = 0 ; i < n ; i++){
     cin>>item;
     tptr = new node;
     tptr-> data = item;
     tptr-> next = NULL;
     if(head == NULL){
         nptr = tptr;
	     head = tptr;
     }else{
         nptr->next = tptr;
	     nptr = tptr;
     } 	
  }
  nptr = head;
  cout<<"*** Printing List *** "<<endl; 
  for(int i = 0 ; i < n ; i++){
      cout<<" data : " <<nptr->data<<endl;
      nptr = nptr->next;
  }

 return 0 ;
 }
