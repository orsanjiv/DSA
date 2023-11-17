#include<iostream>
using namespace std;

class Linkedlist{
    public:
        int data;
        Linkedlist* next;
        
    Linkedlist(int data){
        this->data=data;
        this->next=NULL;
    }    

};

int main(){
    Linkedlist* node1 = new Linkedlist(12);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
   
}