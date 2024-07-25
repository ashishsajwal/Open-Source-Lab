#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    double avg=0;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        avg+=a[i];
    }
    cout<<avg/n<<endl;
}
