/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 06/09/2022
 * Description          : Smart pointers demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * Smart pointers are wrappers or containers of pointers.
 * They have the advantage of de-allocating memory automatically, so you don't have
 * to worry about memory leak in your program.
 *
 * There are 3 types of smart pointers in CPP:
 *          1- Unique pointer
 *          2- Shared pointer
 *          3- Weak pointer
 */

#include "Smart_Pointers.h"
using namespace std;

void Smart_Pointers::Unique_Pointers_Main()
{
    //create a smart unique pointer
    int value = 25;
    unique_ptr<int> unPtr = make_unique<int>(value);
    cout << "unPtr = " << &value << " ----> "<< "*unPtr = "  << *unPtr << endl;

    // unique pointers cannot share an address
    // let's create a second unique pointer
    // the next statement gives a compile time error
    // unique_ptr<int> unPtr2 = unPtr;

    // let's move the address from unPtr1 to unPtr2
    unique_ptr<int> unPtr2 = move(unPtr);
    cout << "unPtr2 = " << &value << " ----> "<< "*unPtr2 = "  << *unPtr2 << endl;

    // a smart unique pointer is automatically deleted at the end of the scode,
    // so we don't have to worry about memory leaks. Let's demonstrate this


    // now after moving the value, let's try to show dereference unPtr
    // the next statement gives a segmentation fault, unPtr points to a null ptr now
    // cout << "unPtr = " << &value << " ----> "<< "*unPtr = "  << *unPtr << endl;

    {
        // a new scope
        unique_ptr<My_Class> myClassUnPtr = make_unique<My_Class>();
        // at the end of this scope, the destructor is invoked
    }
}

void Smart_Pointers::Shared_Pointers_Main()
{
    // Shared pointers can be used to assign the same raw pointers to different owners,
    // let's demonstrate how that works

    // let's create a shared pointer
    shared_ptr<My_Class> myClassShPtr = make_shared<My_Class>();
    // show the number of owners of the shared pointer
    cout << "Shared count = " << myClassShPtr.use_count() << endl;
    // crate another owner
    shared_ptr<My_Class> myClassPtr2 = myClassShPtr;
    // now we should have 2 owners, let's verify
    cout << "Shared count = " << myClassShPtr.use_count() << endl;

    //at the end of this scope, the memory location pointed by the two pointers
    // is deallocated (similar to calling delete)

}

void Smart_Pointers::Weak_Pointers_Main()
{
    // Weak pointers used to observe objects in memory. They don't keep the object alive
    // when it's not used.

    //let's create a Weak pointer
    weak_ptr<My_Class> myClassW;

    {
        // let's create a shared pointer in this scope
        shared_ptr<My_Class> myClassSh = make_shared<My_Class>();
        myClassW = myClassSh;
    }
    //although the scope of myClassW is not done yet, the memory pointed by myClassSh is deallocated
    // because myClassW is only an observer

}


