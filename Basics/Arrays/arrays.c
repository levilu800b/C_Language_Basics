#include <stdio.h>

int main () {

    int grades[100];
    grades[0] = 12;

    printf("%d\n", grades[0]);

    int grades2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d\n", grades2[4]);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int grades[3]; // Define the grades variable here

//     grades[0] = 80;
//     grades[1] = 85;
//     grades[2] = 90;

//     int average = (grades[0] + grades[1] + grades[2]) / 3;
//     printf("The average of the 3 grades is: %d", average);

//     return 0;
// }