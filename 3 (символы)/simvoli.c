#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void UPER(char *s, int ogr)
{
    for(int i= 0; i < ogr; i++){
        s[i] = toupper((unsigned char)s[i]);

    }
}

int main()
{

    
    int ogr;
    printf("Vvedite ogranichenie simvolov: ");
    scanf("%d", &ogr);
    fflush(stdin);   # чтобы не сохранялась пустая строка в буфере


    char *s = (char *)malloc(ogr * sizeof(char));


    if (s == NULL) 
    {
        fprintf(stderr, "RAM ERROR\n");
        return 1;
    }




    printf("Vasha stroca: ");
    fgets(s, ogr + 1,  stdin);
    s[ogr] = '\0';
    printf("Vasha stroca low: %s \n", s);
    UPER(s, ogr);
    printf("Vasha stroca Up: %s", s);
    

    free(s);
    getchar();

    return 0;
}










































































