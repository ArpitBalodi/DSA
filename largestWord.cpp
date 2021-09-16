#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    int i = 0;
    int maxlength = 0,currlength = 0, maxst = 0,st=0;
    while (i<n)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (currlength > maxlength)
            {
                maxst = st;
                maxlength = currlength;
            }
            st = i+1;
            currlength = 0;
        }
        else
        {
            currlength++; 
        }
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }
      cout<<maxlength<<endl;
      for (int i = 0; i < maxlength; i++)
      {
          cout<<a[i+maxst];
      }
      
    return 0;
}
