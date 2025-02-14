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

Node* arrayToDll(vector<int> arr){
  Node* head = new Node(arr[0]);
  Node* prev = head;
  for(int i=1; i<arr.size(); i++){
    Node* newNode = new Node(arr[i], nullptr, prev);
    prev->next = newNode;
    prev = newNode;
  }
  return head;
}

int main(){
  vector <int> arr = {1, 2, 3, 4, 5};
  Node* head =  arrayToDll(arr);
  Node* temp = head;
  while(temp != nullptr){
    cout << temp->data << " ";
    temp = temp->next;
  }
  return 0;
}
