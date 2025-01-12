#include<bits/stdc++.h>
using namespace std;


class Node {
  public:
    int data;
    Node* next;

  public:
    Node(int data1, Node* next1){
      data = data1;
      next = next1;
    }
  public: 
     Node(int data1){
      data = data1;
      next = nullptr;
    }
};

// insert at head 
Node* InsertHead(Node* head, int k){
  Node* newNode = new Node(k);
  newNode->next = head;
  return newNode;
};

// insert at tail
Node* InsertTail(Node* head, int k){
  Node* newNode = new Node(k);
  if (head == nullptr) {
    return newNode;
  }
  Node* last = head;
  while (last->next != nullptr) {
    last = last->next;
  }
  last->next = newNode;
  return head;
}

// insert at a position
Node* InsertPosition(Node* head, int k, int position){
  Node* newNode = new Node(k);
  if(head == nullptr){
    if(position == 1) return newNode;
    else return nullptr;
  }
  if (position == 1) {
    newNode->next = head;
    return newNode;
  }
  Node* temp = head;
  int count = 0;
  while(temp != nullptr){
    count++;
    if (count == position-1) {
      newNode->next = temp->next;
      temp->next = newNode;
      return head;
    }
    temp = temp->next;
  }
  return head;
}

// insert before a value
Node* InsertBeforeValue(Node* head, int k, int value){
  Node* newNode = new Node(k);
  if (head == nullptr) {
    return nullptr;
  }
  Node* temp = head;
  while (temp != nullptr) {
    if (temp->next->data == value) {
      newNode->next = temp->next;
      temp->next = newNode;
      return head;
    }
    temp = temp->next;
  }
  return head;
}

int main(){
  vector<int> arr = {1,2,3,44,5};
  Node* head = new Node(arr[0]);
  Node* current = head;
    
    for (int i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

  // head = InsertHead(head, 100);
  // head = InsertTail(head, 100);
  //  head = InsertPosition(head, 100, 1);
  head = InsertBeforeValue(head, 100, 44);

  while(head != nullptr){
    cout << head->data << " ";
    head = head->next;
  }

 return 0;
}
