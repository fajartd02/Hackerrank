#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p;
	cin >> n >> p;
	int firstPage = 1;
	int lastPage = n;
	int fCount=0;
	int lCount=0;
	int min = 0;
	if(p==n||p==1){
		printf("0\n");
		return 0;	
	}
	if(n%2==1){
		if(n-1==p||n==p){
			printf("0\n");
			return 0;
		}
	}else{
		if(n-1==p){
			printf("1\n");
			return 0;
		}
	}
	
	while(1){
		firstPage += 1;
		fCount += 1;
		if(firstPage == p || firstPage+1==p){
			min = fCount;
			break;	
		}
		
	}
	
	while(1){
		lastPage -= 1;
		lCount++;
		if(lastPage==p||lastPage-1==p)
		break;
	}
	
	if(min > lCount){
		min=lCount;
	}
	printf("%d\n", min);
	
	
	
		
	return 0;
}
