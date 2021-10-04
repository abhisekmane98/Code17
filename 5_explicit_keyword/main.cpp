#include <iostream>
class complex
{
private:
    int r,i;
public:
    explicit complex(int k1=0, int k2=0):r(k1),i(k2)
    {

    }
    complex operator+(complex c)
    {
        complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    void display()
    {
        std::cout<<r<<","<<i<<"\n";
    }

};
int main()
{
    complex c3,c1(1,2),c2(3,5);
    c3=c1+2;
    c3.display();

    return 0;
}
