#!/bin/bash

echo -e '#include <stdio.h>\n#include <stdlib.h>' > /tmp/cheat.c
echo -e 'void __attribute__((constructor)) cheat(void) {' >> /tmp/cheat.c
echo -e '    srand(time(NULL));' >> /tmp/cheat.c
echo -e '    for (int i = 0; i < 6; i++)' >> /tmp/cheat.c
echo -e '        printf("%d ", rand() % 75 + 1);' >> /tmp/cheat.c
echo -e '    printf("%d\\n", rand() % 15 + 1);' >> /tmp/cheat.c
echo -e '}' >> /tmp/cheat.c

gcc -Wall -shared -fPIC -o /tmp/cheat.so /tmp/cheat.c
export LD_PRELOAD=/tmp/cheat.so

