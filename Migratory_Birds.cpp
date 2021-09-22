#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long  x[n + 1];
    for(long long i = 0 ; i < n ;i++) 
    cin >> x[i];
    int arr[5];
    for(int i = 0; i< 5; i++) arr[i] = 0;

    for(int i = 0 ; i < n;  i++){
        if(x[i] == 1){
            arr[0]+= 1;
        }else if(x[i] == 2){
            arr[1]+= 1;
        }else if(x[i] == 3){
            arr[2]+= 1;

        }else if(x[i] == 4){
            arr[3]+= 1;

        }else if(x[i] == 5){
            arr[4]+= 1;
        }else{ 
            continue; 
        }
    }
    int max = 0;
    for(int i = 0 ; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0 ; i < 5 ;i++){
        if(arr[i] == max){
            printf("%d\n", i+1);
            break;
        }
    }


    return 0;
}