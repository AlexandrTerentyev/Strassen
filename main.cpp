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
    std::future <double**> resT1, resT2, resT3, resT4, resT5, resT6, resT7, resT8, resT9, resT10,
    resS1, resS2, resS3, resS4, resS5, resS6, resS7,
    resT11, resT12, resT13, resT14, resT15, resT16, resT17, resT18;
    std::mutex changeCountMutex;
    int threadsCount = 10;
    std::mutex groupExecuted;
    groupExecuted.lock();
    resT1 = std::async(T1, A, size);
    resT2 = std::async(T2, B, size);
    resT3 = std::async(T3, A, size);
    resT4 = std::async(T4, B, size);
    resT5 = std::async(T5, B, size);
    resT6 = std::async(T6, A, size);
    resT7 = std::async(T7, A, size);
    resT8 = std::async(T8, B, size);
    resT9 = std::async(T9, A, size);
    resT10 = std::async(T10, B, size);
    //Group2
    int quarterSize = size/2;
    resS1 = std::async(S1, resT1.get(), resT2.get(), quarterSize);
    resS2 = std::async(S2, resT3.get(), quarter(B,size, 0, 0));
    resS3 = std::async(S3, quarter(A, size, 0, 0), resT4.get(), quarterSize);
    resS4 = std::async(S4, quarter(A, size, 1, 1), resT5.get(), quarterSize);
    resS5 = std::async(S5, resT6.get(), quarter(B, size, 1,1), quarterSize);
    resS6 = std::async(S6, resT7.get(), resT8.get(), quarterSize);
    resS7 = std::async(S7, resT9.get(), resT10.get(), quarterSize);
    //Group3
    double** s1 = resS1.get();
    double** s2 = resS2.get();
    double ** s3 = resS3.get();
    double** s4 = resS4.get();
    double** s5 = resS5.get();
    resT11 = std::async(T11, s1, s4, quarterSize);
    resT12 = std::async(T12, s2, s4, quarterSize);
    resT13 = std::async(T13, s3, resS6.get(), quarterSize);
    resT14 = std::async(T14,  resS7.get(), s5, quarterSize);
    resT16 = std::async(T16, s3, s5, quarterSize);
    resT17 = std::async(T17, s1, s2, quarterSize);
    //group4
    resT15 = std::async(T15, resT11.get(), resT14.get(), quarterSize);
    resT18 = std::async(T18, resT13.get(), resT17.get(), quarterSize);
    double ** t16 = resT16.get();
    double ** t12 = resT12.get();
    double ** t15 = resT15.get();
    double ** t18 = resT18.get();
    double res [size][size];
    for (int i = 0; i < quarterSize; i++){
        for (int j =0; j < quarterSize; j ++){
            res [i][j] = t15[i][j];
            res [i+quarterSize] [j] = t12[i][j];
            res [i][j+quarterSize] = t16[i][j];
            res [i+quarterSize][j+quarterSize] = t18[i][j];
        }
    }
    return static_cast<double **>(res);
}

