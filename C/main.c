#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>
#include <time.h>
#include <assert.h>
#include <complex.h>
#include <errno.h>
#include <fenv.h>
#include <inttypes.h>
#include <iso646.h>
#include <locale.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stddef.h>
#include <stdint.h>
#include <stdnoreturn.h>	
#include <tgmath.h>		
#include <uchar.h>	
#include <wctype.h>

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
