#include <iostream>
#include <thread>
#include <future>
#include "HelperFunctions.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

const int THREADS_NUM = 4;

double** strassenProduct (int size, double** A, double** B){
    std::thread firstGroupThreads[10];
    std::future resT1, resT2, resT3, resT4, resT5, resT6, resT7, resT8, resT9, resT10;
    firstGroupThreads[0] = std::thread(T1, A, size);
    firstGroupThreads[1] = std::thread(T2, B, size);
    firstGroupThreads[2] = std::thread(T3,A, size);
}

