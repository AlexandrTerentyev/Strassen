//
// Created by Aleksandr Terentev on 02.12.17.
//

#include <iostream>
#include "Strassen.h"
#include "HelpFunctions.h"

const int STRASSEN_RECURSION_MATRIX_SIZE_TRESHOLD = 1024;
const bool ALLOW_RECURSION = true;

double** add (int size, double** A, double** B){
    double** C = createMatrix(size);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = A[i][j] + B [i][j];
        }
    }
    return C;
}

double ** product (int size, double** A, double** B){
    if (ALLOW_RECURSION && size >= STRASSEN_RECURSION_MATRIX_SIZE_TRESHOLD){
        return strassenProduct(size, A, B);
    }else{
        double** C = createMatrix(size);
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                double sum = 0.0;
                for (int z = 0; z < size; z++){
                    sum += A[i][z] * B [z][j];
                }
                C[i][j] = sum;
            }
        }
        return C;
    }
}

double** diff (int size, double** A, double** B){
    double** C = createMatrix(size);
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = A[i][j] - B [i][j];
        }
    }
    return C;
}

double quarter(double **A, int size, int blockRow, int blockCol, int i, int j){
    return A [blockRow*size/2 + i][blockCol*size/2 + j];
}

double** quarter(double **A, int size, int blockRow, int blockCol){
    double** C = createMatrix(size/2);
    for (int i = 0; i < size/2; i ++){
        for (int j = 0; j < size/2; j++){
            C[i][j] = A [i + size/2*blockRow] [j + size/2 * blockCol];
        }
    }
    return C;
}

double** addQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double** C = createMatrix(size/2);
    for (int i = 0; i < size/2; i++){
        for (int j = 0; j < size/2; j++){
            C[i][j] = quarter(A, size, blockRowA, blockColA, i, j) + quarter(B, size, blockRowB, blockColB, i, j);
        }
    }
    return C;
}

double** diffQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double** C = createMatrix(size/2);
    for (int i = 0; i < size/2; i++){
        for (int j = 0; j < size/2; j++){
            C[i][j] = quarter(A, size, blockRowA, blockColA, i, j) - quarter(B, size, blockRowB, blockColB, i, j);
        }
    }
    return C;
}


double** productQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double** C = createMatrix(size/2);
    for (int i = 0; i < size/2; i++){
        for (int j = 0; j < size/2; j++){
            double sum = 0.0;
            for (int z = 0; z < size/2; z++){
                sum += quarter(A, size, blockRowA, blockColA, i, z) + quarter(B, size, blockRowB, blockColB, z, j);
            }
            C[i][j] = sum;
        }
    }
    return C;
}

double** T1 (double** A, int size){
    double**res = addQuarters(size, A, 0, 0, A, 1, 1);
    log("T1 complete");
    return res;
}

double** T2 (double** B, int size){
    double** res = addQuarters(size, B, 0, 0, B, 1, 1);
    log("T2 complete");
    return res;
}

double** T3 (double** A, int size){
    double** res = addQuarters(size, A, 1, 0, A, 1, 1);
    log("T3 complete");
    return res;
}

double** T4 (double** B, int size){
    double**res = diffQuarters(size, B, 0, 1, B, 1, 1);
    log("T4 complete");
    return res;
}

double** T5 (double** B, int size){
    double**res = diffQuarters(size, B, 1, 0, B, 0, 0);
    log("T5 complete");
    return res;
}

double** T6 (double** A, int size){
    double** res = addQuarters(size, A, 0, 0, A, 0, 1);
    log("T6 complete");
    return res;
}

double** T7 (double** A, int size){
    double** res = diffQuarters(size, A, 1, 0, A, 0, 0);
    log("T7 complete");
    return res;
}

double** T8 (double** B, int size){
    double** res = addQuarters(size, B, 0, 0, B, 0, 1);
    log("T8 complete");
    return res;
}

double** T9 (double** A, int size){
    double **res = diffQuarters(size, A, 0, 1, A, 1, 1);
    log("T9 complete");
    return res;
}

double** T10 (double** B, int size){
    double ** res = addQuarters(size, B, 1, 0, B, 1, 1);
    log("T10 complete");
    return res;
}

double** S1 (double** T1, double** T2, int size){
    double **res = product(size, T1, T2);
    log("S1 complete");
    return res;
}

double** S2 (double** T3, double** B00, int size){
    double**res = product(size, T3, B00);
    log("S2 complete");
    return res;
}

double** S3 (double** A00, double** T4, int size){
    double**res = product(size, A00, T4);
    log("S3 complete");
    return res;
}

double** S4 (double** A11, double** T5, int size){
    double **res =  product(size, A11, T5);
    log("S4 complete");
    return res;
}

double** S5 (double** T6, double** B11, int size){
    double** res = product(size, T6, B11);
    log("S5 complete");
    return res;
}

double** S6 (double** T7, double** T8, int size){
    double** res = product(size, T7, T8);
    log("S6 complete");
    return res;
}

double** S7 (double** T9, double** T10, int size){
    double** res = product(size, T9, T10);
    log("S7 complete");
    return res;
}

double** T11 (double** S1, double** S4, int size){
    double** res = add(size, S1, S4);
    log("T11 complete");
    return res;
}

double** T12 (double** S2, double** S4, int size){
    double** res = add(size, S2, S4);
    log("T12 complete");
    return res;
}

double** T13 (double** S3, double** S6, int size){
    double** res = add(size, S3, S6);
    log("T13 complete");
    return res;
}

double** T14 (double** S7, double** S5, int size){
    double** res = diff(size, S7, S5);
    log("T14 complete");
    return res;
}

double** T16 (double** S3, double** S5, int size){
    double** res = add(size, S3, S5);
    log("T16 complete");
    return res;
}

double** T17 (double** S1, double** S2, int size){
    double **res = diff(size, S1, S2);
    log("T17 complete");
    return res;
}

double** T15 (double** T11, double** T14, int size){
    double** res = add(size, T11, T14);
    log("T15 complete");
    return res;
}

double** T18 (double** T13, double** T17, int size){
    double ** res = add(size, T13, T17);
    log("T18 complete");
    return res;
}
