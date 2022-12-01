#include <stdio.h>

void displaySet(int *myArray, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", myArray[i]);
    }
}

int isNumberPresent(int *myArray, int number, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (myArray[i] == number)
        {
            return 1;
        }
    }
    return 0;
}

void main()
{

    int set1[] = {1, 2, 3, 4, 5};
    int set2[] = {2, 9, 1, 7};

    int sizeOfSet1 = sizeof(set1) / sizeof(set1[0]);
    int sizeOfSet2 = sizeof(set2) / sizeof(set2[0]);
    int sizeOfSet3 = sizeOfSet1 + sizeOfSet2;

    int set3[sizeOfSet3];
    int pointerToResult = 0;

    // Union
    for (int i = 0; i < sizeof(set1) / sizeof(set1[0]); i++)
    {
        set3[i] = set1[i];
        pointerToResult++;
    }

    for (int i = 0; i < sizeOfSet2; i++)
    {
        if (!isNumberPresent(set3, set2[i], sizeOfSet2))
        {
            set3[pointerToResult] = set2[i];
            pointerToResult++;
        }
    }

    printf("The Union of Set1 and Set2 is: \n");
    displaySet(set3, pointerToResult);

    // Intersection
    printf("The Intersection of Set1 and Set2 is: \n");
    for (int i = 0; i < sizeOfSet2; i++)
    {
        if (isNumberPresent(set1, set2[i], sizeOfSet2))
        {
            printf("%d\n", set2[i]);
        }
    }

    // Set Difference
    printf("The Set Difference of Set1 and Set2 is: \n");
    for (int i = 0; i < sizeOfSet1; i++)
    {
        if (!isNumberPresent(set2, set1[i], sizeOfSet1))
        {
            printf("%d\n", set1[i]);
        }
    }

    // Symmetric difference
    printf("The Symmetric Difference of Set1 and Set2 is: \n");
    for (int i = 0; i < sizeOfSet1; i++)
    {
        if (!isNumberPresent(set2, set1[i], sizeOfSet1))
        {
            printf("%d\n", set1[i]);
        }
    }
   
      for (int i = 0; i < sizeOfSet2; i++)
    {
        if (!isNumberPresent(set1, set2[i], sizeOfSet2))
        {
            printf("%d\n", set2[i]);
        }
    }
   
}