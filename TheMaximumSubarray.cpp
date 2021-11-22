#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    while(n--) {
        ll len;
        cin >> len;
        ll arr[len];
        bool allPositive = true;
        for(int j = 0; j < len; j++) {
            cin >> arr[j];
            if(arr[j] < 0) allPositive = false;
        }
        ll maxSubsquence= 0, maxSubArray= INT_MIN, temp = 0;
        for(int i = 0 ; i < len ; i++) {
            temp = temp + arr[i];

            if(arr[i] >= 0) maxSubsquence+= arr[i];
            if(!allPositive)  {
                if(i == 0) maxSubsquence = arr[0];
                else maxSubsquence = max(arr[i], maxSubsquence);
            }
            if(temp < arr[i]) temp = arr[i];    
            if(maxSubArray < temp) maxSubArray = temp;
        }

        cout << maxSubArray << " " << maxSubsquence << endl;
    }
    return 0;
}