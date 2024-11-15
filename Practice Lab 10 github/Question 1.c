#include <stdio.h>
#include <stdlib.h>

struct Box {
    int weight;
    int numNestedBoxes;
    struct Box* nestedBoxes;
};

int calculateTotalWeight(struct Box* box) {
    int totalWeight = box->weight;
    for (int i = 0; i < box->numNestedBoxes; i++) {
        totalWeight += calculateTotalWeight(&box->nestedBoxes[i]);
    }
    return totalWeight;
}

void inputBox(struct Box* box) {
    printf("Enter the weight of the box: ");
    scanf("%d", &box->weight);

    printf("Enter the number of nested boxes: ");
    scanf("%d", &box->numNestedBoxes);

    if (box->numNestedBoxes > 0) {
        box->nestedBoxes = (struct Box*)malloc(box->numNestedBoxes * sizeof(struct Box));

        for (int i = 0; i < box->numNestedBoxes; i++) {
            printf("\nEnter details for nested box %d:\n", i + 1);
            inputBox(&box->nestedBoxes[i]);
        }
    }
}

int main() {
    struct Box outerBox;
    printf("Enter details for the outer box:\n");
    inputBox(&outerBox);
    int totalWeight = calculateTotalWeight(&outerBox);
    printf("\nTotal weight of the box is: %d\n", totalWeight);
    free(outerBox.nestedBoxes);//deallocate
    return 0;
}

