//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
       void reverse(Node*& head) {
        Node* curr = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev; 
    }
   
    struct Node* addTwoLists(struct Node* temp1, struct Node* temp2)
    {
       
       reverse(temp1);
       reverse(temp2);
       
      Node* newnode=nullptr;
      Node* curr=nullptr;
          Node* head=nullptr;
        
      
      int carry=0;
       while(temp1!=nullptr && temp2!=nullptr){
           
         
           int sum=temp1->data+temp2->data+carry;
           
           int digit=sum%10;
           
           newnode=new Node(digit);
        
        
        if(!head){
            head=newnode;
        }
           else{
          curr->next=newnode;
           }
          curr=newnode;
           
           carry=sum/10;
           
          temp1=temp1->next;
          temp2=temp2->next;
           
           
       }
          while(temp1){
           
           int sum=temp1->data+carry;
           
           int digit=sum%10;
           
           
           newnode=new Node(digit);
            if(!head){
            head=newnode;
        }
           else{
          curr->next=newnode;
           }
          curr=newnode;
           carry=sum/10;
           
        temp1=temp1->next;
           
           
       }
       while(temp2){
           
           int sum=temp2->data+carry;
           
           int digit=sum%10;
           
           newnode=new Node(digit);
         
           if(!head){
            head=newnode;
        }
           else{
          curr->next=newnode;
           }
          curr=newnode;
           
           carry=sum/10;
           
         temp2=temp2->next;
       
           
       }
       
       if(carry){
        int sum=carry;
           
           int digit=sum%10;
           
           newnode=new Node(digit);
         
           if(!head){
            head=newnode;
        }
           else{
          curr->next=newnode;
           }
          curr=newnode;
           
           carry=sum/10; 
       }
       reverse(head);
        while(head->next && head->data==0){
            head=head->next;
        }

       return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends