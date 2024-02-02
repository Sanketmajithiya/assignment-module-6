//Q.11.Write a program to read and write data from the file.
#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;
  fp= fopen("test.txt","w");
  fprintf(fp,"hello world.");
  fclose(fp);
  char arr[50];
  fp=fopen("test.txt","r");
   while(fscanf(fp,"%s",arr)!=EOF){
    printf(" %s ",arr);
   }
    fclose(fp);
  }