#include <iostream>
#include "Strassen.h"
#include "HelpFunctions.h"

int main() {
    int size = 4096;
    double** A = createMatrix(size);
    double** B = createMatrix(size);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j ++){
            A[i][j] = drand48();
            B[i][j] = drand48();
        }
    }
//    printMatrx(A, size);
//    printMatrx(B, size);
    time_t begin = time(0);
    double ** res = strassenProduct(size , A, B);
    time_t end = time(0);
    std::cout<<"\n\n---------------------------------------------\n\nTime: " << difftime(end, begin);
//    printMatrx(res, size);
    return 0;
}

/**
 * Результаты экспериментов:
 * size = 2048. С рекурсией (n >= 128 - умножение Страссеном) - заблокировано системой. 783 потока Виртуальная память - 6,2 GB OOM?
 * size = 2048. С рекурсией (n >= 256 - умножение Страссеном) - 14 секунды
 * size = 2048. С рекурсией (n >= 512 - умножение Страссеном) - 18 секунды
 * size = 2048. С рекурсией (n >= 1024 - умножение Страссеном) - 33 секунды
 * size = 2048. Без рекурсии: 73 секунды
 * */
