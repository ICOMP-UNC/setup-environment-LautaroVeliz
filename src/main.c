#include <greetings.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello, OS II. Welcome to 2024 course!\n");
    greetings();
    //printf("Calling shared lib from main program. I get '%d'\n", shared_lib_funtion());
    //printf("Calling static lib from main program. I get '%d'\n", static_lib_funtion());
    return 0;
}

