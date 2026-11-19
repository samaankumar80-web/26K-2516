#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
    char username[50], password[50];
    char fileUser[50], filePass[50];
    int found = 0;

    printf("Enter Username: ");
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0';

    printf("Enter Password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: credentials.txt not found!\n");
        return 1;
    }

    // Read each saved username/password pair until EOF
    while (fscanf(fptr, "%49s %49s", fileUser, filePass) == 2) {
        if (strcmp(username, fileUser) == 0 && strcmp(password, filePass) == 0) {
            found = 1;
            braeak;
        }
    }

    if (found) {
        printf("Access Granted!\n");
    } else {
        printf("Access Denied!\n");
    }

    fclose(fptr);
    return 0;
}