/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 06/09/2022
 * Description          : All demos are called here
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#include "Smart_Pointers.h"
#include "Auto_Keyword.h"
#include "Range_Based_For_Loops.h"


int main() {

    //Smart Pointers
    Smart_Pointers sp;
    sp.Unique_Pointers_Main();
    sp.Shared_Pointers_Main();
    sp.Weak_Pointers_Main();

    // auto Keyword
    Auto_Keyword ak;
    ak.Auto_Keyword_Main();

    // Range Based For Loops
    Range_Based_For_Loops rbfl;
    rbfl.Range_Based_For_Loops_Main();


    return 0;
}
