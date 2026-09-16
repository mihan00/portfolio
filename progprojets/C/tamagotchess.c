#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FAIM_LIMIT 10 //HUNGER_LIMIT
#define ENNUI_LIMIT 20 //BOREDOM_LIMIT
#define FATIGUE_LIMIT 15 //TIREDNESS_LIMIT

typedef struct {
  int faim;
  int ennui;
  int fatigue;
} Tamagotchi;

Tamagotchi initTamagotchi() {
  Tamagotchi t = {0, 0, 0};
  return t;
}

void updateTamagotchi(Tamagotchi *t) {
  t->faim++;
  t->ennui++;
  t->fatigue++;
}

void feedTamagotchi(Tamagotchi *t) {
  if (t->faim > 0) {
    t->faim--;
  }
}

void playWithTamagotchi(Tamagotchi *t) {
  if (t->ennui > 0) {
    t->ennui--;
  }
}

void putTamagotchiToSleep(Tamagotchi *t) {
  if (t->fatigue > 0) {
    t->fatigue--;
  }
}

int main() {
  srand(time(NULL));
  Tamagotchi t = initTamagotchi();
  int choice;

  while (1) {
    updateTamagotchi(&t);
    printf("Faim: %d, Ennui: %d, Fatigue: %d\n", t.faim, t.ennui, t.fatigue);
    if (t.faim >= FAIM_LIMIT || t.ennui >= ENNUI_LIMIT || t.fatigue >= FATIGUE_LIMIT) {
      printf("your tamagotchi has died bye bella jtm\n");
      break;
    }
    printf("1. Feed\n");
    printf("2. Play\n");
    printf("3. Sleep\n");
    printf("what would you like to do? ");
    scanf("%d", &choice);
    switch (choice) {
      case 1:
        feedTamagotchi(&t);
        break;
      case 2:
        playWithTamagotchi(&t);
        break;
      case 3:
        putTamagotchiToSleep(&t);
        break;
      default:
        printf("Invalid choice\n");
    }
  }
  return 0;
}
