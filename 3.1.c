#include <stdio.h>

int main() {
    int n = 10; // Number of students
	int i; 
    int scores[n]; // Array to store scores
    int sum = 0;

    // Input scores and calculate the sum
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    // Calculate and print the average score
    printf("%.1f\n", sum / (float)n);

    return 0;
}

