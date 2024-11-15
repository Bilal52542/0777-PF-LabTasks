#include <stdio.h>
#include <string.h>

struct Book {
    char title[50], author[50], isAvailable[10];
    int ISBN, publicationYear;
};

void addBooks(struct Book collection[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter book title: ");
        scanf(" %[^\n]", collection[i].title);
        printf("Enter book author: ");
        scanf(" %[^\n]", collection[i].author);
        printf("Enter ISBN: ");
        scanf("%d", &collection[i].ISBN);
        printf("Enter publication year: ");
        scanf("%d", &collection[i].publicationYear);
        strcpy(collection[i].isAvailable, "yes");
    }
}

void findByTitle(struct Book collection[], char searchTitle[], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(collection[i].title, searchTitle) == 0) {
            printf("Book found: %s by %s, ISBN: %d, Year: %d, Available: %s\n", collection[i].title, collection[i].author, collection[i].ISBN, collection[i].publicationYear, collection[i].isAvailable);
            return;
        }
    }
    printf("No book found with title: %s\n", searchTitle);
}

void findByAuthor(struct Book collection[], char searchAuthor[], int count) {
    for (int i = 0; i < count; i++) {
        if (strcmp(collection[i].author, searchAuthor) == 0) {
            printf("Book found: %s by %s, ISBN: %d, Year: %d, Available: %s\n", collection[i].title, collection[i].author, collection[i].ISBN, collection[i].publicationYear, collection[i].isAvailable);
            return;
        }
    }
    printf("No book found by author: %s\n", searchAuthor);
}

void changeAvailability(struct Book *book, const char *status) {
    strcpy(book->isAvailable, status);
}

int main() {
    int count;
    printf("How many books to add? ");
    scanf("%d", &count);
   
    struct Book collection[count];
    addBooks(collection, count);

    int choice;
    do {
        printf("\n1. Search by Title\n2. Search by Author\n3. Change Availability\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            char title[50];
            printf("Enter title to search: ");
            scanf(" %[^\n]", title);
            findByTitle(collection, title, count);
        } else if (choice == 2) {
            char author[50];
            printf("Enter author to search: ");
            scanf(" %[^\n]", author);
            findByAuthor(collection, author, count);
        } else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                char status[10];
                printf("Enter new availability status (yes/no): ");
                scanf("%s", status);
                changeAvailability(&collection[i], status);
                printf("Availability updated for book: %s\n", collection[i].title);
                break;
            }
        }
    } while (choice != 4);

    return 0;
}

