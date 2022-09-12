/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 11/09/2022
 * Description          : move semantics demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/
#include "Move_Semantics.h"

void Move_Semantics::Move_Semantics_Main()
{
    // let's create a data holder
    Data_Holder dh1(1);

    // a second data holder is created
    Data_Holder dh2(dh1);

    Data_Holder dh3 = std::move(dh1);
}