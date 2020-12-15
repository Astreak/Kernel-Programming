#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

char *random_func(char* a,int n){
  if(n>=-128 && n<=127)
    printf("k");
  return a;

}
int main(int argc,char**argv){
  int ppid,pid;
  pid=getpid();
  ppid=getppid();
  printf("Process Id: %d\n",pid);
  printf("Parent Process Id: %d\n",ppid);
  printf("%s",random_func("asd",23));

}
