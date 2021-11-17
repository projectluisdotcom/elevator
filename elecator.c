#include <stdio.h>

char plus = '+';

int ex1(char input[]) {
    int floor = 0;
    for(int i = 0; '\0' != input[i]; i ++)
    {
        floor += plus == input[i] ? 1 : -1;
    }
    return floor;
}

int ex2(char input[]) {
    int floor = 0;
    for(int i = 0; '\0' != input[i]; i ++)
    {
        floor += plus == input[i] ? 1 : -1;
        floor = floor < 0 ? 0 : floor;
    }
    return floor;
}

int ex3(char input[]) {
    int floor = 0;
    for(int i = 0; '\0' != input[i]; i += 2)
    {
		
        floor += plus == input[i+1] ? (input[i]-'0') : -(input[i]-'0');
        floor = floor < 0 ? 0 : floor;
    }
    return floor;
}

int main() {
    printf("%d\n", ex1("++"));
    printf("%d\n", ex1("--"));
    printf("%d\n", ex1("-+-+-+"));
    printf("%d\n", ex2("+----+"));
    printf("%d\n", ex2("+--"));
    printf("%d\n", ex3("2-"));
    printf("%d\n", ex3("1+2-1+"));
    printf("%d\n", ex3("3+2+2-"));
    return 0;
}
