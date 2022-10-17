#include<bits/stdc++.h>
using namespace std;

int OrderAgnosticBS(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;

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


int main(){
    
    vector<int> arr = {99, 80, 75, 22, 11, 10, 5, 2, -3};
    int target = 22;
    cout<<OrderAgnosticBS(arr, target)<<endl;
    return 0;
}