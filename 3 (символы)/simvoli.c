#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void UPER(char *s, int ogr)
{
    for(int i= 0; i < ogr; i++){
        if(s[i] == 'a' || s[i] == 'b')
        s[i] = toupper(s[i]);

    }
}

int main()
{

    
    int ogr;
    printf("Vvedite ogranichenie simvolov: ");
    scanf("%d", &ogr);
    fflush(stdin);

    
    char *s = (char *)malloc(ogr * sizeof(char));


    if (s == NULL) 
    {
        printf("RAM ERROR\n");
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










































































