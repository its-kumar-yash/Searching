//https://leetcode.com/problems/split-array-largest-sum/
#include<bits/stdc++.h>
using namespace std;


int splitArray(vector<int> nums, int m){
    int start = 0, end = 0;
    // Range Calculation
    start = *max_element(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size(); i++){
        end += nums[i];
    }

    //binary Search
    while( start < end){
        int mid = start + (end - start)/2;
        // calculate how many pieces you can divide this in with this max sum
        int sum = 0;
        int pieces = 1;
        for(int num : nums){
            if(sum + num > mid){
                // you cannot add this in this subarray, make new one
                // say you add this num in new subarray, then sum = num
                sum = num;
                pieces++;
            }
            else{
                sum += num;
            }
        }

        if(pieces > m){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    

    return end;
}

int main(){
    
    vector<int> nums = {7,2,5,10,8};
    int k = 2;
    cout<<splitArray(nums,k)<<endl;
    return 0;
}