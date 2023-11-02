#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
LAB 2
Q6(structure)
struc Distance{
int feet;
int inch;
};
Q1
int main(){
 int num;
 int sum=0;
 int i=0;
  printf("enter the amount of odd number you want");
  scanf("%d",&num);
  for (i=0;i<=2*num;i++){
    if (i%2!=0){
        printf("%d",i);
        sum=sum+i;}}
while (i<=2*num){
    if (i%2!=0){
        printf("%d",i);
        sum=sum+i;
     }i++;
}
do{
        if (i%2!=0){
        printf("%d",i);
        sum=sum+i;
     }i++;

}while(i<=2*num);

printf("\n sum of odd numbers is %d",sum);
return 0;
 Q2
    int num,i,j,k;

    printf("enter the number of rows you want ");
    scanf("%d",num);
for (int i=1;i<=num;i++){

for (j=num;j>i;j--){


    printf(" ");}

for (k=1;k<=i;k++){
    printf("* ");}
printf("\n");}

Q3
    char str1[20],str2[20];
    int i,common=0;
    printf("Enter the first string\n");
    scanf("%s",&str1);
    printf("enter the second string");
    scanf("%s",&str2);
    for (i=0;str1[i]!="\0" ||str2[i]!="\0";i++){
       if  (str1[i]=str2[i]){
        common=common+1;}
    }if (common==strlen(str1) && common==strlen(str2)){
    printf("strings are same");}
    else{
        printf("strings are not same");
    }
Q4
char str[20];
printf("enter any string");
scanf("%s",&str);
for (int i=0;str[i]!="\0";i++){
    if(isupper(str[i])){
        str[i]=tolower(str[i]);
    }
    else{
        str[i]=toupper(str[i]);
    }
}
printf("the new string is %s\n",str)
Q5:
int n;
printf("how many number in an array you want");
scanf("%d",&n);
int arr[n];
printf("enter elements of array \n");
for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for (int j=0 ;j<n;j++){
    int isunique=1;
    for (int p=0;p<n;p++){
        if(j!=p&& arr[j]==arr[p]){
            isunique=0;
            break;
        }
    }
    if (isunique){
        int duplicate=0;
        for (int k=j+1;k<n;k++){
            if(arr[j]==arr[k]){
                duplicate=1;
                break;
            }
        }
        if (!duplicate){
            printf("%d",arr[j]);
        }
    }
}
return 0;
Q6:
struct Distance distance1, distance2;
printf("enter first distance\n");
printf("feet :");
scanf("%d",&distance1.feet);
printf("inches: ");
scanf("%d",&distance1.inch);
printf("enter second distance\n");
printf("feet :");
scanf("%d",&distance2.feet);
printf("inches: ");
scanf("%d",&distance2.inch);
int result1=distance1.feet+distance2.feet;
int result2=distance1.inch+distance2.inch;
printf("%d\n",result);
printf("%d\n",result2);
return 0;
}







