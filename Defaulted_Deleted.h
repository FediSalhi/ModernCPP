/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 12/09/2022
 * Description          : Defaulted - Deleted demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#ifndef MODERNCPP_DEFAULTED_DELETED_H
#define MODERNCPP_DEFAULTED_DELETED_H

#include <iostream>
#include <string>

class Defaulted_Deleted
{
public:
    void Defaulted_Deleted_Main();
};

class Very_Large_Object
{
public:
    Very_Large_Object() = default;
    explicit Very_Large_Object(std::string&& name) : _name(name) {};
    Very_Large_Object(const Very_Large_Object& obj) = delete; //preventing copying
private:
    std::string _name;
};


#endif //MODERNCPP_DEFAULTED_DELETED_H
