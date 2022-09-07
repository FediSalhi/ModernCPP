/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 07/09/2022
 * Description          : Structured binding demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

#include "Structured_Binding.h"

void Structured_Binding::Structured_Binding_Main()
{
    int array[3] = {1,2,3};
    // we decompose the array
    auto& [num1, num2, num3] = array;

    // we show every item using range based for loop
    for(const auto& num : array)
    {
        std::cout << num << std::endl;
    }


    // another example of using structured binding
    std::map<int, std::string> idCustomerMap = {
            { 1, "Fedi" },
            { 2, "Salhi" },
            { 3, "Engineer" }
    };

    for(const auto& item : idCustomerMap)
    {
        const auto& [first, second] = item;
        std::cout << first << " : " << second << std::endl;
    }
}
