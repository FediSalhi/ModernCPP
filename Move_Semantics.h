/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 11/09/2022
 * Description          : move semantics demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_MOVE_SEMANTICS_H
#define MODERNCPP_MOVE_SEMANTICS_H

#include <iostream>

class Move_Semantics
{
public:
    void Move_Semantics_Main();
};

class Data_Holder
{
public:
    Data_Holder(int d)
    {
        std::cout << "Constructor is called" << std::endl;

        data = new int(d);
    }
    Data_Holder(const Data_Holder& dh)
    {
        std::cout << "Copy constructor is called" << std::endl;
        data = dh.data;
    }
    Data_Holder(Data_Holder&& dh)
    {
        data = dh.data;
        dh.data = nullptr;
    }
    Data_Holder& operator=(const Data_Holder& dh)
    {
        std::cout << "Operator = is called" << std::endl;
        data = dh.data;
        return  *this;
    }
    ~Data_Holder()
    {
        std::cout << "Destructor is called" << std::endl;
        if(data != nullptr)
        {
            delete data;
        }
    }
private:
    int* data;
};


#endif //MODERNCPP_MOVE_SEMANTICS_H
