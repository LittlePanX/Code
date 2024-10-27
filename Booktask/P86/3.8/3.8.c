#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s", str);
    int ret = 0;
    if (strlen(str) == 0) {
        ret = 1;
    }
    if (ret == 0) {
        printf("%s", str);
    }
    if (ret == 1) {
        printf("¿Õ´®");
    }
    return 0;
}