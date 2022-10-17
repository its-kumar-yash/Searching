#include<bits/stdc++.h>
using namespace std;

//Search a particular element without using start and end pointers.
//  - Search Chunk by  Chunk
//  - Double the range after every comparison

int binarySearch(vector<int> arr, int target, int start, int end){

    while(start <= end){
        int mid = start + (end - start)/2; 
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }

    return -1;
}


int findRange(vector<int> arr, int target){
    // initializing the range of size 2
    int start = 0;
    int end = 1;

    //condition for the target to lie in the range 
    while(arr[end] < target){
        int temp = end + 1; //this is the new Start
        // double the box Size
        // end  = end + boxSize*2
        end = end + (end - start + 1) * 2; 
        start = temp;
    }

    return binarySearch(arr, target, start, end);
}


int main(){
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 243, 556,1212};
    int target = 13;
    cout<<findRange(arr, target)<<endl;
    return 0;
}