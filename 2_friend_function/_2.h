//
// Created by ADMIN on 03-10-2021.
//

#ifndef INC_2_FRIEND_FUNCTION__2_H
#define INC_2_FRIEND_FUNCTION__2_H
class A
{
    private:
        int a,b;
    public:
        A(int,int);
        friend void sum(A);
};

#endif //INC_2_FRIEND_FUNCTION__2_H
