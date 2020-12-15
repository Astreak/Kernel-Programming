#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<thread.h>

#define ll long long
typedef int* point;

struct Number{
  int num1;
  int num2;
  
};


int main(int argc,char** argv){
  FILE *fpt;
  fpt=fopen("A.bin","rb");
  struct Number num;
  if(fpt==NULL){
    printf("\e[1;31mError in writing bytes \e[0m");
    exit(1);
  }
  fread(&num,sizeof(struct Number),1,fpt);
  printf("%d %d\n",num.num1,num.num2);
  
  fclose(fpt);
  
  
}
