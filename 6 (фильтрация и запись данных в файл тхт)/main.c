#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>

#define N 256

int main()
{


    setlocale(LC_ALL, "Russian");

    FILE *old, *new;
    old = fopen("old.txt", "r");
    new = fopen("new.txt", "a+t");

    int long_l, god;
    char str[N], *str_split, *line;
    int x = 0;

    while(x!=10){
        fgets(str, N, old);
        str[strcspn(str, "\n")] = '\0';
        line = strdup(str);                                 // создание копии строки str в line
        printf("%s", str);
        str_split = strtok(str, " ");
 
        for(int i = 0; str_split != NULL; i++){
            if(i != 3){
                printf("\n%s", str_split);
                str_split = strtok(NULL, " ");
            }
            else{
                god = atoi(str_split);                               // atoi конвертирует из str в int
                str_split = strtok(NULL, " ");
            }
        }
            printf("\n");
        

        if(god >= 1980){
            printf("\n%i bokshe 1980     zapic", god);
            fputs(line, new);  
            fputc('\n', new);
        
        }
        else{
            printf("\n%i menshe 1980", god);
        }
        x += 1;
    }

    return 0;
}



