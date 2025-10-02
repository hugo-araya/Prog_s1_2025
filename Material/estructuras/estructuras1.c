#include <stdio.h>
struct ejemplo{
    char c;
    int i;
};

int main(){
    struct ejemplo e1, a[10];
    e1.c = 'A';
    e1.i = 65;
    printf("e1.c = %c\ne1.i = %d\n", e1.c, e1.i);
    return 0;
}