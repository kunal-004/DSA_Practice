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

// delete head 
Node* deleteHead(Node* head){
  if(head == nullptr){
    return nullptr;
  }
  Node* temp = head;
  head = temp->next;
  delete temp;

  return head;
};

// delete tail
Node* deleteTail(Node* head){
  if(head == nullptr || head->next == nullptr) return nullptr;
  Node* temp = head;
  while(temp->next->next != nullptr){
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;

  return head;
};

//delete a k value
Node* deleteKPosition(Node* head, int k){
  if(head == nullptr) return nullptr;
  if (head->data == k) {
        Node* temp = head;
        head = head->next; 
        delete temp;       
        return head;
    }

  Node* temp = head;
  while(temp != nullptr || temp->next != nullptr){
    if(temp->next->data == k){
      Node* nodeToDelete = temp->next;
      temp->next = temp->next->next; 
      delete nodeToDelete;
      return head;                          
    }
    temp = temp->next;
  }
  return head;
}

// delete at a position
Node* deleteAtPosition(Node* head, int position){
  if(head == nullptr) return nullptr;
  if(position == 1){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
  }
  Node* temp = head;
  Node* prev = nullptr;
  int count = 0;
  while(temp != nullptr && count != position){
    count++;
    if(count == position){
      prev->next = temp->next->next;
      delete temp;
      return head;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

//when only key node is given
Node* deleteNode(Node* key) {
   Node* temp = key->next;
    key->data = temp->data;
    key->next = temp->next;
    delete temp;
    return key;
}

int main(){
  vector<int> arr = {1,2,3,44,5};
  Node* head = new Node(arr[0]);
  Node* current = head;
    
    for (int i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }

  // head = deleteHead(head);
  // head = deleteTail(head);
  // head = deleteKPosition(head, 3); 
  head = deleteAtPosition(head, 3);

  while(head != nullptr){
    cout << head->data << " ";
    head = head->next;
  }

 return 0;
}
