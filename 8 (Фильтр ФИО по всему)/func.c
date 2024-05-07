#include <stdio.h>
#include <stdlib.h>
#include "human.h"


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






























