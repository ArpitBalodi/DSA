#include <iostream>
using namespace std;
struct studentList{
    int rollNo;
    string branch;
    
};
int main()
{
    struct studentList arpit,sourav,rishank;
    arpit.rollNo = 1;
    sourav.rollNo = 2;
    rishank.rollNo = 3;
    arpit.branch ="ECE";
    sourav.branch ="ECE" ;
    rishank.branch ="ECE";

    cout<<"Roll no. of arpit is "<<arpit.rollNo<<endl;
    cout<<"Roll no. of sourav is "<<sourav.rollNo<<endl;
    cout<<"Roll no. of rishank is "<<rishank.rollNo<<endl;
    cout<<"branch of arpit is "<<arpit.branch<<endl;
    cout<<"branch of rishank is "<<rishank.branch<<endl;
    cout<<"branch of sourav is "<<sourav.branch<<endl;
    return 0;
}
