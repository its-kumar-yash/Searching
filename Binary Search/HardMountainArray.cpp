//https://leetcode.com/problems/find-in-mountain-array/
#include<bits/stdc++.h>
using namespace std;

int OrderAgnosticBS(vector<int> arr, int target, int start, int end){
    
    // find whether the array is sorted in ascending or descending
    bool isASC = arr[start] < arr[end];
    
    while( start <= end ){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            return mid;
        }

        if(isASC){
            if( arr[mid] > target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else{
            if( arr[mid] < target){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        
    }

    return -1;

}

int peakMountain(vector<int> arr){
    int s = 0, e = arr.size() - 1, mid;
    
    while( s < e){
        mid = s + (e - s)/2;
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
    }

    return s;
}


int search(vector<int> arr, int target){
    int peak = peakMountain(arr);
    int firstTry = OrderAgnosticBS(arr, target, 0 , peak);

    if( firstTry != -1){
        return firstTry;
    }
    
    return OrderAgnosticBS(arr, target, peak + 1, arr.size() - 1);
}

int main(){
    vector<int> array = {1,2,3,4,5,3,1};
    int target = 3;
    cout<<search(array, target)<<endl;
    return 0;
}