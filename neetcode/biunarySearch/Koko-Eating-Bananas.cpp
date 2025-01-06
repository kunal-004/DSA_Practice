#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &arr, int n){
  int maxy = INT_MIN;
  for(int i = 0; i<n; i++){
    maxy = max(maxy,arr[i]);
  }
  return maxy;
}

int totalHours(vector<int> &arr, int n, int mid){
    int totalhours = 0;
    for(int i = 0; i<n; i++){
      totalhours += ceil(double(arr[i])/double(mid));
    }
    return totalhours;
}


void kokoBanana(vector<int> &arr, int n ,int h){
  int low = 1, high = findMax(arr,n);
  int ans = 0;
  while(low<=high){
    int mid = low+(high-low)/2;
    int totalhours = totalHours(arr,n,mid);
    if(totalhours<=h){
      ans = mid;
      high = mid-1;
    }else{
      low = mid+1;
    }
  }
  cout<<"Minimum speed is: "<<ans<<endl;
}


// second option
long long calculateTotalHours(const vector<int>& piles, int k) {
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += (long long)(pile + k - 1) / k;  
        }
        return totalHours;
    }

int minEatingSpeed(vector<int>& piles, int h) {
     int low = 1, high = *max_element(piles.begin(), piles.end());
       while (low <= high) {
            int mid = low + (high - low) / 2;
            long long totalHours = calculateTotalHours(piles, mid);

            if (totalHours <= h) {
                high = mid - 1;  
            } else {
                low = mid + 1;  
            }
        }
        return low;
}

int main(){
  vector <int> arr = {3,6,7,11};
  int n = arr.size();
  int h = 8;
  kokoBanana(arr,n, h);

  return 0;
}
