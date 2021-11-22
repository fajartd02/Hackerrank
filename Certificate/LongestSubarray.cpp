#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll T;
    cin >> T;
    ll arr[T];
    for(ll i = 0; i < T ; i++) {
        cin >> arr[i];
    }

    ll maxs = 0;
    for(ll i = 0 ; i < T; i++) {
        ll ans = 1;
        ll temp[2];
        temp[0] = arr[i];
        bool v = true;
        for(ll j = i+1 ; j < T; j++) {
            if(abs(arr[j] - temp[0]) == 1) {
                if (v == true) {
                    temp[1] = arr[j];
                    ans++;
                    v = false;
                } else {
                    if (arr[j] == temp[0] || arr[j] == temp[1]) {
                        ans++;
                    } else {
                        break;
                    }
                }
            } else if (abs(arr[j] - temp[0]) == 0) {
                ans++;
            }
            else {
                break;
            }
        }
        if(maxs < ans) {
            maxs = ans;
        }
    }
    cout << maxs << endl;

    return 0;
}
