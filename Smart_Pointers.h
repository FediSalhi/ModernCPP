/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 06/09/2022
 * Description          : Smart pointers demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * Smart pointers are wrappers or containers of pointers.
 * They have the advantage of de-allocating the memory pointed to automatically at the end
 * of the scope, so you don't have to worry about memory leak in your program.
 *
 * There are 3 types of smart pointers in CPP:
 *          1- Unique pointer
 *          2- Shared pointer
 *          3- Weak pointer
 */

#ifndef MODERNCPP_SMART_POINTERS_H
#define MODERNCPP_SMART_POINTERS_H

#include <iostream>
#include <memory>
using namespace std;

class Smart_Pointers
{
public:
    Smart_Pointers() {};
    ~Smart_Pointers() {};
    void Unique_Pointers_Main();
    void Shared_Pointers_Main();
    void Weak_Pointers_Main();
};

class My_Class
{
public:
    My_Class()
    {
        cout << "My_Class constructor is invoked" << endl;
    }
    ~My_Class()
    {
        cout << "My_Class destructor is invoked" << endl;
    }
};


#endif //MODERNCPP_SMART_POINTERS_H
