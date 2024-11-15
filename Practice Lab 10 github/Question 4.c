#include <stdio.h>
#include <string.h>

struct Flight {
    char flightNumber[10];
    char departureCity[50];
    char arrivalCity[50];
    char departureTime[20];
    char arrivalTime[20];
    int availableSeats;
};

void addFlight(struct Flight flights[], int count) {
    for (int i = 0; i < count; i++) {
        printf("\nEnter flight details for flight %d:\n", i + 1);
        printf("Flight Number: ");
        scanf(" %[^\n]", flights[i].flightNumber);
        printf("Departure City: ");
        scanf(" %[^\n]", flights[i].departureCity);
        printf("Arrival City: ");
        scanf(" %[^\n]", flights[i].arrivalCity);
        printf("Departure Time (e.g., 2024-11-15 10:30): ");
        scanf(" %[^\n]", flights[i].departureTime);
        printf("Arrival Time (e.g., 2024-11-15 12:00): ");
        scanf(" %[^\n]", flights[i].arrivalTime);
        printf("Available Seats: ");
        scanf("%d", &flights[i].availableSeats);
    }
}

void displayAvailableFlights(struct Flight flights[], char depCity[], char arrCity[], int count) {
    int found = 0;
    printf("\nAvailable flights from %s to %s:\n", depCity, arrCity);
    for (int i = 0; i < count; i++) {
        if (strcmp(flights[i].departureCity, depCity) == 0 && strcmp(flights[i].arrivalCity, arrCity) == 0 && flights[i].availableSeats > 0) {
            printf("Flight Number: %s, Departure Time: %s, Arrival Time: %s, Available Seats: %d\n",
                flights[i].flightNumber, flights[i].departureTime, flights[i].arrivalTime, flights[i].availableSeats);
            found = 1;
        }
    }
    if (!found) {
        printf("No available flights found from %s to %s.\n", depCity, arrCity);
    }
}

void bookSeat(struct Flight *flight) {
    if (flight->availableSeats > 0) {
        flight->availableSeats--;
        printf("Remaining seats: %d\n", flight->availableSeats);
    } else {
        printf("no available seats\n");
    }
}

int main() {
    int count;
    printf("How many flights to add? ");
    scanf("%d", &count);

    struct Flight flights[count];
    addFlight(flights, count);

    int choice;
    do {
        printf("1. available flights\n");
        printf("2. Book a seat on a flight\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            char depCity[50], arrCity[50];
            printf("departure city: ");
            scanf(" %[^\n]", depCity);
            printf("arrival city: ");
            scanf(" %[^\n]", arrCity);
            displayAvailableFlights(flights, depCity, arrCity, count);
        } else if (choice == 2) {
            char flightNumber[10];
            printf("flight number to book: ");
            scanf(" %[^\n]", flightNumber);
            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(flights[i].flightNumber, flightNumber) == 0) {
                    bookSeat(&flights[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("No flight found\n");
            }
        }
    } while (choice != 3);

    return 0;
}

