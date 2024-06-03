#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int get_index(char c) {

    if (c >= 'a' && c <= 'z') {
        return c - 'a';
    }

    else if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    }

    else {
        return -1;
    }
}

int *calculate_letter_counts(const char *text) {
    int *letter_counts = (int *)calloc(26, sizeof(int));

	const char*p=text ;
    for ( *p; *p != '\0'; ++p) {
        int index = get_index(*p); 
        if (index != -1) {
            letter_counts[index]++;
        }
    }

    return letter_counts;
}

int main() {
    char text[1000];

    printf("Metni girin: ");
    gets(text); 

   
    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

  
    int *letter_counts = calculate_letter_counts(text);

	int i;
    printf("Metindeki harf sayilari:\n");
    for ( i = 0; i < 26; ++i) {
        printf("%c: %d\n", 'a' + i, letter_counts[i]);
    }

    free(letter_counts);

    return 0;
}

