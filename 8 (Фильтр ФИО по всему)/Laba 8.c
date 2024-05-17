#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    char surname[50];
    int birth_year;
    char gender;
    float height;
} Person;


int compare(const void *a, const void *b) {

    Person *personA = (Person *)a;
    Person *personB = (Person *)b;

  

    if (personA->birth_year != personB->birth_year) {
        return personA->birth_year - personB->birth_year;
    } else if (strcmp(personA->name, personB->name) != 0) {
        return strcmp(personA->name, personB->name);
    } else if (personA->gender != personB->gender) {
        return personA->gender - personB->gender;
    } else {
        return personA->height - personB->height;
    }
}

int main() {
    int n, i;
    char order_by[50];

   
    printf("Vvedite kol-vo zapisey: ");
    scanf("%d", &n);

  
    Person people[n];

    
    for (i = 0; i < n; i++) {
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Surname: ");
        scanf("%s", people[i].surname);
        printf("God rozhdeniya: ");
        scanf("%d", &people[i].birth_year);
        printf("Gender (M/F): ");
        scanf(" %c", &people[i].gender);
        printf("Height: ");
        scanf("%f", &people[i].height);
    }

   
    printf("Ukazhite pole dlya sortirovki (name/surname/birth_year/gender/height): ");
    scanf("%s", order_by);

   
    qsort(people, n, sizeof(Person), compare);


    printf("\nOtsortirovanniye danniye:\n");
    for (i = 0; i < n; i++) {
        printf("%s %s, %d, %c, %.2f\n", people[i].name, people[i].surname, people[i].birth_year, people[i].gender, people[i].height);
    }

    return 0;
}
