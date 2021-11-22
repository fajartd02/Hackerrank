#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p;
	cin >> n >> p;
	int leftToRight = n/2;
	int leftToP = p/2;
	int rightToP = leftToRight-leftToP;
	
	cout << min(leftToP, rightToP)<<endl;
		
	return 0;
}
