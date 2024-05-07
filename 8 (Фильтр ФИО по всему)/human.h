#define N 256
#ifndef HUMAN_H
#define HUMAN_H

typedef struct {

    char full_string[N];
    char name[N];
    char famil[N];
    int year;
    char pol[N];
    float rost;

}Human;
#endif