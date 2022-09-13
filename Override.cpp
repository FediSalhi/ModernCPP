/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 13/09/2022
 * Description          : Override demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition
 * The "override" keyword is used to make sure that this function overrides another virtual function
 * declared in the inherited class. If the overriden function does not exists an error will be raised
 */


#include "Override.h"

void Override::Override_Main()
{
    Parent* parent = new Child();
    parent->function_that_does_nothing();
}