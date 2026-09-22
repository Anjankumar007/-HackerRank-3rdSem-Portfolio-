// Time Conversion
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    char* result = (char*)malloc(9 * sizeof(char));
    int hh, mm, ss;
    char period[3];

    sscanf(s, "%2d:%2d:%2d%2s", &hh, &mm, &ss, period);

    if (strcmp(period, "AM") == 0) {
        if (hh == 12) hh = 0;
    } else {
        if (hh != 12) hh += 12;
    }

    sprintf(result, "%02d:%02d:%02d", hh, mm, ss);
    return result;
}