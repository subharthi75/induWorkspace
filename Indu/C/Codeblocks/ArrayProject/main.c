#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void printMenu();
int getMenuChoice();
void insertNumber();
void printNumber();
void updateNumber();
void deleteNumber();
int searchNumber();

int arr[MAX_SIZE];
int lastPointer=-1;

int main()
{

    while(1){
        int choice=getMenuChoice();

        if(choice == -36){
            printf("\nKindly press the value shown in menu ...\n");
            continue;
        }

        if(choice==1){
            insertNumber();
        }else if(choice==2){
            printNumber();
        }else if(choice==3){
           updateNumber();
        }else if(choice==4){
            deleteNumber();
        }else if(choice==5){
           searchNumber();
        }else if(choice == 9){
            exit(1);
        }else{
            printf("\nWrong input!! Try again...\n");
        }
    }

}

int getMenuChoice(){
    printMenu();
    int num;
    printf("Enter your choice: ");
    int g=scanf("%d",&num);
    fflush(stdin);
    if(g == 0){
        return -36;
    }else{
        return num;
    }

}
void printMenu(){
    printf("\nMENU\n==============================\n");
    printf("Insert a number: press 1 \n");
    printf("Print all numbers: press 2 \n");
    printf("Update a number: press 3 \n");
    printf("Delete a number: press 4 \n");
    printf("Search a number: press 5 \n");
    printf("Exit: press 9 \n");
}

void insertNumber(){
    int index,number;
    printf("Insert into array\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);
    printf("Number:");
    scanf("%d",&number);

    if(index<0){
        printf("Unable to insert!! -- index must be greater than or equal to 0\n");
        return;
    }

    if(index >= MAX_SIZE){
        printf("Unable to insert!! -- Array max size is %d",MAX_SIZE);
        return;
    }

    if(lastPointer >= MAX_SIZE-1){
        printf("Unable to insert!! -- Array is full\n");
        return;
    }

    lastPointer++;
    if(index>lastPointer){
        arr[lastPointer]=number;
    }else{
        for(int i=lastPointer; i>index; i--){
            arr[i]=arr[i-1];
        }
        arr[index] = number;
    }

}
void printNumber(){
    printf("\nArray Value\n===========================\n");
    for(int i=0;i<=lastPointer;i++){
        printf("%d ",arr[i]);
    }
    if(lastPointer<0){
        printf("Empty array !!");
    }
    printf("\n===========================\n");
}
void updateNumber(){
    int index,number;
    printf("Update into array\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);
    printf("Number:");
    scanf("%d",&number);

    if(index<0){
        printf("Unable to insert!! -- index must be greater than or equal to 0\n");
        return;
    }

    if(index >= MAX_SIZE){
        printf("Unable to insert!! -- Array max size is %d",MAX_SIZE);
        return;
    }
    if(index>lastPointer){
        printf("Unable to insert!! -- invalid index given");
        return;
    }
    arr[index] = number;
}
void deleteNumber(){
    int index;
    printf("Delete\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);

    if(lastPointer<0){
        printf("Empty array!!  ");
    }

    if(index<0){
        printf("Unable to delete!! -- index must be greater than or equal to 0\n");
        return;
    }

    if(index >= MAX_SIZE){
        printf("Unable to delete!! -- Array max size is %d",MAX_SIZE);
        return;
    }
    if(index>lastPointer){
        printf("Unable to insert!! -- invalid index given");
        return;
    }


    if( index>lastPointer){
        printf("Invalid index !!....");
        return;
    }else if(index<=lastPointer){
        for(int i=index;i<lastPointer;i++){
            arr[i]=arr[i+1];
        }
        lastPointer--;
    }

}
int searchNumber(){
    int search;
    printf("Search\n---------------------\n");
    printf("Number:");
    scanf("%d",&search);

    if(lastPointer<0){
        printf("Empty array!!  ");
    }

    for(int i=0;i<=lastPointer;i++){
        if(arr[i]==search){
            printf("found the number in %d ",i);
            return i;
        }
    }
    printf("Not found!...");
    return -1;
}
