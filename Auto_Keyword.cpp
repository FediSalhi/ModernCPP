/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 07/09/2022
 * Description          : Auto keyword demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * "auto" keyword is a useful tool that came with C++11
 * You can use the keyword auto to eliminate redundant code
 * Don't use with simple types (e.g. int, float ...)
 * use it when the type can be known from the right part of the statement
 */

#include "Auto_Keyword.h"

void Auto_Keyword::Auto_Keyword_Main()
{

    Useful* useful = new Useful();

    // for loop without using the "auto" keyword
    for(std::vector<int>::const_iterator iter = useful->numbers.begin(); iter!=useful->numbers.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

    // the same for loop using the "auto" keyword
    for(auto iter = useful->numbers.begin(); iter!=useful->numbers.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

}