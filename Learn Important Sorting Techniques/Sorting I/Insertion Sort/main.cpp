#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {7, 4, 1, 5, 3};
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int keys = arr[i];
        int j = i - 1;
        
        while(j  >= 0 && arr[j] > keys){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j + 1] = keys;

    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}