
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    for (int i = 0; i < k; i++)
    {
        v.push_back(v[0]);
        v.erase(v.begin());
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}