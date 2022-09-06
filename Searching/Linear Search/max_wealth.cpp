#include<bits/stdc++.h>
using namespace std;

int maxWealth(vector<vector<int>> account){
    int max = INT_MIN;
    int sum = 0;

    for(int i = 0; i < account.size(); i++){
        for(int j = 0; j < account[i].size(); j++){
            sum += account[i][j];
        }
        if(sum> max){
            max = sum;
        }
    }

    return max; 
}

int main(){
    
    vector<vector<int>> acc = {
        {1,4,9},
        {5,10,8},
    };

    cout<<maxWealth(acc)<<endl;
    return 0;
}