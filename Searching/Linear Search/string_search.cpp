#include<bits/stdc++.h>
using namespace std;

bool stringSearch(char arr[], int n, char key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return true;
        }
    }

    return false;
}

int main(){
    
    char arr[] = "yash";
    int n = strlen(arr);
    cout<<stringSearch(arr, n, 'n')<<endl;
    cout<<stringSearch(arr, n, 'y')<<endl;
    return 0;
}