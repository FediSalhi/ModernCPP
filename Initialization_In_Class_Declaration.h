/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 09/09/2022
 * Description          : Initialization in class declaration demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_INITIALIZATION_IN_CLASS_DECLARATION_H
#define MODERNCPP_INITIALIZATION_IN_CLASS_DECLARATION_H

#include <iostream>
#include <memory>

class Pre11_Init
{
public:
    Pre11_Init();

private:
    int m_x;
    int m_y;
};

class Modern_Init
{
public:
    Modern_Init();

private:
    int x = 0;
    int y = 0;
};


class Initialization_In_Class_Declaration
{
public:
    void Initialization_In_Class_Declaration_Main();
};


#endif //MODERNCPP_INITIALIZATION_IN_CLASS_DECLARATION_H
