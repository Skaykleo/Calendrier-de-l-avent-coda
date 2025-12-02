#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char status[20];
} Reindeer;
int countPresentReindeers(Reindeer reindeers[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(reindeers[i].status, "présent") == 0) {
            count++;
        }
    }

    return count;
}

int main(void) {
    Reindeer Reindeers[8] = {
       {"Dasher",   "présent"},
       {"Dancer",   "vétérinaire"},
       {"Prancer",  "présent ? 😬"},
       {"Vixen",    "spa"},
       {"Comet",    "présent"},
       {"Cupid",    "parti"},
       {"Donner",   "présent"},
       {"Blitzen",  "présent"}
    };
    int total = 8;
    int present = countPresentReindeers(Reindeers, total);

    printf("🎅 Santa: %d out of %d reindeers are present in the stable tonight.\n",
           present, total);

    return 0;
}
