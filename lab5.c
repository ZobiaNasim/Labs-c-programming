#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* file2;

void add() {
    char name[50];
    char rollnum[50];
    char grade[50];
    printf("enter :\nname \n rollnum\n grade\n");
    scanf("%s", name);
    scanf("%s", rollnum);
    scanf("%s", grade);
    fprintf(file2, "%s %s %s ", name, rollnum, grade);
    fprintf(file2, "\n");
}

void display() {
    char read;
    rewind(file2);
    while (!feof(file2)) {
        read = fgetc(file2);
        printf("%c", read);
    }
}

void del() {
    rewind(file2);
    char target[100];
    printf("enter what you want to delete from a file: ");
    scanf("%s", target);

    FILE* tempfile = fopen("copydatabase.txt", "w");

    if (tempfile == NULL) {
        printf("Unable to open the file");
        return;
    }

    char buffer[1000];

    while (fgets(buffer, sizeof(buffer), file2) != NULL) {
        // Check if the target string is present in the line
        char* found = strstr(buffer, target);

        if (found == NULL) {
            // Write lines without the target string to the temporary file
            fputs(buffer, tempfile);
        }
    }

    fclose(file2);
    fclose(tempfile);

    // Remove the original file
    if (remove("database.txt") != 0) {
        printf("Error removing original file");
        return;
    }

    // Rename the temporary file to the original filename
    if (rename("copydatabase.txt", "database.txt") != 0) {
        printf("Error renaming temporary file");
        return;
    }

    file2 = fopen("database.txt", "a");
}
int main()
{
////1. Write a program to create a new text file and write some text into it. Open the file in
////append mode and add more text to it. Read the contents of the file and display them on
////the console.
//
////write in a file
//FILE*file;
//file=fopen("lab6.txt","w");
//if(file == NULL) {
//printf("Unable to open the file");
//}
//char write[50];
//printf("enter the string you want to write in a file\n");
//scanf("%s",write);
//for (int i=0;i!=strlen(write);i++)
//fputc(write[i],file);
//fclose(file);
////append in a file
//FILE*file1;
//file1=fopen("lab6.txt","a");
//if(file1 == NULL) {
//printf("Unable to open the file");
//}
//char add[50];
//printf("enter the string you want to add in a file\n");
//scanf("%s",add);
//for (int i=0;i!=strlen(add);i++)
//fputc(add[i],file1);
//fclose(file1);
//read a file
//FILE*file1_=NULL;
//char read;
//file1_=fopen("lab6.txt","r");
//if(file1_ == NULL) {
//printf("Unable to open the file");
//}
//while(!feof(file1_))
//   {
//     read=fgetc(file1_);
//     printf("%c",read);
//   }
//fclose(file1_);
//}

//    FILE *file1_ = NULL;
//    char read;
//    int count = 1;
//
//    file1_ = fopen("lab6.txt", "r");
//    if (file1_ == NULL) {
//        printf("Unable to open the file");
//        return 1; // Return an error code to indicate failure
//    }
//
//    while ((read = fgetc(file1_)) != EOF) {
//        if (read == ' ' || read == '\n') {
//            count++;
//        }
//
//        printf("%c", read);
//    }
//
//    fclose(file1_);
//    printf("\nThe total number of words in a file are %d", count);
//
//    return 0;
//}
    file2 = fopen("database.txt", "a");

    if (file2 == NULL) {
        printf("Unable to open the file");
        return 1;
    }
    int choice;
    printf("1.to add in a file\n 2.to delete form a file\n 3.to display the content of a file\n 4 to exit");
    scanf("%d",&choice);
    switch(choice){
case 1:
     add();
     break;
case 2:
     del();
      break;
case 3:
    display();
     break;
case 4:
    return;
default:
            printf("Invalid choice\n");
            break;
       fclose(file2); }
    return 0;
}

