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
#include "Structured_Binding.h"
#include "Lvalue_Rvalue.h"
#include "Initialization_In_Class_Declaration.h"
#include "Move_Semantics.h"
#include "Defaulted_Deleted.h"


int main() {

    // Smart Pointers
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

    // Structured Binding
    Structured_Binding sb;
    sb.Structured_Binding_Main();

    // rvalue and lvalue
    Lvalue_Rvalue LvRv;
    LvRv.Lvalue_Rvalue_Main();

    // Initialization in class declaration
    Initialization_In_Class_Declaration init;
    init.Initialization_In_Class_Declaration_Main();

    // Move Semantics
    Move_Semantics ms;
    ms.Move_Semantics_Main();

    // Defaulted Deleted
    Defaulted_Deleted dd ;
    dd.Defaulted_Deleted_Main();

    return 0;
}
