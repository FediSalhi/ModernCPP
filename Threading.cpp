/************************************************************************************
 * Author               : Fedi Salhi <fadi.salhi@outlook.fr>
 * Creation Date        : 13/09/2022
 * Description          : Threading demo
 *
 * Revision No          : R000
 * Revision Date        :
 * Revision Description :
 *************************************************************************************/

/* Definition:
 * Modern CPP gave the possibility to use threads without using platform specific thread libraries
 * This is good for code portability
 */

#include "Threading.h"

using namespace std::chrono_literals;

void Threading::Threading_Main()
{
    std::thread my_thread([] {

        while(true)
        {
            std::cout << "My thread is running" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            //std::this_thread::sleep_for(1000ms);
        }
    });

    // C++11 also introduced mutex to protect critical sections (shared resource)

    int i = 0;
    std::mutex my_mutex;
    int shared_resource = 0;

    std::thread incrementer([&my_mutex, &shared_resource] {
       for(auto i = 0; i<10; i++)
       {
           my_mutex.lock();
           shared_resource++;
           my_mutex.unlock();
       }
    });

    std::thread decrementer([&my_mutex, &shared_resource] {
        for(auto i = 0; i<10; i++)
        {
            my_mutex.lock();
            shared_resource--;
            my_mutex.unlock();
        }
    });

    incrementer.join();
    decrementer.join();

    // Modern C++ introduced RAII (Resource Acquisition Is Initialization) techniques to make sure
    // that a lock is not forgotten

    {
        std::unique_lock<std::mutex> loc{my_mutex};

        loc.lock();

        // the lock will be unlocked by the end of this scope
    }

}
