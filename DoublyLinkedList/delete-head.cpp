#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
    Node *back;

  public:
    Node(int data1, Node *next1, Node *back1){
      data = data1;
      next = next1;
      back = back1;
    }
  public: 
     Node(int data1){
      data = data1;
      next = nullptr;
      back = nullptr;
    }
};

Node* deleteHead(vector<int> arr){
  Node* head = new Node(arr[0]);
  Node* curNode = head;
  Node* prevNode = head;
  for(int i=1; i<arr.size(); i++){
    Node* newNode = new Node(arr[i]);
    curNode->next = newNode;
    newNode->back = curNode;
    curNode = newNode;
    prevNode = curNode;
  }
  return head;
}

int main(){
  vector <int> arr = {1, 2, 3, 4, 5};
  Node* head =  deleteHead(arr);
  Node* temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}
