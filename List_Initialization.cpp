/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 13/09/2022
 * Description          : List Initialization demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * Since C++11 many STL containers support list initialization
 */


#include "List_Initialization.h"

void List_Initialization::List_Initialization_Main() {
    // example of a vector initialization
    std::vector<int> vec = {1, 2, 3};

    // example of a map initialization
    std::map<int, std::string> my_map = {
            {1, "Fedi"},
            {2, "Salhi"}
    };
}
