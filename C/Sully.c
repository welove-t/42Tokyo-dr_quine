int i = 5;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char filename[64], exe[64], cmd[256];
    int next = i - 1;
    if (next < 0) return 0;
    sprintf(filename, "Sully_%d.c", next);
    FILE *fp = fopen(filename, "w");
    if (!fp) return 1;
    char *src = "int i = %2$d;%1$c#include <stdio.h>%1$c#include <stdlib.h>%1$cint main(void)%1$c{%1$c    char filename[64], exe[64], cmd[256];%1$c    int next = i - 1;%1$c    if (next < 0) return 0;%1$c    sprintf(filename, %3$cSully_%4$cd.c%3$c, next);%1$c    FILE *fp = fopen(filename, %3$cw%3$c);%1$c    if (!fp) return 1;%1$c    char *src = %3$c%5$s%3$c;%1$c    fprintf(fp, src, 10, next, 34, 37, src);%1$c    fclose(fp);%1$c    sprintf(exe, %3$cSully_%4$cd%3$c, next);%1$c    sprintf(cmd, %3$cclang -Wall -Wextra -Werror %4$cs -o %4$cs && ./%4$cs%3$c, filename, exe, exe);%1$c    system(cmd);%1$c    return 0;%1$c}%1$c";
    fprintf(fp, src, 10, next, 34, 37, src);
    fclose(fp);
    sprintf(exe, "Sully_%d", next);
    sprintf(cmd, "clang -Wall -Wextra -Werror %s -o %s && ./%s", filename, exe, exe);
    system(cmd);
    return 0;
}
