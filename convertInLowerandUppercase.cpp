#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "arpit";
    transform(s.begin(), s.end(), s.begin() ,:: toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}

