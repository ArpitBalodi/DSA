#include<iostream>
using namespace std;
bool pairSum(int n,int a[],int k){
    int low = 0;
    int high = n-1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<pairSum(n,a,k);
    return 0;
}
