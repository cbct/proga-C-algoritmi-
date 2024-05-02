#include <string.h>

int sortAlf(const void *a, const void *b) {
    char *line1 = *(char **)a;
    char *line2 = *(char **)b;
    char *field1 = strtok(line1, " ");
    char *field2 = strtok(line2, " ");
    return strcmp(field1, field2);
}


// int sortByName(const void *a, const void *b) {
//     Human *person1 = (Human *)a;
//     Human *person2 = (Human *)b;
//     return strcmp(person1->name, person2->name);
// }







































