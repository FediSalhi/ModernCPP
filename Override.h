/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 13/09/2022
 * Description          : Override demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_OVERRIDE_H
#define MODERNCPP_OVERRIDE_H

#include<iostream>

class Override
{
public:
    void Override_Main();
};

class Parent
{
public:
    virtual void function_that_does_nothing()
    {
        std::cout << "Function that does nothing in class Parent" << std::endl;
    }
};

class Child : public Parent
{
public:
    void function_that_does_nothing() override
    {
        std::cout << "Function that does nothing in class Child" << std::endl;
    }
};
#endif //MODERNCPP_OVERRIDE_H
