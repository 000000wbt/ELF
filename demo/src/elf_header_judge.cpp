#include "elf_header_judge.h"
#include <stdio.h>
#include <elf.h>

struct shared_object_link_map {
    void *l_addr;
    char *l_name;
    void *l_ld;
    struct shared_object_link_map *l_next, *l_prev;
};

void elf_header_judge(void* handle){
    struct shared_object_link_map* elf_images_link_map;
    printf("judge secceeded\n");
    elf_images_link_map = (struct shared_object_link_map*) handle;
    char* x;
    x = (char *)elf_images_link_map->l_addr;
    if('E' == *(x + 1) && 'L' == *(x + 2) && 'F' == *(x + 3))
        printf("Is ELF_file\n");
    else
	printf("Not ELF_file\n");
    return ;
}
