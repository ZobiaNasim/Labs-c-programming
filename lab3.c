#include <stdio.h>
//Q5 : function
void displayMatrix(int *matrix, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", *(matrix + i * columns + j));
        }
        printf("\n");
    }
}
void addMatrices(int *mat1, int *mat2, int *result, int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            *(result + i * columns + j) = *(mat1 + i * columns + j) + *(mat2 + i * columns + j);
        }
    }
}
int main(){
Q1 write a program to swap elements using call by reference
int a,b,c;
int *p1=&a,*p2=&b;
printf("enter first num");
scanf("%d",a);
printf("enter second num");
scanf("%d",b);
*p1=c;
*p1=*p2;
*p2=c;
printf("after swapping a=%d \n b=%d",a,b);
return 0;}

Q2:write a c program to print a string i reverse using pointers
char str1[100],str2[100];
char *p1, *p2;
printf("enter the string");
scanf("%s",str1);
p1=str1+strlen(str1)-1;
p2=str2;
while (p1>=str1){
        *p2=*p1;
        p2++;
     p1 --;
}
*p2="\0";
 printf("the reverse string is %s:",str2);
 return 0;
}
Q3: write a cprogram to input and print array using pointers.
int num,val;
int arr[num];
int *p=arr;
printf("enter the number of array you want");
scanf("%d",&num);
for (int i=0;i<num;i++){
 printf("enter the value");
scanf("%d",p);
p++;}
p=arr;
for (int i=0;i<num;i++){
printf(" %d",*p);
p++;
}
return 0;}
Q4: write a c program to search an element in any array using pointer
int a[50] ,*pt,num,i,search,f=0;
printf("enter the number of elements you want in array");
scanf("%d",&num);
for ( i=0;i<num;i++){
    printf("enter the number");
    scanf("%d",&a[i]);}
     printf("enter the number you want to search");
    scanf("%d",&search);
    pt=a;
    for (i=0;i<=num;i++){
            if (*pt==search){
           f=1;
            break;
        }
     pt++;
    }
    if (f==1){
            printf("number found",search);
        }
    else {
        printf("no match found");}
    return 0;}
Q5:write a c program to add two matrices using pointer

    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    int rows = 3;
    int columns = 3;

    addMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], rows, columns);

    printf("Matrix 1:\n");
    displayMatrix(&mat1[0][0], rows, columns);

    printf("\nMatrix 2:\n");
    displayMatrix(&mat2[0][0], rows, columns);

    printf("\nResultant Matrix (Sum):\n");
    displayMatrix(&result[0][0], rows, columns);

    return 0;
}



