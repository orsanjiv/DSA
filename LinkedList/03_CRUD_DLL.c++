#include<iostream>
using namespace std;

class LinkedList{
    public:
    int data;
    LinkedList* next;
    LinkedList* prev;

    LinkedList(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

int lLength(LinkedList* &head){
    LinkedList* temp = head;
    int size = 0;
    while(temp != NULL){
        size++;
        temp = temp->next;
    }
    return size;
}

void print(LinkedList* &head){
    LinkedList* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;    
}


// insetion at head
void insertAtHead(LinkedList* &head,int data){
    LinkedList* temp = new LinkedList(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insertion at tail
void insertAtTail(LinkedList* &tail,int data){
    LinkedList* temp = new LinkedList(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

// Insertion at any position
void insertAtPosition(LinkedList* &head,LinkedList* &tail,int position,int data){
    LinkedList* temp = head;
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    int cnt = 1;
    while(cnt<position-1){
        cnt++;
        temp = temp->next;
    }

    if(temp==NULL){
        insertAtTail(tail,data);
        return;
    }

    LinkedList* nodeToInsert = new LinkedList(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
}

// deletion at any position
void deleteAtPositon(LinkedList* &head,int position){
    if(position==1){
        head->next->prev = NULL;
        head=head->next;
        return;
    }

    LinkedList* temp = head;
    int cnt = 1;
    while(cnt<position-1){
        cnt++;
        temp=temp->next;    
    }

    temp->next = temp->next->next;
    temp->next->prev = temp;

}


int main(){
   LinkedList* node1 = new LinkedList(10);
   LinkedList* head = node1;
   LinkedList* tail = node1;

//    finding the size of linked list
//    int length = lLength(head);
//    cout<<"\n The size of linked list is: "<<length;
// we are doing insertion at head position
    insertAtHead(head,20);
    insertAtHead(head,30);

//  insertion at tail position
    insertAtTail(tail,5);

    // checking the value of head and tail
    print(head);
    // cout<<"Head: "<<head->data;
    // cout<<"\nTail: "<<tail->data<<endl;

// insertion at any position
    insertAtPosition(head,tail,2,40);
    print(head);

// deletion at any position
    deleteAtPositon(head,1);
    print(head);
    
}