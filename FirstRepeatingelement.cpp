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
    int N = 199999;
    int idx[N];
    for (int i = 0; i < n; i++)
    {
       idx[a[i]] = -1;   
    }
      int minidx = INT_MAX;
      for (int i = 0; i < n; i++)
      {
          if (idx[a[i]] != -1)
          {
              minidx = min(minidx,idx[i]);
          }
          else
          {
              idx[a[i]] = i;
          } 
      }
      if (minidx == INT_MAX)
      {
          cout<<"-1"<<endl;
      }
      else
      {
          cout<<minidx+1<<endl;
      }
    return 0;
}