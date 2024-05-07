#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 256

typedef struct {

    char full_string[N];
    char name[N];
    char famil[N];
    int year;
    char pol[N];
    float rost;

}Human;


int swap_name(const void *a, const void *b) {     //1
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->name, chel_b->name);
}

int swap_famil(const void *a, const void *b) {      //2
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->famil, chel_b->famil);
}

int swap_year(const void *a, const void *b) {       //3
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

int swap_pol(const void *a, const void *b) {        //4
    const Human *chel_a = a;
    const Human *chel_b = b;
    return strcmp(chel_a->pol, chel_b->pol);
}

int swap_rost(const void *a, const void *b) {       //5
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







int swap_name_famil(const void *a, const void *b) {     //12
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
    }
    return cmp;
}

int swap_name_year(const void *a, const void *b) {       //13
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->name, human_b->name);
    if (cmp == 0) {
        cmp = human_a->year - human_b->year;
    }
    return cmp;
}

int swap_name_pol(const void *a, const void *b) {     //14
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->pol, chel_b->pol);
    }
    return cmp;
}

int swap_name_rost(const void *a, const void *b) {       //15
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->name, human_b->name);
    if (cmp == 0) {
        if (human_a->rost < human_b->rost) {
            return -1;
        } else if (human_a->rost > human_b->rost) {
            return 1;
        } else {
            return 0;
        }
    }
    return cmp;
}

int swap_famil_year(const void *a, const void *b) {       //23
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->famil, human_b->famil);
    if (cmp == 0) {
        cmp = human_a->year - human_b->year;
    }
    return cmp;
}

int swap_famil_pol(const void *a, const void *b) {     //24
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->famil, chel_b->famil);
    if (cmp == 0) {
        cmp = strcmp(chel_a->pol, chel_b->pol);
    }
    return cmp;
}

int swap_famil_rost(const void *a, const void *b) {       //25
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->famil, human_b->famil);
    if (cmp == 0) {
        cmp = human_a->rost - human_b->rost;
    }
    return cmp;
}

int swap_year_pol(const void *a, const void *b) {       //34
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = human_a->year - human_b->year;
    if (cmp == 0) {
        cmp = strcmp(human_a->pol, human_b->pol);
    }
    return cmp;
}

int swap_year_rost(const void *a, const void *b) {       //35
    const Human *human_a = a;
    const Human *human_b = b;

    if (human_a->year!= human_b->year) {
        return human_a->year - human_b->year;
    } else {
        return (human_a->rost > human_b->rost) - (human_a->rost < human_b->rost);
    }
}

int swap_pol_rost(const void *a, const void *b) {       //45
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->pol, human_b->pol);
    if (cmp == 0) {
        if (human_a->rost < human_b->rost) {
            return -1;
        } else if (human_a->rost > human_b->rost) {
            return 1;
        } else {
            return 0;
        }
    }
    return cmp;
}

int swap_name_famil_year(const void *a, const void *b) {     //123
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = chel_a->year - chel_b->year;
        }
    }
    return cmp;
}

int swap_name_famil_pol(const void *a, const void *b) {     //124
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = strcmp(chel_a->pol, chel_b->pol);
        }
    }
    return cmp;
}

int swap_name_famil_rost(const void *a, const void *b) {     //125
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            if (chel_a->rost < chel_b->rost) {
                return -1;
            } else if (chel_a->rost > chel_b->rost) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return cmp;
}

int swap_name_year_pol(const void *a, const void *b) {       //134
    const Human *human_a = a;
    const Human *human_b = b;

    int cmp = strcmp(human_a->name, human_b->name);
    if (cmp == 0) {
        cmp = human_a->year - human_b->year;
        if(cmp == 0){
            cmp = strcmp(human_a->pol, human_b->pol);
        }
    }
    return cmp;
}

int swap_name_year_rost(const void *a, const void *b) {     //135
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = chel_a->year - chel_b->year;
        if(cmp == 0){
            if (chel_a->rost < chel_b->rost) {
                return -1;
            } else if (chel_a->rost > chel_b->rost) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return cmp;
}

int swap_name_pol_rost(const void *a, const void *b) {     //145
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->pol, chel_b->pol);
        if(cmp == 0){
            if (chel_a->rost < chel_b->rost) {
                return -1;
            } else if (chel_a->rost > chel_b->rost) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return cmp;
}

int swap_famil_year_pol(const void *a, const void *b) {     //234
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->famil, chel_b->famil);
    if (cmp == 0) {
        if (chel_a->year < chel_b->year) {
                return -1;
            } else if (chel_a->year > chel_b->year) {
                return 1;
            } else if(cmp == 0){
                cmp = strcmp(chel_a->pol, chel_b->pol);
            } else {
                return 0;
            }
    }
    return cmp;
}

int swap_famil_year_rost(const void *a, const void *b) {     //235
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->famil, chel_b->famil);
    if (cmp == 0) {
        cmp = strcmp(chel_a->pol, chel_b->pol);
        if (chel_a->year < chel_b->year) {
                return -1;
            } else if (chel_a->year > chel_b->year) {
                return 1;
            } else if(chel_a->rost > chel_b->rost){
                return 1;
            } else {
                return 0;
            }
    }
    return cmp;
}

int swap_famil_pol_rost(const void *a, const void *b) {     //245
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->famil, chel_b->famil);
    if (cmp == 0) {
        cmp = strcmp(chel_a->pol, chel_b->pol);
        if(cmp == 0){
            if (chel_a->rost < chel_b->rost) {
                return -1;
            } else if (chel_a->rost > chel_b->rost) {
                return 1;
            } else {
                return 0;
            }
        }
    }
    return cmp;
}

int swap_year_pol_rost(const void *a, const void *b) {      //345
    const Human *chel_a = a;
    const Human *chel_b = b;

    if (chel_a->year < chel_b->year) {
        return -1;
    } else if (chel_a->year > chel_b->year) {
        return 1;
    } else {
        int cmp = strcmp(chel_a->pol, chel_b->pol);
        if (cmp == 0){
            if (chel_a->rost < chel_b->rost) {
                return -1;
            } else if (chel_a->rost > chel_b->rost) {
                return 1;
            } else {
                return 0;
            }
        } else {
            return cmp;
        }
    }
}

int swap_name_famil_year_pol(const void *a, const void *b) {     //1234
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = chel_a->year - chel_b->year;
            if(cmp == 0){
                cmp = strcmp(chel_a->pol, chel_b->pol);
            }
        }
    }
    return cmp;
}

int swap_name_famil_year_rost(const void *a, const void *b) {     //1235
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = chel_a->year - chel_b->year;
            if(cmp == 0){
                if (chel_a->rost < chel_b->rost) {
                    return -1;
                } else if (chel_a->rost > chel_b->rost) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
    return cmp;
}

int swap_name_famil_pol_rost(const void *a, const void *b) {     //1245
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = strcmp(chel_a->pol, chel_b->pol);
            if(cmp == 0){
                if (chel_a->rost < chel_b->rost) {
                    return -1;
                } else if (chel_a->rost > chel_b->rost) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
    return cmp;
}
//1345
int swap_name_year_pol_rost(const void *a, const void *b) {     //1345
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = chel_a->year - chel_b->year;
        if (cmp == 0) {
            cmp = strcmp(chel_a->pol, chel_b->pol);
            if(cmp == 0){
                if (chel_a->rost < chel_b->rost) {
                    return -1;
                } else if (chel_a->rost > chel_b->rost) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
    return cmp;
}

int swap_famil_year_pol_rost(const void *a, const void *b) {     //2345
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->famil, chel_b->famil);
    if (cmp == 0) {
        cmp = chel_a->year - chel_b->year;
        if (cmp == 0) {
            cmp = strcmp(chel_a->pol, chel_b->pol);
            if(cmp == 0){
                if (chel_a->rost < chel_b->rost) {
                    return -1;
                } else if (chel_a->rost > chel_b->rost) {
                    return 1;
                } else {
                    return 0;
                }
            }
        }
    }
    return cmp;
}
//12345
int swap_name_famil_year_pol_rost(const void *a, const void *b) {     //12345
    const Human *chel_a = a;
    const Human *chel_b = b;
    int cmp = strcmp(chel_a->name, chel_b->name);
    if (cmp == 0) {
        cmp = strcmp(chel_a->famil, chel_b->famil);
        if(cmp == 0){
            cmp = chel_a->year - chel_b->year;
            if(cmp == 0){
                cmp = strcmp(chel_a->pol, chel_b->pol);
                if(cmp == 0){
                    if (chel_a->rost < chel_b->rost) {
                        return -1;
                    } else if (chel_a->rost > chel_b->rost) {
                        return 1;
                    } else {
                        return 0;
                    }
                }
            }
        }
    }
    return cmp;
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





    if (numFilt == 12){
        qsort(people, x, sizeof(Human), swap_name_famil);
    }

    if (numFilt == 13){
        qsort(people, x, sizeof(Human), swap_name_year);
    }

    if (numFilt == 14){
        qsort(people, x, sizeof(Human), swap_name_pol);
    }

    if (numFilt == 15){
        qsort(people, x, sizeof(Human), swap_name_rost);
    }

    if (numFilt == 23){
        qsort(people, x, sizeof(Human), swap_famil_year);
    }

    if (numFilt == 24){
        qsort(people, x, sizeof(Human), swap_famil_pol);
    }

    if (numFilt == 25){
        qsort(people, x, sizeof(Human), swap_famil_rost);
    }

    if (numFilt == 34){
        qsort(people, x, sizeof(Human), swap_year_pol);
    }

    if (numFilt == 35){
        qsort(people, x, sizeof(Human), swap_year_rost);
    }

    if (numFilt == 45){
        qsort(people, x, sizeof(Human), swap_pol_rost);
    }







    if (numFilt == 123){
        qsort(people, x, sizeof(Human), swap_name_famil_year);
    }

    if (numFilt == 124){
        qsort(people, x, sizeof(Human), swap_name_famil_pol);
    }

    if (numFilt == 125){
        qsort(people, x, sizeof(Human), swap_name_famil_rost);
    }

    if (numFilt == 134){
        qsort(people, x, sizeof(Human), swap_name_year_pol);
    }

    if (numFilt == 135){
        qsort(people, x, sizeof(Human), swap_name_year_rost);
    }

    if (numFilt == 145){
        qsort(people, x, sizeof(Human), swap_name_pol_rost);
    }

    if (numFilt == 234){
        qsort(people, x, sizeof(Human), swap_famil_year_pol);
    }

    if (numFilt == 235){
        qsort(people, x, sizeof(Human), swap_famil_year_rost);
    }

    if (numFilt == 245){
        qsort(people, x, sizeof(Human), swap_famil_pol_rost);
    }

    if (numFilt == 345){
        qsort(people, x, sizeof(Human), swap_year_pol_rost);
    }






    if (numFilt == 1234){
        qsort(people, x, sizeof(Human), swap_name_famil_year_pol);
    }

    if (numFilt == 1235){
        qsort(people, x, sizeof(Human), swap_name_famil_year_rost);
    }

    if (numFilt == 1245){
        qsort(people, x, sizeof(Human), swap_name_famil_pol_rost);
    }

    if (numFilt == 1345){
        qsort(people, x, sizeof(Human), swap_name_year_pol_rost);
    }

    if (numFilt == 2345){
        qsort(people, x, sizeof(Human), swap_famil_year_pol_rost);
    }

    if (numFilt == 12345){
        qsort(people, x, sizeof(Human), swap_name_famil_year_pol_rost);
    }

        // if (numFilt == 24){
    //     qsort(people, x, sizeof(Human), swap_famil_pol);
    // }

    // if (numFilt == 24){
    //     qsort(people, x, sizeof(Human), swap_famil_pol);
    // }

    // if (numFilt == 24){
    //     qsort(people, x, sizeof(Human), swap_famil_pol);
    // }

    // if (numFilt == 24){
    //     qsort(people, x, sizeof(Human), swap_famil_pol);
    // }

    // if (numFilt == 24){
    //     qsort(people, x, sizeof(Human), swap_famil_pol);
    // }







    for (int i = 0; i < x; i++) {
        fprintf(new, "%s\n", people[i].full_string);
    }




    // if(numFilt == 1){

    // }
    


    fclose(new);

    getchar();

    return 0;
}




// 1-
// 2-
// 3-
// 4-
// 5-
// 12-
// 13-
// 14-
// 15-
// 23-
// 24-
// 25-
// 34-
// 35-
// 45-
// 123-
// 124-
// 125-
// 134-
// 135-
// 145-
// 234-
// 235-
// 245-
// 345-
// 1234-
// 1235-
// 1245-
// 1345-
// 2345-
// 12345









































































































































































