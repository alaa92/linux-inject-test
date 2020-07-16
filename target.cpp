#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    while(true)
    {
        std::cout << "Sleeping..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    return 0;
}