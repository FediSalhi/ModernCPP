/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 09/09/2022
 * Description          : Initialization in class declaration demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * In Pre-C++11, all members should be initialized inside the constructor
 * C++11 introduced initialization int the class declaration
 */


#include "Initialization_In_Class_Declaration.h"

Pre11_Init::Pre11_Init() : m_x(0), m_y(0)
{
    std::cout  << "Init inside the constructor" << std::endl;
}

Modern_Init::Modern_Init()
{
    std::cout << "the constructor doesn't initialize members" << std::endl;
}

void Initialization_In_Class_Declaration::Initialization_In_Class_Declaration_Main()
{
    std::unique_ptr<Pre11_Init> pre11_ptr = std::make_unique<Pre11_Init>();
    std::unique_ptr<Modern_Init> modern_ptr = std::make_unique<Modern_Init>();
}