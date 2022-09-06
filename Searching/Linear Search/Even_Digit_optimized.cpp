#include<bits/stdc++.h>
using namespace std;

int countDigit(int n){
    if(n < 0){
        n *= -1;
    }
    if(n == 0){
        return 1;
    }
    

    return log10(n) + 1;
}

bool checkEven(int n){
    int count = countDigit(n);
    return (count % 2 == 0);
}


int findNumber(int arr[], int n){
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(checkEven(arr[i])){
            cnt++;
        }
    }
    return cnt;
}


int main(){
    
    int arr[] = {18, 124, 9, 1764, 98, 1 , 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findNumber(arr,n)<<endl;
    return 0;
}