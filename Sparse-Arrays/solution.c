// Sparse Arrays
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    *result_count = queries_count;
    int* res = (int*)calloc(queries_count, sizeof(int));

    for (int i = 0; i < queries_count; i++) {
        for (int j = 0; j < strings_count; j++) {
            if (strcmp(queries[i], strings[j]) == 0) {
                res[i]++;
            }
        }
    }

    return res;
}