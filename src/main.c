#include <stdio.h>


int global_var = 42;
static int static_var = 13;


void hello_world() {
    printf("Hello, world!\n");
}


static void static_function() {
    printf("Static function\n");
}

int main() {
    printf("Main function\n");
    hello_world();
    static_function();

    printf("Global variable: %d\n", global_var);
    printf("Static variable: %d\n", static_var);
    return 0;
}

