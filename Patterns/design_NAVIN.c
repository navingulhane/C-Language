// Diagonal letter pattern for name "Navin" ^_^  hehehehe

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Navin";
    int len = strlen(name);

    for(int i = 0; i < len; i++) {
        printf("|");
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("%c", name[i]);
        for(int j = i + 1; j < len; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    return 0;
}
