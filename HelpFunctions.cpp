//
// Created by Aleksandr Terentev on 02.12.17.
//

#include <iostream>

void printMatrx (double** A, int size){
    std::cout<<"\n\n[";
    for (int i = 0; i < size; i++){
        std::cout<<"\n\t";
        for (int j = 0; j < size; j++){
            std::cout<< A[i][j]<<" ";
        }
    }
    std::cout<<"\n]";
}

double** createMatrix (int size){
    double ** res = new double*[size];
    for (int i = 0; i < size; i++){
        res [i] = new double [size];
    }
    return res;
}


std::mutex logMutex;

void log(std::string text){
    logMutex.lock();
    std::cout<<text<<"\n";
    logMutex.unlock();
}
