#include <stdio.h>
#include <ctype.h>  

int main() {
    char a[100];
    int i;

    printf("Enter the input string: ");
    scanf("%s", a);

    printf("Output (only lowercase letters): ");

    for(i = 0; a[i] != '\0'; i++) {
        if(isalpha(a[i]) && (a[i] >= 'a' && a[i] <= 'z')) {
            printf("%c", a[i]);
        }
    }

    printf("\n");

    return 0;
}
