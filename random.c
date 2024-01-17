#include <stdio.h>
#include <stdlib.h>

char randchar() {
    char letter = 'a' + (rand() % 26);
    return letter;
}