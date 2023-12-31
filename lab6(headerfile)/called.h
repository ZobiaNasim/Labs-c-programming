#ifndef CALLED_H_INCLUDED
#define CALLED_H_INCLUDED
#include <string.h>


#endif // CALLED_H_INCLUDED
//Q1
//Create a header file called that provides functions for reading and writing files. Define
//functions for reading text from a file, writing text to a file, and checking file existence.
//Implement these functions in a source file and use them in a program.
void write_in_file(filename){
FILE*file;
char write[100];
file=fopen(filename,"w");
printf("enter the string you want to write in a file\n");
scanf("%s",write);
for (int i=0;i!=strlen(write);i++){
fputc(write[i],file);}
fclose(file);}
void read_file(filename){
    FILE *file1;
    char buffer;
    file1 = fopen(filename, "r");
    if (file1 == NULL) {
        printf("Unable to open the file.\n");
        return;
    }
    while ((buffer = fgetc(file1)) != EOF) {
        printf("%c", buffer);
    }
fclose(file1);}

