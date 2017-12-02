//
// Created by Aleksandr Terentev on 02.12.17.
//


double** add (int size, double** A, double** B){
    double C [size][size];
    C = new double [size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = A[i][j] + B [i][j];
        }
    }
}

double ** product (int size, double** A, double** B){
    double C [size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            double sum = 0.0;
            for (int z = 0; z < size; z++){
                sum += A[i][z] + B [z][j];
            }
            C[i][j] = sum;
        }
    }
    return C;
}

double** diff (int size, double** A, double** B){
    double C [size][size];
    C = new double [size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = A[i][j] - B [i][j];
        }
    }
}

double quarter(double **A, int size, int blockRow, int blockCol, int i, int j){
    return A [blockRow*size/2 + i][blockCol*size/2];
}

double** quarter(double **A, int size, int blockRow, int blockCol){
    double C [size/2][size/2];
    for (int i = 0; i < size/2; i ++){
        for (int j = 0; j < size/2; j++){
            C[i][j] = A [i + size/2*blockRow] [j + size/2 * blockCol];
        }
    }
    return C;
}

double** addQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double C [size/2][size/2];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = quarter(A, size, blockRowA, blockColA, i, j) + quarter(B, size, blockRowB, blockColB, i, j);
        }
    }
    return C;
}

double** diffQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double C [size/2][size/2];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            C[i][j] = quarter(A, size, blockRowA, blockColA, i, j) - quarter(B, size, blockRowB, blockColB, i, j);
        }
    }
    return C;
}


double** productQuarters (int size, double** A, int blockRowA, int blockColA, double** B, int blockRowB, int blockColB){
    double **C = new double [size/2][size/2];
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
    return addQuarters(size, A, 0, 0, A, 1, 1);
}

double** T2 (double** B, int size){
    return addQuarters(size, B, 0, 0, B, 1, 1);
}

double** T3 (double** A, int size){
    return addQuarters(size, A, 1, 0, A, 1, 1);
}

double** T4 (double** B, int size){
    return diffQuarters(size, B, 0, 1, B, 1, 1);
}

double** T5 (double** B, int size){
    return diffQuarters(size, B, 1, 0, B, 0, 0);
}

double** T6 (double** A, int size){
    return addQuarters(size, A, 0, 0, A, 0, 1);
}

double** T7 (double** A, int size){
    return diffQuarters(size, A, 1, 0, A, 0, 0);
}

double** T8 (double** B, int size){
    return addQuarters(size, B, 0, 0, B, 0, 1);
}

double** T9 (double** A, int size){
    return diffQuarters(size, A, 0, 1, A, 1, 1);
}

double** T10 (double** B, int size){
    return addQuarters(size, B, 1, 0, B, 1, 1);
}

double** S1 (double** T1, double** T2, int size){
    return product(size, T1, T2);
}

double** S2 (double** T3, double** B00, int size){
    return product(size, T3, B00);
}

double** S3 (double** A00, double** T4, int size){
    return product(size, A00, T4);
}

double** S4 (double** A11, double** T5, int size){
    return product(size, A11, T5);
}

double** S5 (double** T6, double** B11, int size){
    return product(size, T6, B11);
}

double** S6 (double** T7, double** T8, int size){
    return product(size, T7, T8);
}

double** S7 (double** T9, double** T10, int size){
    return product(size, T9, T10);
}

double** T11 (double** S1, double** S4, int size){
    return add(size, S1, S4);
}

double** T12 (double** S2, double** S4, int size){
    return add(size, S2, S4);
}

double** T13 (double** S3, double** S6, int size){
    return add(size, S3, S6);
}

double** T14 (double** S7, double** S5, int size){
    return diff(size, S7, S5);
}

double** T15 (double** T11, double** T14, int size){
    return add(size, T11, T14);
}

double** T16 (double** S3, double** S5, int size){
    return add(size, S3, S5);
}

double** T17 (double** S1, double** S2, int size){
    return diff(size, S1, S2);
}

double** T18 (double** T13, double** T17, int size){
    return add(size, T13, T17);
}
