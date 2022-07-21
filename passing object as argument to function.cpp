#include<iostream>
using namespace std;

class Greater
{
    int num;
    public :
        void setdata(int a)
        {
        num=a;
        }
        void Compare(Greater G);
};
void Greater::Compare(Greater G)
{
    if(num== G.num)
    {
    cout<<"number are equal";
    }
    
    else if(num< G.num)
    {
    cout<<"number 1 is less than number 2";
    }
    else
    {
    cout<<"number 1 is greater than number 2";
    }
}
int main()
{
Greater G1,G2;
G1.setdata(11);
G2.setdata(9);
G1.Compare(G2);
return 0;
}