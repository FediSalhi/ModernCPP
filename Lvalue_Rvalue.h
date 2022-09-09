/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 09/09/2022
 * Description          : lvalue and rvalue demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_LVALUE_RVALUE_H
#define MODERNCPP_LVALUE_RVALUE_H

#include <iostream>
#include <string>

class Lvalue_Rvalue
{
public:
    Lvalue_Rvalue(){};
    void Lvalue_Rvalue_Main();
    void Show_Combined_String_Call_By_Value(std::string string);
    void Show_Combined_String_Call_By_Reference(std::string& string);
    void Show_Combined_String_Call_By_Reference_Const(const std::string& string);
    void Show_Combined_String_Rvalue(std::string&& string);

};


#endif //MODERNCPP_LVALUE_RVALUE_H
