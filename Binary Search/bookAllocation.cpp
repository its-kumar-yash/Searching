#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false;
        }

        if (pageSum + arr[i] > mid) {
            // Increment student count by '1'
            studentCount += 1;

            // Update curSum
            pageSum = arr[i];

            // If students required becomes greater than given no. of students, return false
            if (studentCount > m) {
                return false;
            }
        }
        // Else update curSum
        else {
            pageSum += arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> arr, int n, int m){
    int s = 0; //minimum value
    // maximum value
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;

    int mid;
    int ans;

    while( s <= e){

        mid = s + (e - s)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1; 
        }
    }

    return ans;
}

int main(){
    
    vector<int> arr = {10,20,30,40};
    int n = 4;
    int m = 2;
    cout<<bookAllocation(arr,n,m);
    return 0;
}