#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool is_list_empty(const vector<int>& list) {
  if (list.empty()) {
    cout << "[] - the list is empty" << endl;
    return true;
  }
  return false;
}

  int main() {

    vector<int> list{};
    bool selcected {true};


    while(selcected){
      char option {};
      cout << "A - Add a number" << endl;
      cout << "P - Print numbers" << endl;
      cout << "M - Display mean of the numbers" << endl;
      cout << "S - Display the smallest number" << endl;
      cout << "L - Display the largest number" << endl;
      cout << "Q - Quit" << endl;
      cout << "Enter your option: ";
      cin >> option;
      if(option == 'A' || option == 'a'){
        int add {};
        cout << "Enter a number: ";
        cin >> add;
        list.push_back(add);
        cout << add << " added" << endl;
      }else if(option == 'P' || option == 'p'){
        cout << "[ ";
        for(auto val: list){
         if (!is_list_empty(list)) 
          cout  << val   << " ";
        }
        cout << "]";
        cout << endl;
      }else if(option == 'M' || option == 'm'){
        int total {};
        for(auto val: list){
          if (!is_list_empty(list)) 
          total += val;
        }
        cout << "The mean is: " << total / list.size() << endl;
      }else if(option == 'S' || option == 's'){
         if (!is_list_empty(list));
        int min = *min_element(list.begin(), list.end());
        cout << "The smallest number is: " << min << endl;
      }else if(option == 'L' || option == 'l'){
        if (!is_list_empty(list));
        int max = *max_element(list.begin(), list.end());
        cout << "The largest number is: " << max << endl;
      }else if(option == 'Q' || option == 'q'){
        selcected = false;
        cout << "Goodbye" << endl;
      }else{
        cout << "Invalid option" << endl;
      }
    }

    // for(int i = 0; i <= 100; i++) {
    //   if(i % 5 == 0) {
    //     cout << endl;
    //   }
    //   cout << i << " ";
    // }


    // vector<double> temp{70.5, 80.5, 90.5, 100.5, 110.5};
    // double total {};
    // double average {};

    // for(auto val: temp){
    //   total += val;
    // }

    // if(temp.size() != 0){
    //   average = total / temp.size();
    // }

    // cout << "The average temperature is: " << average << endl;


    // int num {};

    // cout << "Enter a negative number to count up to: ";
    // cin >> num;

    // while ((num <= 0)) {
    //   cout << num << endl;
    //   num++;
    // }


    // for(int i = 1; i <= 100; i++) {
    //   for( int j =1; j<=10; j++ ){
    //     cout << i << " * " << j << " = " << i * j << endl;
    //   }
    //   cout << "----------------" << endl;
    // }

    // int data_item {};
    // cout << "Enter a data item: ";
    // cin >> data_item;

    // vector<int> data{};


    // for(int i {1}; i <=data_item; i++){
    //   int temp_data {};
    //   cout << "Enter data item " << i << ": ";
    //   cin >> temp_data;
    //   data.push_back(temp_data);
    // }


    // for(auto val: data){
    //   for(int j {1}; j <= val; j++){
    //     if(j % 5 == 0){
    //       cout << "*" ;
    //     }else{
    //       cout << "_";
    //     }
    //   }
    //   cout << endl;
    // }


    return 0;
  }
