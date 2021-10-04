
#ifndef INC_4_FRIEND_FUNCTION_OPERATOR_OVERLOADING__4_H
#define INC_4_FRIEND_FUNCTION_OPERATOR_OVERLOADING__4_H
#include <iostream>
using namespace std;
class complex
{
private:
    int r,i;
public:
    complex():r(0), i(0)
    {
    }
    complex(int k1, int k2):r(k1), i(k2)
    {

    }
    void display()
    {
        cout<<r<<","<<i<<"\n";
    }
    friend istream& operator>>(istream&, complex&);
    friend ostream& operator<<(ostream&, complex);


};

istream& operator>>(istream &din, complex &c)
{
    cin>>c.r>>c.i;
    return cin;
}
ostream& operator<<(ostream &dout, complex c)
{
    cout<<c.r<<" "<<c.i;
    return cout;
}
#endif //INC_4_FRIEND_FUNCTION_OPERATOR_OVERLOADING__4_H
