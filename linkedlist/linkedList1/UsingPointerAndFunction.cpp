// #include<iostream>
// using namespace std;
// class Node{
// public:
//   int val;
//   Node* next;
//   Node(int val)
// {
//   this->val=val;
//   this->next=NULL;
//   } 


// };

// void display(Node* head){
//   Node*temp=head;
//   while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;}
//   cout<<endl;
  
// }
  
// void size(Node*head){
//   Node* temp=head;
//   int n=0;
//   while(temp!=NULL)
//     {
//       n++;
//       temp=temp->next;
//     }
//   cout<<n<<endl;
// }

// void displayrec(Node* head){
//   if(head==NULL) return;
//   cout<<head->val<<" ";
//   displayrec(head->next);
// }


// void displayrecrev(Node*head){
//   if(head==NULL)
//     return;
//   displayrecrev(head->next);
//   cout<<head->val<<" ";
  
// }
// void insertAtEnd(Node* head,int val){
//   Node*t =new Node(val);
//   while(head->next!=NULL)
//     {
//       head=head->next;
//       head->next=t;
      
//     }
// }
// int main(){
//   Node* a=new Node(10);
//   Node*b=new Node(20);   
//   Node*c=new Node(30);
//   Node*d=new Node(40);
//   a->next=b;
//   b->next=c;
//   c->next=d;
//   // Node* temp=a;
//   display(a);
//   size(a);
//   displayrec(a);
//   cout<<endl;
//   displayrecrev(a);
//   cout<<endl;
//   insertAtEnd(a,80);
//   display(a);

//   // while(temp!=NULL){
//   //   cout<<temp->val<<endl;
//   //   temp=temp->next;
//   // }

// } 