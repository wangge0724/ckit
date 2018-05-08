/**
 * @brief   some simple tool-kit api in C
 *
 * @author  lycon
 * @github  https://github.com/lk361115629
 * @blog    https://lk361115629.github.io/
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "ckit.h"


/**
 * @brief    call system with format
 * @example  systemf("echo %d > /tmp/tmp.txt", 123);
 */
int systemf(const char *fmt, ...){
    char command[1024];
    va_list ap;
    
    va_start(ap, fmt);
    vsprintf(command, fmt, ap);
    va_end(ap);
    
    return system(command);
}

/**
 * @brief   append formated string into file
 * @example fappend("/tmp/tmp.txt", "%d", 123);
 */
size_t fappend(const char *file, const char *fmt, ...){
    FILE *fp;
    int retv;
    va_list ap;

    va_start(ap, fmt);
    fp = fopen(file, "a");
    if(!fp){
        return 0;
    }
    retv = vfprintf(fp, fmt, ap);
    fclose(fp);

    va_end(ap);
    return (size_t)retv;
}

/**
 * @brief  compare string with no '\0' ending allowed
 */
int strcmp_nonull(const char *target, const char *str){
    return strncmp(target, str, strlen(str));
}

