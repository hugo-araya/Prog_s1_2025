#include <stdio.h>
struct ejemplo{
    char c;
    int i;
};

int main(){
    struct ejemplo e1, a[10];
    int i = 0;
    for(i = 0; i < 10; i++){
        a[i].c = i+65;
        a[i].i = i+65;
    }

    for(i = 0; i < 10; i++){
        printf("a[%d].c = %c\na[%d].i = %d\n", i, a[i].c, i, a[i].i);
    }
    return 0;
}