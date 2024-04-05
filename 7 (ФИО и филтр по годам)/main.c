#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[256];
    char famil[256];
    int year;
}Human;

int compare_years(const void* a, const void* b) {
    const Human* hum1 = a;
    const Human* hum2 = b;
    return hum1->year - hum2->year;
}


int main() {

    Human people[4];


    for(int i = 0; i < 4; i++){

        printf("People #%i\n", i + 1);
        printf("Vvedite name: ");
        scanf("%s", &people[i].name);
        printf("Vvedite familiy: ");
        scanf("%s", &people[i].famil);
        printf("Vvedite year: ");
        scanf("%i", &people[i].year);
        
    }
    
    
    for(int i = 0; i < 4; i++){
        printf("People #%i\n", i + 1);
        printf("%s %s %i\n",people[i].name, people[i].famil ,people[i].year);

    }
    
    qsort(people, 4, sizeof(Human), compare_years);

    printf("\nFiltracia po godam :\n");
    for (int i = 0; i < 4; ++i) {
        printf("%s %s %d\n", people[i].name, people[i].famil, people[i].year);
    }

    return 0;
}




























































