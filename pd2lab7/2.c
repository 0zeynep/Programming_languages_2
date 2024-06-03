#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int * search_keyword(const char * sentence, const char * keyword, int *count) {
    int *indices = NULL;
    int i, j;

   
    *count = 0;
    for (i = 0; sentence[i]!= '\0'; i++) {
        if (sentence[i] == keyword[0]) {
            for (j = 0; keyword[j]!= '\0'; j++) {
                if (sentence[i + j]!= keyword[j]) {
                    break;
                }
            }
            if (keyword[j] == '\0') {
                (*count)++;
            }
        }
    }

   
    indices = (int *)calloc(*count, sizeof(int));
   

    
    i = 0;
    int k,l;
    for ( k = 0; k < *count; k++) {
        for (j = i; sentence[j]!= '\0'; j++) {
            if (sentence[j] == keyword[0]) {
                for ( l = 0; keyword[l]!= '\0'; l++) {
                    if (sentence[j + l]!= keyword[l]) {
                        break;
                    }
                }
                if (keyword[l] == '\0') {
                    indices[k] = j;
                    i = j + 1;
                    break;
                }
            }
        }
    }

    return indices;
}

int main() {
    char sentence[256];
    char keyword[256];
    int *indices;
    int count;

    printf("Sentence: ");
    gets(sentence);


    printf("Search word: ");
    gets(keyword);
 

    indices = search_keyword(sentence, keyword, &count);
	int i;
    if (indices!= NULL) {
        printf("%s is found ", keyword);
        for ( i = 0; i < count; i++) {
            printf("%d. index ", indices[i]);
        }
        printf(".\n");

        
        free(indices);
    }

    return 0;
}

