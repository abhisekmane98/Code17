#ifndef INC_3_FRIEND_FUNCTION_TO_SEVERAL_CLASSES__3_H
#define INC_3_FRIEND_FUNCTION_TO_SEVERAL_CLASSES__3_H
class B;
class A
{
private:
    int p;
public:
    A(int k1)
    {
        p=k1;
    }
    friend int add(A,B);
};
class B
{
private:
    int q;
public:
    B(int k2)
    {
        q=k2;
    }
    friend int add(A,B);
};
int add(A a, B b)
{
    return (a.p+b.q);
}
#endif //INC_3_FRIEND_FUNCTION_TO_SEVERAL_CLASSES__3_H
