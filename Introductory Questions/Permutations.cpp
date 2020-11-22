#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int n,i;
    vector<int> v1;
    cin >> n;
    v1.resize(n);
    int k=0;
    if(n==2 || n==3)
    {
        cout << "NO SOLUTION";
    }
    else
    {for(i=1;i<=n;i++)
    {

        if(i%2==0)
        {
            v1[k] = i;
            k++;
        }
    }
    for(i=1;i<=n;i++)
    {

        if(i%2!=0)
        {
            v1[k] = i;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout << v1[i] << " ";
    }}

}
