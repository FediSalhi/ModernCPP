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


/* Definition:
 * We add "default" keyword to tell the compiler that a default special member
 * function (constructor, destructor, copy constructor, copy assignment .. ) will be used.
 * We call these functions explicitly defaulted functions
 * We add "delete" keyword with any member function to prevent using this function.
 * For example, we can use "delete" to prevent copying an object (maybe it's too large).
 * We call these kind of functions explicitly deleted functions.
 */


#include "Defaulted_Deleted.h"

void Defaulted_Deleted::Defaulted_Deleted_Main()
 {
    Very_Large_Object vlo; //default constructor
    Very_Large_Object("VLO"); // second constructor is used

    // this statement should give an error, since the copy constructor is explicitly deleted
    //Very_Large_Object vlo2(vlo);
 }
=======
//
// Created by fedi on 12.09.2022.
//

#include "Defaulted_Deleted.h"
>>>>>>> 6a4d2a9e3a7ad7d7112f607c707f179d0e22c13e
