#include<bits/stdc++.h>
using namespace std;

int searchInRange(int arr[], int lo, int hi,int key){
    for(int i = lo; i<= hi; i++ ){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = {18,12,-7, 3,14,28};
    cout<<searchInRange(arr, 1, 4, 3);
    return 0;
}