#include<iostream>
using namespace std;
// CREATION OF LINKEDLIST
class LinkedList{
    public:
    int data;
    LinkedList* next;

    LinkedList(int data){
        this->data = data;
        this->next = NULL;
    }
};

// Insertion at head karenge (30 20 10)
void insertAtHead(LinkedList* &head, int data){
    LinkedList* temp = new LinkedList(data);
    temp->next = head;
    head = temp;
}

// Insert at tail karna hai(10 20 30)
void insertAtTail(LinkedList* &tail, int data){
    LinkedList* temp = new LinkedList(data);
    tail->next = temp;
    tail = tail->next;
    // or tail = temp
}

// Insert at position kar do
void insertAPosition(LinkedList* &head,LinkedList* &tail,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    LinkedList* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    
    // if the new node postion is at last the we can directly call insertattail function
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }

    LinkedList* nodeToInsert = new LinkedList(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


// Deletion of node at any position
void deleteAtPosition(LinkedList* &head,int position){
    if(position==1){
        head = head->next;
        return;
    }
    LinkedList* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    temp->next = temp->next->next;

}
// print the linked list 

void print(LinkedList* &head){
    LinkedList* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    LinkedList* node1 = new LinkedList(10);

    // head is pointing to node1 means head is initially at node1
    LinkedList* head = node1;
    LinkedList* tail = node1;
// insertion at head
    // insertAtHead(head,20);
    // insertAtHead(head,30);

// insertion at tail
    insertAtTail(tail,20);
    insertAtTail(tail,30);

// insert at position
    insertAPosition(head,tail,4,40);
// checking the position of head and tail
// cout<<"\nhead "<<head->data<<endl;
// cout<<"tail "<<tail->data;

// deletiion at any position
    cout<<"Before deletion: ";
    print(head);

    deleteAtPosition(head,1);
    cout<<"\nAfter deletion: ";
    print(head);
   
}