#include <stdio.h>
#include "slwa.h"

int intarr_size(int* arrptr) {
    int res = 0;
    for (int i = 0; ;i++) { //cycle until count != 0
        if (*(arrptr+i) == 0) return res;
        res++;
    }
}

int intarr_searchmax(int* arrptr, int intarr_sizeof) {
    int max = 0;
    for (int i = 0; i < intarr_sizeof; i++)
        max = *(arrptr+i) > max ? *(arrptr+i) : max;
    return max;
}

int intarr_searchmin(int* arrptr, int intarr_sizeof) {
    int min = 0;
    for (int i = 0; i < intarr_sizeof; i++)
        min = *(arrptr+i) < min ? *(arrptr+i) : min;
    return min;
}
/*i've deleted it 'cuz this work is really stupid
you can call var through ptr without that func*/
// void echo_varptr(int* ptr) {
//     printf("var is through ptr is: %d", *ptr); //call to var through ptr
// }
