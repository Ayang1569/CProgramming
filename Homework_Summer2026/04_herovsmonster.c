#include <stdio.h>
#include <stdlib.h>

void printYouWin(void);
void printYouLose(void);
int heroAttacks(int atkBonus);
int monsterAttacks(void);
void displayHealth(int heroHealth, int monsterHealth);
void battle(void);

int main() {
    // Variables
    int seed;

    printf("Enter the seed: ");
    scanf("%d", &seed);
    puts("");

    // Seed
    srand(seed);
    
    // Start battle
    battle();

    return 0;
}

void printYouWin(void) {
    puts("Congratulations! You defeated the monster!");
}

void printYouLose(void) {
    puts("Game Over! The monster has defeated you!");
}

int heroAttacks(int atkBonus) {
    return rand() % 5 + 1 + atkBonus;
}

int monsterAttacks(void) {
    return rand() % 6 + 1;
}

void displayHealth(int heroHealth, int monsterHealth) {
    puts("");
    printf("Hero Health: %d | Monster Health: %d\n", heroHealth, monsterHealth);
    puts("");
}

void battle(void) {
    int monsterHealth = 20;
    int heroHealth = 20;

    puts("The battle begins!");

    displayHealth(heroHealth, monsterHealth);

    while (1) {
        // Adjusting hero and monster health
        int atkBonus = rand() % 3;
        int totalHeroAttack = heroAttacks(atkBonus);
        int totalMonsterAttack = monsterAttacks();

        // Check for monster health
        monsterHealth -= totalHeroAttack;
        printf("Hero attacks with %d damage!\n", totalHeroAttack);
        if (monsterHealth <= 0) {
            monsterHealth = 0;
            displayHealth(heroHealth, monsterHealth);
            printYouWin();
            break;
        }

        // Check for hero health
        heroHealth -= totalMonsterAttack;
        printf("Monster attacks with %d damage!\n", totalMonsterAttack);
        if (heroHealth <= 0) {
            heroHealth = 0;
            displayHealth(heroHealth, monsterHealth);
            printYouLose();
            break;
        }

        // Display hero and monster health
        displayHealth(heroHealth, monsterHealth);
    }
}