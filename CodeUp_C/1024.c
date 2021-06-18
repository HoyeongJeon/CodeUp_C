#include <stdio.h>

int main(void)
{
    int i;
    char data[20];
    scanf("%s",&data);
    for(i = 0; i < 20; i++)
    {
        if(data[i] == NULL)
            break;
        else
            printf("\'%c\'\n",data[i]);
    }
    return 0;
}
