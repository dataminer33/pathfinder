#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    long i;
    const char *str = s;
    for (i = n - 1; (i >= 0) && (str[i] != c); i--);
    if (i >= 0 && str[i] == c)
        return (void *) &str[i];
    return NULL;
}

// int main(void)
// {
//     //unsigned char src5[15]="13534567890";
// 	printf("%s\n", (char *)mx_memrchr("Trinity", '0', 7));
// }
