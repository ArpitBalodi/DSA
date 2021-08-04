#include<iostream>
    using namespace std;
    int decimalTobinary(int n){
        int ans = 0;
        int x = 1;
        while (n != 0)
        {
            int rem = n%2;
            n /= 2;
            ans += (rem*x);
            x = x *10;
        }
        return ans;
    }
 int main()
{
    int n;
    cin>>n;
    cout<<decimalTobinary(n);
    return 0;
}