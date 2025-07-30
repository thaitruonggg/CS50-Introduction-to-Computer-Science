#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name? \n");
    printf("Hello, %s\n", answer);
    int age = get_int("How old are you? \n");
    printf("%s, you are %i years old\n", answer, age);
}
