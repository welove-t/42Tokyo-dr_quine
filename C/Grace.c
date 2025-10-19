#include <stdio.h>

/*
    Grace
*/

#define FILENAME "Grace_kid.c"
#define CODE "#include <stdio.h>%c%c/*%c    Grace%c*/%c%c#define FILENAME %cGrace_kid.c%c%c#define CODE %c%s%c%c#define FT() int main(void){FILE *fp = fopen(FILENAME, %cw%c);if(!fp)return 1;fprintf(fp, CODE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 10);fclose(fp);return 0;}%c%cFT()%c"
#define FT() int main(void){FILE *fp = fopen(FILENAME, "w");if(!fp)return 1;fprintf(fp, CODE, 10, 10, 10, 10, 10, 10, 34, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 10);fclose(fp);return 0;}

FT()
