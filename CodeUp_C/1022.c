#include <stdio.h>

int main(void)
{
    char data[2001] = "";
    fgets(data,2000,stdin);
    printf("%s\n", data);
    return 0;
}
