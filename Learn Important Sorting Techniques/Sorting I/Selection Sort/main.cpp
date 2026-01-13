#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> arr, int start, int end){
    int minVal = arr[start];
    int result = start;
    for(int i = start + 1; i < end; i++) {
        if(arr[i] < minVal){
            minVal = arr[i];
            result = i;
        }
    }

    return result;
}

int main(){
    vector<int> arr = {13,46,24,52,20,9};
    int n = 5;
    int min = 0;
    for (int i = 0; i < n - 1; i++){
        int posi = findMin(arr, i, n);
        swap(arr[i], arr[posi]);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
}