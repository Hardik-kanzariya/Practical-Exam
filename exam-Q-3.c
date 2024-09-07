#include <stdio.h>

//Q-3

void reverseString(char str[]) {
    int start = 0;
    int end = 0;

    while (str[end] != '\0') {
        end++;
    }
    end--; 

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

 main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);


}
