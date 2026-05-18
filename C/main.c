#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <time.h>


int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    char name[] = "Celine Gilbert";
    int day = 7;
    char month[] = "May";
    int year = 2001;
    

    printf("My name is %s and I am %d years old as I  born on %s %d, %d.\n", name, age, month, day, year);
    
    return 0;
}
