#include <stdlib.h>
#include <stdio.h>

int main()
{
    char buff[1024] = {0};
    FILE* f = fopen("/home/level5/.pass", "r");
    fgets(buff, sizeof(buff), f);
    printf(buff);
    return 0;
}
