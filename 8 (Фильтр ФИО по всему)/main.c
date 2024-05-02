#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.c"

#define N 256

typedef struct {

    char full_string[N];
    char name[N];
    char famil[N];
    int year;
    char pol[N];
    float rost;

}Human;


int swap_name(const void *a, const void *b) {
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->name, chel_b->name);
}

int swap_famil(const void *a, const void *b) {
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->famil, chel_b->famil);
}

int swap_year(const void *a, const void *b) {
    const Human *chel_a = a;
    const Human *chel_b = b;
    if (chel_a->year < chel_b->year) {
        return -1;
    } else if (chel_a->year > chel_b->year) {
        return 1;
    } else {
        return 0;
    }
}

int swap_pol(const void *a, const void *b) {
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->pol, chel_b->pol);
}

int swap_rost(const void *a, const void *b) {
    const Human *chel_a = a;
    const Human *chel_b = b;
    if (chel_a->rost < chel_b->rost) {
        return -1;
    } else if (chel_a->rost > chel_b->rost) {
        return 1;
    } else {
        return 0;
    }
}


int main(){

    FILE *old, *new;

    Human people[N];

    old = fopen("fio.txt", "r");
    new = fopen("new.txt", "w+");
    char line[N];
    int i = 0, x = 0;

    
    while(fgets(line, N, old) != NULL){
        printf("------------------------------------------------------------------\n");
        line[strcspn(line, "\n")] = 0;
        strcpy(people[i].full_string, line);  
        char *strS = strtok(line, " ");    
        printf("Human %s\n", people[i].full_string);      //вся строка

        int j = 0;


        while (strS!= NULL){
            if(j == 0){
                strcpy(people[i].name, strS);
                printf(" name: %s\n", people[i].name);
            }
            if(j == 1){
                strcpy(people[i].famil, strS);
                printf(" famil: %s\n", people[i].famil);
            }
            if(j == 2){
                people[i].year = atoi(strS);
                printf(" year: %i\n", people[i].year);
            }
            if(j == 3){
                strcpy(people[i].pol, strS);
                printf(" pol: %s\n", people[i].pol);
            }
            if(j == 4){
                people[i].rost = atof(strS);
                printf(" rost: %.2lfm\n", people[i].rost);
            }
            strS = strtok(NULL, " ");
            j++;
            

        }
        // line[strcspn(line, "\n")] = 0;
        
        
        i++;
        x++;
    }
    fclose(old);
    

    i = 0;
    printf("SORT---------------------------------------------------\n");

    int numFilt;

    printf("Vvedite sortirovky\n 1. name\n 2. famil\n 3. year\n 4. pol\n 5. rost\n");
    scanf("%i", &numFilt);

    if(numFilt == 1){
        qsort(people, x, sizeof(Human), swap_name);
    }

    if(numFilt == 2){
        qsort(people, x, sizeof(Human), swap_famil);
    }

    if(numFilt == 3){
        qsort(people, x, sizeof(Human), swap_year);
    }

    if (numFilt == 4){
        qsort(people, x, sizeof(Human), swap_pol);
    }

    if (numFilt == 5){
        qsort(people, x, sizeof(Human), swap_rost);
    }

    for (int i = 0; i < x; i++) {
        fprintf(new, "%s\n", people[i].full_string);
    }




    // if(numFilt == 1){

    // }
    


    fclose(new);

    getchar();

    return 0;
}












































































































































































