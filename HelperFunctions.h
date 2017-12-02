//
// Created by Aleksandr Terentev on 02.12.17.
//

#ifndef STRASSEN_HELPERFUNCTIONS_H
#define STRASSEN_HELPERFUNCTIONS_H
//
// Created by Aleksandr Terentev on 02.12.17.
//

double** createMatrix (int size);
void printMatrx (double** A, int size);
double** add (int size, double** A, double** B);
double** diff (int size, double** A, double** B);
double ** product (int size, double** A, double** B);
double quarter(double **A, int size, int blockRow, int blockCol, int i, int j);
double** quarter(double **A, int size, int blockRow, int blockCol);
double** addQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB);
double** diffQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB);
double** productQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB);
double** T1 (double** A, int size);
double** T2 (double** B, int size);
double** T3 (double** A, int size);
double** T4 (double** B, int size);
double** T5 (double** B, int size);
double** T6 (double** A, int size);
double** T7 (double** A, int size);
double** T8 (double** B, int size);
double** T9 (double** A, int size);
double** T10 (double** B, int size);
double** S1 (double** T1, double** T2, int size);
double** S2 (double** T3, double** B00, int size);
double** S3 (double** A00, double** T4, int size);
double** S4 (double** A11, double** T5, int size);
double** S5 (double** T6, double** B11, int size);
double** S6 (double** T7, double** T8, int size);
double** S7 (double** T9, double** T10, int size);
double** T11 (double** S1, double** S4, int size);
double** T12 (double** S2, double** S4, int size);
double** T13 (double** S3, double** S6, int size);
double** T14 (double** S7, double** S5, int size);
double** T15 (double** T11, double** T14, int size);
double** T16 (double** S3, double** S5, int size);
double** T17 (double** S1, double** S2, int size);
double** T18 (double** T13, double** T17, int size);

#endif //STRASSEN_HELPERFUNCTIONS_H
