#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void write_file(const char *filename, PNode head) //将单链表数据写入文件中
{
    FILE* fout = NULL;
    PNode htemp;

    if(head == NULL)
    {
        printf("链表为空!\n");
        return;
    }

    fout = fopen(filename, "wt");
    if(fout == NULL)
    {
        printf("%s 文件打开失败!\n", filename);
        return;
    }
    htemp = head;
    while(htemp)
    {
        fprintf(fout, "%s,%d\n", htemp->_data.name, htemp->_data.totalcount);
        htemp = htemp->_PNext;
    }

    return;
}