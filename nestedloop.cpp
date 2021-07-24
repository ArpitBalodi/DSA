#include<iostream>
    using namespace std;
 int main()
{
    int savings;
    cin>>savings;
    if (savings>6000)
    {
        if (savings>8000)
        {
            cout<<"Going in Trip with Kedarnath"<<endl;
        }
        else
        {
            cout<<"Going with Tungnath"<<endl;
        }
    }
    else if (savings>4000)
    {
        cout<<"with rashmi"<<endl;
    }
    else
    {
        cout<<"with mishra"<<endl;
    }
    return 0;
}