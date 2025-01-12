#include<bits/stdc++.h>
using namespace std;

class Node{
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

Node* arrayToLL(vector<int> arr){
    Node* firstNode = new Node(arr[0]);
    Node* curNode = firstNode;
    for(int i = 1; i < arr.size(); i++){
       Node* newNode = new Node(arr[i]);
       curNode->next = newNode;
       curNode = newNode;
    }
    return firstNode;
};

int LengthLL(Node* head){
  Node* temp = head;
  int count = 0;
  while(temp != nullptr){
    count++;
    temp = temp->next;
  }
  return count;
}

int searchLL(Node* head, int key){
  Node* temp = head;
  while(temp != nullptr){
    if(temp->data == key){
      return 1;
    }
    temp = temp->next;
  }
  return 0;
}

int main(){
  vector<int> arr = {1,2,3,4,5};
  Node* head = arrayToLL(arr);
  cout << head->data << endl;
  Node* temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
  cout << "Length of LL: " << LengthLL(head) << endl;
  cout << "Search 3 in LL: " << searchLL(head, 3) << endl;

  return 0;
}
