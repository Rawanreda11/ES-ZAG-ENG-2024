#include <stdio.h>

void setBit(int number, int bitNum){
    int xNum;
    xNum =(number | (1 << bitNum));
    printf("SET_BIT (%d, %d) -> %d ",number,bitNum, xNum ); 
}
void clearBit(int number, int bitNum){
    int xNum;
    xNum = number & (~(1 << bitNum));
    printf("CLEAR_BIT (%d, %d) -> %d ",number,bitNum, xNum ); 
}
void toggleBit(int number, int bitNum){
    int xNum;
    xNum = number ^(1 << bitNum);
    printf("TOGGLE_BIT (%d, %d) -> %d ",number,bitNum, xNum ); 
}
void readBit(int number, int bitNum){
    int xNum;
    xNum = (number >> bitNum) & 1;
    printf("READ_BIT (%d, %d) -> %d ",number,bitNum, xNum ); 
}

void main(){
    int number;
    printf("Enter Unsigned Number:\n");
    scanf("%d",&number);

    int bitNum;
    printf("Enter Bit Number:\n");
    scanf("%d",&bitNum);

    int funId;
    printf("Choose:\n1-Set \n2-Clear \n3-Toggle \n4-Read\n");
    printf("Enter function id:\n");
    scanf("%d",&funId);

    switch(funId) {
    case 1:
        setBit(number, bitNum);
        break;
    case 2:
        clearBit(number, bitNum);
        break;
    case 3:
        toggleBit(number, bitNum);
        break;
    case 4:
        readBit(number, bitNum);
        break;
    default:
    printf("bitNum");
}
}
