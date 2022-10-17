#include<bits/stdc++.h>
using namespace std;


int mountainArray(vector<int> nums){
    int s = 0;
    int e = nums.size();

    while( s < e){
        int mid = s + (e - s)/2;
        if(nums[mid] < nums[mid + 1]){
            // ascending part
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }

    return s;
}

int main(){
    
    vector<int> arr = {0,1,4,5,6,3,2};
    cout<<mountainArray(arr)<<endl;
    cout<<1<<endl;
    return 0;
}