#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "func.h"
#include "human.h"

#define N 256


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
