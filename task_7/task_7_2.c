#include <stdio.h>

int main() {
    int classA[] = {20,35,60,82,54,100,92,44,76,50};
    int classB[] = {15,47,88,59,72,99,24,64,38,32};
    int classC[] = {14,87,36,52,44,93,100,61,49,56};

    int highestA = classA[0];
    int highestB = classB[0];
    int highestC = classC[0];

    int lowestA = classA[0];
    int lowestB = classB[0];
    int lowestC = classC[0];

    //Finding passed students
        int a = 0;
        int b = 0;
        int c = 0;
    for (int i = 0; i < 10; i++){
        if(classA[i] >= 50){
            a++;
        }
        if(classB[i] >= 50){
            b++;
        }
        if(classC[i] >= 50){
            c++;
        }
    }
        int passed = a + b + c;

    //Finding failed students
        int d = 0;
        int e = 0;
        int f = 0;
    for (int i = 0; i < 10; i++){
        if(classA[i] < 50){
            d++;
        }
        if(classB[i] < 50){
            e++;
        }
        if(classC[i] < 50){
            f++;
        }
    }
        int failed = d + e + f;

    // Finding the highest grade
    for(int j = 0; j < 10; j++){
        if(classA[j] > highestA){
            highestA = classA[j];
        }
        if(classB[j] > highestB){
            highestB = classB[j];
        }
        if(classC[j] > highestC){
            highestC = classC[j];
        }
    }
    // Finding the highest grade in the classes
    int h = highestA > highestB ? (highestA > highestC ? highestA : highestC) : (highestB > highestC ? highestB : highestC);
    
    // Finding the lowest grade
    for(int j = 0; j < 10; j++){
        if(classA[j] < lowestA){
            lowestA = classA[j];
        }
        if(classB[j] < lowestB){
            lowestB = classB[j];
        }
        if(classC[j] < lowestC){
            lowestC = classC[j];
        }
    }
    // Finding the highest grade in the classes
    int l = lowestA < lowestB ? (lowestA < lowestC ? lowestA : lowestC) : (lowestB < lowestC ? lowestB : lowestC);

    //Finding average
    float countA = 0;
    float countB = 0;
    float countC = 0;
    for (int i = 0; i < 10; i++){
        countA += classA[i];
        countB += classB[i];
        countC += classC[i];
    }
    float avgA = countA / 10;
    float avgB = countB / 10;
    float avgC = countC / 10;
    float totalavg = avgA + avgB + avgC;

    printf("The number of passed students: %d\n", passed);
    printf("The number of failed students: %d\n", failed);
    printf("The highest grade is: %d\n", h);
    printf("The lowest grade is: %d\n", l);
    printf("The average in first class is: %f\n", avgA);
    printf("The average in second class is: %f\n", avgB);
    printf("The average in third class is: %f\n", avgC);
    printf("The total average is: %f\n", totalavg);

    return 0;
}