#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fileread.h"
void get_name(const char *line, char* name) //从每行信息中截取名字
{
    int i = 0;
    memset(name, 0, 30);
    for(i = 0; line[i] != '\0'; i++)
    {
        if(line[i] == ',')
        {
            name[i] = '\0';
            break;
        }
        name[i] = line[i];
    }
}
PNode read_file(const char *filename, PNode head) //从文件中读取数据并建立出链表
{
    FILE* fin = NULL;
    char line[100] = {0};
    char name[30] = {0};

    fin = fopen(filename, "rt");
    if(fin == NULL)
   0 {
        printf("%s 文件打开失败!\n", filename);
        return NULL;
    }
     while(!feof(fin))
    {
        fscanf(fin, "%s", line);
        get_name(line, name);
        printf("name: %s\n", name);
        memset(line, 0, 100);
    }
     return NULL;
}