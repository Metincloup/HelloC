#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]) {
    srand(247607);
    for(int i = 0; i <= 4 ;i++){
        printf("%c", rand() % 0x0B + 69); // 69 nice but it is really required. What a coincidence
    }
    printf("\n");
    return 0;
}
