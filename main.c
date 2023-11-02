#include<stdio.h>
lab1
FUNCTIONS:
    Q4 FUNCTION:
void decimaltobinary(int decimal){
if (decimal>0){
    decimaltobinary(decimal/2);
    printf("%d",decimal%2);
}
}
(Q5)FUNCTION:
void fibbonaci(int num);
void fibbonaci(int num){
    int a=0, b=1,c,i;
    printf("Fibonacci series...\n");
        printf("%d\n%d\n",a,b);
    for (i=3;i<=num;i++){
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;



Q1:(write a c program that accepts an employee id , total worked hours in a month and the amount recieved per hour. print the id and salary of employee for a particulr month)
int main(){
 int emp_id;
 float w_hourpermonth;
 float sal_perhour;
 printf("enter the employee id:\n");
 scanf("%d",&emp_id);
 printf("Employee id is: %d",emp_id);
 printf("\n enter the worked hours per month:\n");
 scanf("%f",&w_hourpermonth);
 printf("worked hours per month is: %f",w_hourpermonth);
 printf("\nenter the salary per hour:\n");
 scanf("%f",&sal_perhour);
 printf("\nsalary per hour is: %f",sal_perhour);
 printf("\nthe salary of employee per month is: %.2f",w_hourpermonth*sal_perhour);


Q2(write a c program that takes height and width of a rectangle as an input from user and compute the perimeter and area of rectangle)
 int width;
  int height;
  printf("enter the width of rectangle\n");
  scanf("%d",&width);
  printf("the width of rectangle is %d",width);
  printf("enter the height of rectangle\n");
  scanf("%d",&height);
  printf("the height of rectangle is %d",height);
  printf("the perimeter of rectangle is: %d",2*(width+height));
  printf("the area of rectangle is: %d",height*width);

Q3(write a c program to accept height of person in cm and categorize the person according to his height....)

int height;
printf("enter your height in centimeters\n");
scanf("%d",&height);
printf("the height is:",height);
if (height<150) {
    printf("dwarf");
}else if (height=150){
printf("average");
}else if (height>=165){
printf("tall");}

Q4(write a c program that converts decimal number into binary)
void decimaltobinary(int decimal){
if (decimal>0){
    decimaltobinary(decimal/2);
    printf("%d",decimal%2);
}
}
int decimal;
printf("enter a decimal number");
scanf("%d",&decimal);
printf("binary representation ");
    decimaltobinary(decimal);
    return 0;

Q5:(write a coe to print fibbonacci series)
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
  fibbonaci(n);
  return 0;
