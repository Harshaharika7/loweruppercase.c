#include <stdio.h>
#include <ctype.h>  

int main() {
    char a[100];
    int i;

    printf("Enter the input string: ");
    scanf("%s", a);

    printf("Output (only uppercase letters): ");

    for(i = 0; a[i] != '\0'; i++) {
        if(isalpha(a[i]) && (a[i] >= 'A' && a[i] <= 'Z')) {
            printf("%c", a[i]);
        }
    }

    printf("\n");

    return 0;
}
