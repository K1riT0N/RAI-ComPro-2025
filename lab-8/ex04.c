#include <stdio.h>
#include <string.h>

int vowels_count(char str[]);

int main() {
    char str[100];
    printf("Input: ");
    scanf("%[^\n]s", str);

    int count = vowels_count(str);
    printf("Output: Number of vowels: %d\n", count);

    return 0;
}

int vowels_count(char str[]) {
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 0; j < 10; j++) {
            if (str[i] == vowels[j]) {
                count++;
                break;
            } else {
                continue;
            }
        }
    }
    return count;
}