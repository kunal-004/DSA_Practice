#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;


int main(){

  
string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}; string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

string secret_message {};
cout << "Enter your secret message: ";
getline(cin, secret_message);


string encrypted_message {};
for (char c : secret_message) {
    size_t position = alphabet.find(c);
    if (position != string::npos) {
        encrypted_message += key[position];
    } else {
        encrypted_message += c;
    }
}
cout << "Encrypted message: " << encrypted_message << endl;

string decrypted_message {};
for (char c : encrypted_message) {
  size_t position = key.find(c);
  if (position != string::npos) {
    decrypted_message += alphabet[position];
  } else {
    decrypted_message += c;
  }
}
cout << "Decrypted message: " << decrypted_message << endl;

  // char first_name[20];
  // char last_name[20];

  // cout << "Enter your first name: ";
  // cin >> first_name;
  // cout << "Enter your last name: ";
  // cin >> last_name;


  // cout << first_name << "is lenght  of" << strlen(first_name) <<endl;
  // cout << last_name << "is lenght of" << strlen(last_name) <<endl;

  // char full_name[40];

  // strcpy(full_name, first_name);
  // strcat(full_name, " ");
  // strcat(full_name, last_name);

  // cout << "Your full name is " << full_name << endl;

  // for(int i =0; i < strlen(full_name); i++){
  //   full_name[i] = toupper(full_name[i]);
  // }
  // cout << "Your Capitalized full name is " << full_name << endl;


  // string s1 = "jam";

  // string s2 = "lets eat" + s1 + "!";
  // cout << s2 << endl;

   return 0;
}
