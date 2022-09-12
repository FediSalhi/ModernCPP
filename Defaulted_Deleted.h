<<<<<<< HEAD
/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 12/09/2022
 * Description          : Defaulted - Deleted demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/
=======
//
// Created by fedi on 12.09.2022.
//
>>>>>>> 6a4d2a9e3a7ad7d7112f607c707f179d0e22c13e

#ifndef MODERNCPP_DEFAULTED_DELETED_H
#define MODERNCPP_DEFAULTED_DELETED_H

<<<<<<< HEAD
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
=======

class Defaulted_Deleted {

>>>>>>> 6a4d2a9e3a7ad7d7112f607c707f179d0e22c13e
};


#endif //MODERNCPP_DEFAULTED_DELETED_H
