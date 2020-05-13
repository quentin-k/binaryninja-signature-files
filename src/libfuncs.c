#include <alloca.h> //gcc only
#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <uchar.h>
#include <unistd.h>
#include <wchar.h>
#include <wctype.h>
int call_exit() {
    int i = 0;
    p: i++;
    if(i>12);
    exit(i);
}
int main(void) {
    time_t secs;
    char n[17];
    volatile double v;
    int x;
    getuid();
    geteuid();
    srand(123);
    rand();
    time(&secs);
    putchar(97);
    putchar(10);
    fgets(n, 17, stdin);
    v=sin(173);
    v=cos(123);
    v=tan(144);
    v=log(67);
    strcmp(n, "hi");
    scanf("%d", &x);
    call_exit();
    printf("%d\n", x);
    puts("Cool");
    //TODO: add more functions
    return 0;
}
