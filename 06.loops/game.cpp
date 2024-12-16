#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;



void play_game(){
  int random = rand() %25;
  int guess;
  cout << "Guess the number: ";
  cin >> guess;

  while (guess != random){
    if (guess > random){
      cout << "Too High" << endl;
    }else{
      cout << "Too Low" << endl;
    }
    cout << "Guess the number: ";
    cin >> guess;
  }
  cout << "You Guessed it" << endl;
}

int main(){
  int choice;
 do{
  cout <<"1. Start Game" << endl << "0. Exit" << endl;

  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "Game Started" << endl;
    play_game();
    break;
  case 0:
    cout << "Exiting Game" << endl;
    return 0;
  default:
    cout << "Invalid Choice" << endl;
    break;
  }

 }while (choice != 0);
 {
  return 0;
 }
 

  return 0;
}
