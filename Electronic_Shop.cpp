#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll b,n,m;
	cin >> b >> n >> m;
	ll arr[n], arr2[m];
	for(int i = 0 ; i < n ;i++)
		cin>>arr[i];
	for(int i = 0;i<m;i++)
		cin>>arr2[i];
	ll max = -1, temp=0;
	for(int i = 0;i < n;i ++){
		for(int j = 0 ; j < m; j++){
			temp=arr[i]+arr2[j];
			if(temp > max && temp <= b)
				max=temp;
		}
	}
	printf("%lld\n", max);
}
