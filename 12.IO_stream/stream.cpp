#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main()
{
    ofstream file("test.txt");
    file << "great test!" << endl;

    ifstream in("test.txt");
    string str;
    in >> str;
    cout << str << endl;
    in.close();

    vector <string> v;   
        v.push_back("amu");
        v.push_back("bmu");
        v.push_back("cmu");
        v.push_back("dmu");

        for(string s : v)
        {
            file << s << endl;
        }

    return 0;
} 
