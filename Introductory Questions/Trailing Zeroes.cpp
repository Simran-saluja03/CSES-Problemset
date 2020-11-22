#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin >> n;
    long int c=0;
    int i,temp;
    for(i=5;n/i>=1;i=i*5)
    {
        c=c+(n/i);
    }
    cout << c;
}
