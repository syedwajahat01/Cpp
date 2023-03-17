#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    //Destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL; 
        }
        cout<<" Memory is free for node with data. "<< value << endl;
    }
};

//Insert At Head
void insertAtHead(Node* &head, int d){
    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//Insert At Tail
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;

}

//Insert AT Position
void insertAtPosition(Node* & tail, Node* &head, int position, int d){
    //insert at start
    if(position == 1){
        insertAtHead(head, d);
        return;
    }
    Node*temp = head;
    int count = 1;
    while (count<position-1)
    {
        temp = temp->next;
        count ++;
    }

    //inserting at end
    if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
    }
    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp->next;
    temp -> next = nodeToInsert;
}

//Delete
void deleteNode(int position, Node* &head){
    //deleting first or start
    if(position == 1){
        Node *temp = head;
        head = head->next;
        //memory free
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr->next;
        curr -> next = NULL;
        delete curr;
    }
}

//print function
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){

    //create new node
    Node* node1 = new Node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail, 15);
    print(head);
    insertAtTail(tail, 20);
    print(head);
    insertAtPosition(tail, head, 1, 25);
    print(head);

    cout<<"Head: " <<head -> data<<endl;
    cout<<"Tail: " <<tail -> data<<endl;

    deleteNode(1, head);
    print(head);
    return 0;
}