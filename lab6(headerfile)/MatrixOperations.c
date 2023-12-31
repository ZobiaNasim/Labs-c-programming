//Q3:
//Develop a header file that defines functions for matrix operations, such as matrix
//addition, multiplication, transposition, and determinant calculation. Implement these
//functions and use them to work with matrices in a program
// MatrixOperations.c

#include <stdio.h>
#include <stdlib.h>
#include "MatrixOperations.h"

Matrix createMatrix(int rows, int cols) {
    Matrix mat;
    mat.rows = rows;
    mat.cols = cols;

    mat.data = (double**)malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++) {
        mat.data[i] = (double*)malloc(cols * sizeof(double));
    }

    return mat;
}

void freeMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        free(mat.data[i]);
    }
    free(mat.data);
}

void printMatrix(Matrix mat) {
    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.cols; j++) {
            printf("%f\t", mat.data[i][j]);
        }
        printf("\n");
    }
}

Matrix addMatrices(Matrix mat1, Matrix mat2) {
    Matrix result = createMatrix(mat1.rows, mat1.cols);

    for (int i = 0; i < mat1.rows; i++) {
        for (int j = 0; j < mat1.cols; j++) {
            result.data[i][j] = mat1.data[i][j] + mat2.data[i][j];
        }
    }

    return result;
}

Matrix multiplyMatrices(Matrix mat1, Matrix mat2) {
    if (mat1.cols != mat2.rows) {
        fprintf(stderr, "Error: Incompatible matrices for multiplication.\n");
        exit(EXIT_FAILURE);
    }

    Matrix result = createMatrix(mat1.rows, mat2.cols);

    for (int i = 0; i < mat1.rows; i++) {
        for (int j = 0; j < mat2.cols; j++) {
            result.data[i][j] = 0;

            for (int k = 0; k < mat1.cols; k++) {
                result.data[i][j] += mat1.data[i][k] * mat2.data[k][j];
            }
        }
    }

    return result;
}

Matrix transposeMatrix(Matrix mat) {
    Matrix result = createMatrix(mat.cols, mat.rows);

    for (int i = 0; i < mat.rows; i++) {
        for (int j = 0; j < mat.cols; j++) {
            result.data[j][i] = mat.data[i][j];
        }
    }

    return result;
}

double determinantMatrix(Matrix mat) {
   if (mat.rows != mat.cols) {
        fprintf(stderr, "Error: Determinant calculation is only defined for square matrices.\n");
        exit(EXIT_FAILURE);
    }

    if (mat.rows == 2 && mat.cols == 2) {
        // Determinant of a 2x2 matrix: ad - bc
        return mat.data[0][0] * mat.data[1][1] - mat.data[0][1] * mat.data[1][0];
    } else if (mat.rows == 3 && mat.cols == 3) {
        // Determinant of a 3x3 matrix: a(ei - fh) - b(di - fg) + c(dh - eg)
        return mat.data[0][0] * (mat.data[1][1] * mat.data[2][2] - mat.data[1][2] * mat.data[2][1])
            - mat.data[0][1] * (mat.data[1][0] * mat.data[2][2] - mat.data[1][2] * mat.data[2][0])
            + mat.data[0][2] * (mat.data[1][0] * mat.data[2][1] - mat.data[1][1] * mat.data[2][0]);
    } else {
        fprintf(stderr, "Error: Determinant calculation for matrices larger than 3x3 is not implemented.\n");
        exit(EXIT_FAILURE);
    }
}
