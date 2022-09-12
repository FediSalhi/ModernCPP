/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 12/09/2022
 * Description          : Final Class demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_FINAL_CLASS_H
#define MODERNCPP_FINAL_CLASS_H

#include <iostream>

// an abstract class (contains a pure virtual function)
class Base
{
public:
    Base() = default;
    virtual ~Base() = 0;
    virtual void show() final {
        std::cout << "Hello" << std::endl;
    }
};

// a class that cannot be derived
class Child_Level_1 final : public Base
{
public:
    Child_Level_1() = default;
    ~Child_Level_1() = default;
};

class Other_Child : public Base
{
public:
    Other_Child() = default;
    ~Other_Child() = default;

    /* the show member function cannot be inherited since it's marked as final
     * this will give a compilation error */
//    void show()
//    {
//        std::cout << "Hello override" << std::endl;
//    }
};

// this will give a compilation error, since the Child_Level_1 is marked as a final class.
//class Child_Level_2 : Child_Level_1
//{
//public:
//    Child_Level_2() = default;
//    ~Child_Level_2() = default;
//
//};


#endif //MODERNCPP_FINAL_CLASS_H
