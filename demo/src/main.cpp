#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>
#include <iostream>
//#include "elf_runtime_query_symbol_offset.h"
#include "elf_header_judge.h"
using namespace std;
int main(){
   // elf_runtime_query_symbol_offset("test");
    void *x;
    const char *filename;
    filename = "/home/aa/Desktop/demo/src/x.so";
    x = dlopen(filename, RTLD_LAZY);
    if(x == NULL){
        fprintf(stderr,"%s\n",dlerror());
        exit(-1);
    }
    printf("ELF_judge_test:\n");
    elf_header_judge(x);
    return 0;
}
