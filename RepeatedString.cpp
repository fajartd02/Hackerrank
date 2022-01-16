#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    ll n;
    cin >> n;
    ll count = 0;
    
    if(s.size() == 1 && s[0] == 'a') {
        cout << n << endl;
        return 0;
    }

    if(n <= s.size()) {
        for(int i = 0; i < n; i++) {
            if(s[i] == 'a') count++;
        }   
    } else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a') count++;
        }

        if(n > s.size()) {
            count *= (n/s.size());
            ll sisa = n % s.size();

            for(int i = 0; i < sisa; i++) {
                if(s[i] == 'a') count++;
            }
        }
    }
    

    cout << count << endl;
    return 0;
}