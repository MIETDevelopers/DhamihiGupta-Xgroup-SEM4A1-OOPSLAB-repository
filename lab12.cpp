//WAP in c++ using inheritence (multilevel) to calculate the area of the rectangle.
#include <iostream>
using namespace std;

class length
{
    public: int l;
    int getl()
    {
        cout<<"enter length:";
        cin>>l;
    }
};

class breadth: public length
{
    public: int b;
    int getb()
    {
        cout<<"enter breadth:";
        cin>>b;
    }
};

class area: public breadth
{
public:
    int areaofrectangle()
    {
        cout<<"area:"<<l*b<<endl;
    }
};

int main()
{
    area obj;
    obj.getl();
    obj.getb();
    obj.areaofrectangle();
    return 0;
}
