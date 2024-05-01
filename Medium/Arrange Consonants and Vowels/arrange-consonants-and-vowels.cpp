//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
	char data;
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
    // task is to complete this function
    // function should return head to the list after making 
    // necessary arrangements
//    bool isVovel(char data)
  //  {
    //    return(data=='a'||data=='e'||data=='i'||data=='o'||data=='u');
    //}
     Node* reverse(Node* head) {
        Node* curr = head, *prev = NULL;
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
    // struct Node* arrangeCV(Node *head)
    // {
    //   //Code here
    //   Node *vovel=head,*temp=head;
    //   while(!temp)
    //   {
    //       if(isVovel(temp->next->data))
    //       {
    //           Node*temp2=vovel->next;
    //           vovel->next=temp->next;
    //           Node *temp3=temp->next;
    //           temp->next=temp3;
    //           temp->next->next=temp2;
    //           vovel=vovel->next;
    //       }
    //       temp=temp->next;
    //   }
    //   return head;
    // }
     struct Node* arrangeCV(Node *head)
    {
       //Code here
       head = reverse(head);
       Node* vow = NULL, *cons = NULL, *curr = head;
       while(curr) {
           char ch = curr->data;
           Node* temp = new Node(ch);
           curr = curr->next;
           if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
               temp->next = vow;
               vow = temp;
           }
           else {
               temp->next = cons;
               cons = temp;
           }
       }
       head = vow;
       if(!vow) {
           head = cons;
           return head;
       }
       while(vow->next) vow = vow->next;
       vow->next = cons;
       
       return head;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends