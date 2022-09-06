#include<bits/stdc++.h>
using namespace std;

vector<int> Searchin2D(vector<vector<int>> arr, int row, int col, int key){
    vector<int> result;
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            if(arr[i][j] == key){
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }

    return result = { -1, -1};
}

int main(){
    
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
    };

    vector<int> result = Searchin2D(arr, 2, 4, 5);
    for(int i = 0; i <  result.size(); i++){
        cout << result[i] << " ";
    }


    return 0;
}