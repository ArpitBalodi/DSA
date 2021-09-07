#include<iostream>
#include<climits>
using namespace std;
int kadence(int a[] , int n){
   int currSum = a[0];
    int maxSum = a[0];
    for (int i = 1; i < n; i++)
    {
        currSum += a[i];
        if (currSum < a[i])
        {
            currSum = a[i];
        }
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
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
  int wrapsum,nonwrapsum;
  nonwrapsum = kadence(a,n);
  int totalsum = 0;
  if (n==0)
  {
      return 0;
  }
  
  for (int i = 0; i < n; i++)
  {
      totalsum += a[i];
      a[i] = -a[i];
  }
    wrapsum = totalsum + kadence(a,n);
    if (wrapsum == 0)
    {
       cout<<nonwrapsum;
    }
    else
   cout<<max(wrapsum,nonwrapsum);
    
    return 0;
}
