#include<iostream>
    using namespace std;
    int octaltobinary(int n){
        int ans = 0;
        int x = 1;
        while (n != 0)
        {
            int rem = n%8;
            n /= 8;
            ans += (rem*x);
            x = x *10;
        }
        return ans;
    }
 int main()
{
    int n;
    cin>>n;
    cout<<octaltobinary(n);
    return 0;
}