#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr ={13,46,24,52,20,9};
    int n = 6;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[i]){
                swap(arr[j], arr[i]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}