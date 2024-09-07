#include <stdio.h>

//Q-4

 main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        
		printf("array[%d] = ",i);
		scanf("%d", &array[i]);
    }

    int *p[n];

    printf("The squares of the elements are:\n");
    for (int i = 0; i < n; i++) {
    	
        p[i] = &array[i];
        printf("%d\n",*p[i] * *p[i]);
    }

}
