#include <iostream>
#include "Strassen.h"
#include "HelpFunctions.h"

int main() {
    int size = 2048;
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
