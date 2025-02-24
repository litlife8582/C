#include <stdio.h> 
#include<stdlib.h> 
#include <string.h>
typedef struct { 
    char name[50];
    int age;
    int matches;
    float average_runs;
} Cricketer;

void sortCricketers(Cricketer arr[], int n){
     for (int i = 0; i < n - 1; i++){
         for (int j = 0; j < n - i - 1; j++){
            if (arr[j].average_runs > arr[j + 1].average_runs){ 
                Cricketer temp = arr[j]; 
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        } 
    }
}

int main() { 
    int n;
    scanf("%d", &n); 
    Cricketer *players = (Cricketer *)malloc(n * sizeof(Cricketer)); 
    if (players == NULL){ 
        printf("Memory Allocation Failed!\n"); 
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d %f", players[i].name, &players[i].age, &players[i].matches, &players[i].average_runs);
    }

    sortCricketers(players, n);

    for (int i = 0; i < n; i++) {
        printf("%s %d %d %.2f\n", players[i].name, players[i].age, players[i].matches, players[i].average_runs);
    }

    free(players);
    return 0;
}