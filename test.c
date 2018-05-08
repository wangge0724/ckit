#include <stdio.h>
#include "ckit.h"


typedef struct Student{
    const char *name;
    int age;
} Student;


int main(int argc, const char **argv){
    Student stu[100];

    (void)stu;
    printf("array-size of stu = %d:\r\n", ARRAY_SIZE(stu));
    fgetc(stdin);
    
    printf("do systemf:\r\n");
    fgetc(stdin);
    systemf("echo %d > ./tmp.txt", 1);
    
    printf("do fappend:\r\n");
    fgetc(stdin);
    fappend("./tmp.txt", "hello %s\r\n", __func__);

    printf("do strcmp_nonull:");
    fgetc(stdin);
    printf("echo 0........%d\r\n", strcmp_nonull("hello...","hello"));
    
    return EXIT_SUCCESS;
}
