#include <stdio.h>
struct ejemplo{
    char c;
    int i;
};

int main(){
    struct ejemplo e1, a[10];
    a[0].c = 'A';
    a[0].i = 65;
    printf("a[0].c = %c\na[0].i = %d\n", a[0].c, a[0].i);
    return 0;
}