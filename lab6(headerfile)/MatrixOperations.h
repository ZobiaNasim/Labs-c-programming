#ifndef MATRIXOPERATIONS_H_INCLUDED
#define MATRIXOPERATIONS_H_INCLUDED
//Q3
//Develop a header file that defines functions for matrix operations, such as matrix
//addition, multiplication, transposition, and determinant calculation. Implement these
//functions and use them to work with matrices in a program.
// Define a structure for a matrix
typedef struct {
    int rows;
    int cols;
    double** data;
} Matrix;

// Function to create a matrix
Matrix createMatrix(int rows, int cols);

// Function to free the memory allocated for a matrix
void freeMatrix(Matrix mat);

// Function to print a matrix
void printMatrix(Matrix mat);

// Function to add two matrices
Matrix addMatrices(Matrix mat1, Matrix mat2);

// Function to multiply two matrices
Matrix multiplyMatrices(Matrix mat1, Matrix mat2);

// Function to transpose a matrix
Matrix transposeMatrix(Matrix mat);

// Function to calculate the determinant of a matrix
double determinantMatrix(Matrix mat);



#endif // MATRIXOPERATIONS_H_INCLUDED
