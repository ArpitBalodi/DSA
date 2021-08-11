#include<iostream>
    using namespace std;
 int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int mx = -199999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,a[i]);
        
    }
    cout<<mx<<endl;
    
    return 0;
}