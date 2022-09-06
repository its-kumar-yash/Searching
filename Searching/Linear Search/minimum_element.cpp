#include<bits/stdc++.h>
using namespace std;


int minimumElement(int arr[], int n){
    int min_ele = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min_ele){
            min_ele = arr[i];
        }
    }

    return min_ele;
}

int main(){

    int arr[] = {18, 12,-7,3,14,28};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<minimumElement(arr, n)<<endl;
    return 0;
}