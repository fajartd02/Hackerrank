#include <bits/stdc++.h>
using namespace std;

int isOK(int divisor, int arr1[], int arr2[] ,int n, int m){
    bool ok = true;
    for(int j = 0; j < n; j++ ){
        if(divisor % arr1[j] != 0){
            ok = false;
        }
    }
    for(int j = 0 ; j < m ; j++){
        if(arr2[j] % divisor != 0){
            ok = false;
        }
    }

    if(ok == false){
        return 0;
    }
    return 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    int arr[a];
    for(int i = 0 ; i < a; i++){
        cin >> arr[i];
    }
    int arr2[b];
    for(int i = 0 ; i < b; i++){
        cin >> arr2[i];
    }
    int count = 0;
    for(int i =1; i<= 100; i++){
        if(isOK(i, arr, arr2, a, b)){
            count += 1;
        }
    }

    cout << count << endl;

    
    return 0;
}