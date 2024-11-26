#include <stdio.h>
#include<stdlib.h>
int main(){

char path[100],com[200],t;
while(1){
printf("1-Copy file. 2-Move File.\n");
int c;
scanf("%d",&c);
t=getchar();

switch(c){

case 1:strcpy(com,"cp ");
printf("Enter the path and destination of the file\n");
gets(path);
strcat (com, path);
system(com);
exit(0);

case 2:strcpy(com,"mv ");
printf("Enter the path and destination of the file\n");
gets(path);
strcat (com, path);
system(com);
exit(0);
 
default:printf("error");}
}}