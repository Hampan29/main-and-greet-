#include<stdio.h>
void greet(char *name) {
    printf("Hello, %s!\n", name);
}
int main() {
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);
    greet(name);
    return 0;
}