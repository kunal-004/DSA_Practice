#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    int* next;
  public:
    Node(int data1, int* next1){
      data = data1;
      next = next1;
    }
};

int main(){
  vector<int> arr = {1,2,3,4,5};
  Node* head = new Node(arr[0], nullptr);
  Node* temp = new Node(arr[1], nullptr);
  head->next = (int*)temp;


  // prints data of head
  cout << head->data << endl;
  // prints address of head
  cout << head << endl;
  // prints address of next 
  cout << head->next << endl;
  // prints next data
  cout << *(head->next) << endl;
}
