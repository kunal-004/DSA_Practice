#include<bits/stdc++.h>
using namespace std;


void Lcs(vector<int> &nums, int n){
  unordered_set<int> s(nums.begin(), nums.end());
    int longest = 0;

    for (int num : s) {
        if (s.find(num - 1) == s.end()) { 
            int current = num;
            int length = 1;

            while (s.find(current + 1) != s.end()) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << longest << endl;
}



int main(){
  vector<int> nums = {100, 4, 200, 1, 3, 2};
  int n = nums.size();
  Lcs(nums,n);
}
