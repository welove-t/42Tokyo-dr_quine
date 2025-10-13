#include <stdio.h>

/*
    Colleen
*/

void quote(void)
{
    char *code = "#include <stdio.h>%1$c%1$c/*%1$c    Colleen%1$c*/%1$c%1$cvoid quote(void)%1$c{%1$c    char *code = %2$c%s%2$c;%1$c    printf(code, 10, 34, code);%1$c}%1$c%1$cint main(void)%1$c{%1$c    /* main */%1$c    quote();%1$c    return 0;%1$c}%1$c";
    printf(code, 10, 34, code);
}

int main(void)
{
    /* main */
    quote();
    return 0;
}
