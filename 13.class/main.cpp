#include<iostream>
#include<vector>

using namespace std;

class User {
    string  status;

  public:
    static int user_count;
    string first_name;
    string last_name;
    string get_status(){
     return status;
   }
    void set_status(string status){
      if(status == "gold" || status == "silver" || status == "bronze" || status == "new"){
        this->status = status;
      } else{
       this->status = "No status";
    }
   }
   int get_user_count(){
     return user_count;
   }

   User(){
      cout << "Constructor" << endl;
      user_count++;
   }

   User(string first_name, string last_name, string status){
    this-> first_name = first_name;
    this-> last_name = last_name;
    this-> status = status;

    cout << "Constructor" << endl;
    user_count++;
   }

};


int add_user(vector<User> &users, User user){
  for(int j=0; j< users.size(); j++){
    if(users[j].first_name == user.first_name && users[j].last_name == user.last_name){
      return j;
    }
  }
  users.push_back(user);

  return users.size() - 1;
}

int User::user_count = 0;

int main(){
  // User me;
  // me.first_name = "kunal";
  // me.last_name = "dash";

  // cout << "First Name: " << me.first_name << " " << me.last_name << endl;
  // cout << "Status: " << me.get_status() << endl; 

  // vector<User> users;
  // users.push_back(me);

  // cout << "First Name: " << users[0].first_name << " " << users[0].last_name << 
  // users[0].get_status() <<
  // endl;

  // User user1, user2, user3;
  // user1.first_name = "kunal";
  // user1.last_name = "pop";

  // user2.first_name = "kunal";
  // user2.last_name = "oop";

  // user3.first_name = "kunal";
  // user3.last_name = "jopo";

  // users.push_back(user1);
  // users.push_back(user2);
  // users.push_back(user3);

//   User user;
//   user.first_name = "jhon";
//   user.last_name = "doe";

//  cout << add_user(users, user) << endl;   

  User user1("kunal", "dash", "new");

  cout << user1.first_name << " " << user1.last_name << "Status\n" << user1.get_status() << endl;

  User user2;

user2.set_status("gold");
cout << user2.first_name << " " << user2.last_name << "Status\n" << user2.get_status() << endl;

cout << "User Count: " << User::user_count << endl;

    return 0;
} 
