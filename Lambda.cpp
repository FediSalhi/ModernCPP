/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 14/09/2022
 * Description          : Lambda demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * Lambda expression is a new feature in modern C++ used for inline anonymous functions
 * inline functions are a small snippet of code that is directly inserted where we want
 * to call the function instead of defining the function in other place, then call it.
 * Lambda functions are used for small code that will not be called a lot of times and
 * is not worth writing in a separate normal function.
 * Lambda functions are written in this way:
 *              [capture clause](parameters){definition}
 * Where:
 *              [capture clause] --> variables captures from the function scope
 *              (parameters)     --> function parameters
 *              {definition}     --> function definition
 */


#include "Lambda.h"

void Lambda::Lambda_Main()
{
    // example of a lambda expression
    //[](int x){std::cout << x << std::endl;}
    // let's insert this code in a for_each call

    std::vector<int> v = {1,2,3,4};

    std::for_each(v.begin(), v.end(), [](int x){
        std::cout << x << std::endl;
    });

    // another example, where the "sum" variable is captured in the capture clause of the lambda expression
    int sum = 0;
    std::for_each(v.begin(), v.end(), [&sum](int x){
        sum+= x;
    });

    std::cout << "The sum is " << sum << std::endl;
};
