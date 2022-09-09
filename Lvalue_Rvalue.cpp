/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 09/09/2022
 * Description          : lvalue and rvalue demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/



/* Definition:
 *  we call a lvalue a variable that can be referenced to its location in memory.
 *  lvalue is stored in memory --> we can assign a value to lvalue
 *  we call a rvalue a value that is stored temporary in the memory
 *  we cannot assign an expression to a rvalue
 */


#include "Lvalue_Rvalue.h"

void Lvalue_Rvalue::Lvalue_Rvalue_Main()
{
    // here i is a lvalue, 10 is rvalue. We can't assign a value to 10
    int i = 10;

    //here both a and i are lvalues
    int a = i;

    //here str, str1, and str2 are lvalues
    std::string str = "string";
    std::string str1 = "string1";
    std::string str2 = "string2";

    // here str is a lvalue, str1+str2 is a rvalue
    str = str1 + str2;

    // this will give an error --> this method expect a lvalue
    // Show_Combined_String_Call_By_Reference(str1 + str2); // str1 + str2 are rvalues

    // this call works fine, since str is lvalue
    Show_Combined_String_Call_By_Reference(str);

    // we can add a const to make the method compatible with a lvalue
    Show_Combined_String_Call_By_Reference_Const(str1 + str2);

    // this call only works with rvalue
    Show_Combined_String_Rvalue(str1 + str2);

    // this call give a compilation error, since the methods only accepts rvalues
    //Show_Combined_String_Rvalue(str);

}

void Lvalue_Rvalue::Show_Combined_String_Call_By_Value(std::string str)
{
    std::cout << str << std::endl;
}


void Lvalue_Rvalue::Show_Combined_String_Call_By_Reference(std::string& string)
{
    std::cout << string << std::endl;
}

void Lvalue_Rvalue::Show_Combined_String_Call_By_Reference_Const(const std::string& str)
{
    std::cout << str << std::endl;
}

//we use && to make the methods expects only rvalue
void Lvalue_Rvalue::Show_Combined_String_Rvalue(std::string &&string)
{
    std::cout << string << std::endl;
}