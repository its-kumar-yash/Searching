#include<bits/stdc++.h>
using namespace std;

int linaerSearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){
    
    int arr[] = {23, 6, 78, 11, 2, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<linaerSearch(arr, n, 2)<<endl;
    cout<<linaerSearch(arr, n, 15)<<endl;
    return 0;
}