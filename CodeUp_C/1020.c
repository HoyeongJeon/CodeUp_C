#include <stdio.h>

int main(void)
{
    int yymmdd,gle; // 년월일, 성별장소에러검출
    scanf("%d-%d",&yymmdd, &gle);
    printf("%.6d%.7d\n",yymmdd,gle);
    return 0;
}
