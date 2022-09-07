/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 07/09/2022
 * Description          : Range based for loops demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/
#include "Range_Based_For_Loops.h"

void Range_Based_For_Loops::Range_Based_For_Loops_Main()
{
    std::vector<int> vec = {1,2,3,4,5,6,7};

    for(auto number : vec)
    {
        std::cout << number << std::endl;
    }

    // we can use const reference for more complex types
    std::vector<std::string> words = {"Fedi", "Salhi"};

    for(const auto& word : words)
    {
        std::cout << word << std::endl;
    }
}
