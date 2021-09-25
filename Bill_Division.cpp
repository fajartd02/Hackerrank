#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull n,k;
    cin >> n >> k;
    ull arr[n];
    for(ull i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    ull skip = arr[k];
    ull pay = 0;
    cin >> pay;

    ull sum = 0;
    for(ull i = 0 ; i < n ; i++){
        if(i == k){
            continue;
        }else{
            sum += arr[i];
        }
    }
    sum /= 2;
    if(sum == pay) {
        cout << "Bon Appetit\n";
    }else {
        cout << pay - sum << "\n";
    }

    return 0;

}