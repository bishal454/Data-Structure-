// // #include <bits/stdc++.h>
// // using namespace std;
// // class Node {
// // public:
// //   int data;
// //   Node *next;


// // public:
// //   Node(int data1, Node *next1) {
// //     data = data1;
// //     next = next1;
// //   }
// //  // CONSTRUCTOR 
// //   Node(int data1) {
// //     data = data1;
// //     next = NULL;
// //   }
// // };
// // // TO GET LINKED LIST FROM ARRAY 
// // Node *convertarr2ll(vector<int> &arr) {
// //   Node *head = new Node(arr[0]);
// //   Node *mover = head;
// //   for (int i = 1; i < arr.size(); i++) {
// //     Node *temp = new Node(arr[i]);
// //     mover->next = temp;
// //     mover = temp;
// //   }
// //   return head;
// // }

// // // TO FIND THE LENGTH OF ANY GIVEN LINKED LIST
// // int lengthofll(Node *head) {
// //   int count = 0;
// //   Node *temp = head;
// //   while (temp) {
// //     count++;
// //     // cout<<temp->data<<" ";
// //     temp = temp->next;
// //   }
// //   return count;
// // }

// // // FOR SEARCHING ANY GIVEN DATA IN THE LINKED LIST
// // int checkifpresent(Node *head, int val) {
// //   Node *temp = head;
// //   while (temp) {
// //     if (temp->data == val)
// //       return 1;

// //     // cout<<temp->data<<" ";
// //     temp = temp->next;
// //   }
// //   return 0;
// // }

// // // TO DELETE THE FIRST\HEAD ELEMENT OF THE LINKED LIST
// // Node *deletehead(Node *head) {
// //   if (head == NULL)
// //     return head;
// //   Node *temp = head;
// //   head = head->next;
// //   free(temp);
// //   return head;
// // }

// // // TO DELETE THE LAST ELEMENT OF THE LINKED LIST
// // Node*deletetail(Node*head){
// //   if(head==NULL ||head->next==NULL)
// //     return NULL;
// //   Node*temp=head;
// //   while(temp->next->next!=NULL){
// //     temp=temp->next;
// //     }
// //   delete temp->next;
// //   temp->next=nullptr;
// //   return head;
// // }

// // // TO DELETE THE GIVEN ELEMENT OF THE LINKED LIST 
// //  Node* removek(Node*head,int k){
// //    if(head==NULL) return head;
// //    if(k==1){
// //      Node*temp=head;
// //      head=head->next;
// //      free(temp);
// //      return head;
// //       }
// //    int count=0;
// //    Node*temp=head;
// //    Node*prev =NULL;
// //    while(temp!=NULL ){
// //      count++;
// //      if(count==k){
// //        prev->next=prev->next->next;
// //        free(temp);
// //        break;
// //        }
// //      prev=temp;
// //      temp=temp->next;
// //      }
// //    return head;
// //  }

// // // TO DELETE THE GIVEN ELEMENT OF THE LINKED LIST
// //  Node* removeGivenElement(Node*head,int el){
// //    if(head==NULL) return head;
// //    if(head->data==el){
// //      Node*temp=head;
// //      head=head->next;
// //      free(temp);
// //      return head;
// //       }
// //    // int count=0;
// //    Node*temp=head;
// //    Node*prev =NULL;
// //    while(temp!=NULL ){
// //      // count++;
// //      if(temp->data==el){
// //        prev->next=prev->next->next;
// //        free(temp);
// //        break;
// //        }
// //      prev=temp;
// //      temp=temp->next;
// //      }
// //    return head;
// //  }
// // // TO PRINT THE LINKED LIST
// // void print(Node*head){
// //   Node*temp=head;
  
// //   while(temp!=NULL){
// //     cout<<temp->data<<" ";
// //     temp=temp->next;
// //   }
// //   cout<<endl;
// // }

// // // TO INSERTELEMENT AT THE BEGINNING OF THE LINKED LIST
// // Node* insertathead(Node*head,int val){
// //    return new Node(val,head);  }
  


// // // TO INSERT AT THE END OF THE LINKED LIST
// // Node* insertAtTail(Node*head,int val){
// //   if(head==NULL)
// //     return new Node(val);
// //   Node*temp=head;
// //   while(temp->next!=NULL){
// //     temp=temp->next;}


// // Node*newnode=new Node(val);
// // temp->next=newnode;
// // return head;}


// // // TO INSERT AT ANY POSITION OF THE LINKED LIST
// // Node* insertAtPos(Node*head,int val,int pos){
// //   if(po)
// // }




// int main()
//   {
//   vector<int> arr = {2, 5, 8, 7};
//   Node *head = convertarr2ll(arr);
//   // cout << head->data << " ";
//   print(head);

//   // int x = lengthofll(head);
//   // cout << "The length of the linked list is " << x << " "<<endl;
//   // cout << checkifpresent(head, 5);
//   // cout<<endl;
// //   head = deletehead(head);
// //   print(head);
// //    Node* tail=deletetail(head);
// //   print(tail);
// //   return 0;
// // }
// // Node* k=removek(head,3);
// // print(k);
// // Node*el=removeGivenElement(head,8);
// //   print(el);
// Node*head1=insertathead(head,100);
// print(head1);
// Node*tail=insertAtTail(head1,200);
// print(tail);
// return 0;
// }