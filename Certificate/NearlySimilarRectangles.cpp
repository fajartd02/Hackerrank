#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    // ll a = 15;
    // ll b = 30;
    // ll c = 25;
    // ll d = 50;

    // if(a/c == b/d) {
    //     printf("True");
    // }

    ll T;
    ll n;
    cin >> T;
    cin >> n;
    float arr[T][n];
    for(ll L = 0; L < T; L++) {
        for(ll i = 0 ; i < n;i++) {
            cin >> arr[L][i];
        }
    }
    ll count = 0;

     for (int i = 0; i < T; i++) {
        for (int j = i + 1; j < T; j++) {
 
            if (arr[i][0] * 1LL * arr[j][1]
                == arr[i][1] * 1LL * arr[j][0]) {
 
                count++;
            }
        }
    }

    // cout << count << endl;


    cout << count << endl;

}