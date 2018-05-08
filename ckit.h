/**
 * @brief   some simple tool-kit api in C
 *
 * @author  lycon
 * @github  https://github.com/lk361115629
 * @blog    https://lk361115629.github.io/
 */
#ifndef   __CKIT_H
#define   __CKIT_H


/* definitions of bool-value */
#ifndef true
#define true  1
#endif
#ifndef false
#define false 0
#endif

/* definitions of exit-status */
#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#endif
#ifndef EXIT_FAILURE
#define EXIT_FAILURE 1
#endif


/* macro of size of array */
#ifndef ARRAY_SIZE
#define ARRAY_SIZE(x)   (sizeof(x)/sizeof((x)[0]))
#endif



/* APIs */
int systemf(const char *fmt, ...);
size_t fappend(const char *file, const char *fmt, ...);
int strcmp_nonull(const char *target, const char *str);


#endif

