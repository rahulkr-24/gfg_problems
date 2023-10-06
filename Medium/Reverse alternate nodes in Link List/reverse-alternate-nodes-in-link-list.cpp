//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
class Solution
{
    public:
     struct Node *reverse(struct Node *head)
    {
        struct Node *prev = NULL, *curr = head, *end;
        while(curr != NULL)
        {
            end = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = end;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
         if(odd -> next == NULL) return;
        struct Node *t1 = odd, *t2 = odd -> next, *t3 = odd -> next;
        while(t1 -> next != NULL && t1 -> next -> next != NULL)
        {
            t1 -> next = t1 -> next -> next;
            t1 = t1 -> next;
            if(t2 -> next != NULL && t2 -> next -> next != NULL)
            {
                t2 -> next = t2 -> next -> next;
                t2 = t2 -> next;
            }
        }
        t2 -> next = NULL;
        t3 = reverse(t3);
        t1 -> next = t3;
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends