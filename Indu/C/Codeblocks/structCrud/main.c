#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char street[50];
    char city[20];
    char district[20];
    char state[30];
    char country[30];
} Address;

typedef struct {
    int roll;
    char name[100];
    Date dob;
    Address address;
    int bengali;
    int english;
    int math;
} Student;

void printDate(Date);
void printAddress(Address);
void printStudent(Student);
void printSudentList(Student*, int*);
void printMenu();
int getChoice();
Date scanDate();
Address scanAddress();
Student scanStudent();
void insertStudent(Student*, int*);
void updateStudent(Student*, int*);
void deleteStudent(Student*, int*);
int searchStudent(Student*, int*);
void saveFile(Student*,int*);

int main()
{
    Student arr[MAX_SIZE];
    int lastPointer = -1;
    int choice;

    while(1){
        printMenu();
        choice = getChoice();

        if(choice == 1){
            printSudentList(arr,&lastPointer);
        }else if(choice == 2){
            insertStudent(arr,&lastPointer);
        }else if(choice == 3){
            updateStudent(arr,&lastPointer);
        }else if(choice == 4){
            deleteStudent(arr,&lastPointer);
        }else if(choice == 5){
            searchStudent(arr,&lastPointer);
        }else if(choice == 6){
            saveFile(arr, &lastPointer);
        }else if(choice == 7){
            openFile(arr, &lastPointer);
        }else if(choice == 9){
            printf("\n");
            printf("*******************************************************\n");
            printf("*           Thank you for using our app               *\n");
            printf("*                     Bye Bye                         *\n");
            printf("*******************************************************\n");
            exit(1);
        }else{
            printf("\n---- Error: Kindly put the choice given in the menu ----\n");

        }
    }


    return 0;
}

void openFile(Student* arr, int* lastPointer){
    char filename[100];
    int records;
    printf("Enter filename to open: ");
    scanf("%s",filename);
    fflush(stdin);
    FILE *fp = fopen(filename,"r");
    if(fp){

        char name[100];
        fscanf(fp,"%d\n",&records);
        for(int i=0; i<records; i++){
            fscanf(fp,"%d|",&arr[i].roll);
            fscanf(fp,"%[^|]s",&arr[i].name);
            fscanf(fp,"|");
            fscanf(fp,"%d-%d-%d|",&arr[i].dob.day,&arr[i].dob.month,&arr[i].dob.year);

            fscanf(fp,"%[^,]s",&arr[i].address.street);
            fscanf(fp,",");
            fscanf(fp,"%[^,]s",&arr[i].address.city);
            fscanf(fp,",");
            fscanf(fp,"%[^,]s",&arr[i].address.district);
            fscanf(fp,",");
            fscanf(fp,"%[^,]s",&arr[i].address.state);
            fscanf(fp,",");
            fscanf(fp,"%[^|]s",&arr[i].address.country);
            fscanf(fp,"|");

            fscanf(fp,"%d|",&arr[i].bengali);
            fscanf(fp,"%d|",&arr[i].english);
            fscanf(fp,"%d",&arr[i].math);
            fscanf(fp,"\n");
        }
    }
    *lastPointer=records-1;
    fclose(fp);
    printf("\nFile opened successfully!!\n");
}

void saveFile(Student* arr, int* lastPointer){
    char filename[100];
    printf("Enter filename to save: ");
    scanf("%s",filename);
    fflush(stdin);
    FILE *fp = fopen(filename,"w");
    if(fp){
        fprintf(fp,"%d\n",(*lastPointer)+1);
        for(int i=0; i<=*lastPointer; i++){
            fprintf(fp,"%d|",arr[i].roll);
            fprintf(fp,"%s|",arr[i].name);
            fprintf(fp,"%d-%d-%d|",arr[i].dob.day,arr[i].dob.month,arr[i].dob.year);
            fprintf(fp,"%s,%s,%s,%s,%s|",arr[i].address.street,arr[i].address.city,arr[i].address.district,arr[i].address.state,arr[i].address.country);
            fprintf(fp,"%d|",arr[i].bengali);
            fprintf(fp,"%d|",arr[i].english);
            fprintf(fp,"%d",arr[i].math);
            fprintf(fp,"\n");
        }
        printf("\n File saved successfully!!\n");
    }else{
        printf("Unable to open file %s\nTry again!!\n",filename);
    }
    fclose(fp);
}

int searchStudent(Student* arr, int* lastPointer){
    int choice,roll;
    char name[100];

    printf("\nSearch\n-------------------\n");
    printf("1. Press 1 to search by name\n");
    printf("2. Press 2 to search by roll\n");
    choice = getChoice();

    if(choice == 1){
        printf("Enter name to search: ");
        scanf("%[^\n]s",name);
        fflush(stdin);

        for(int i=0; i<=*lastPointer; i++){
            if(strcmp(arr[i].name,name)==0){
                printf("Student found at index %d.\n",i);
                printStudent(arr[i]);
                printf("\n");
                return i;
            }
        }

        printf("\nStudent not found by this name %s\n",name);
    }else if(choice == 2){
        printf("Enter roll to search: ");
        scanf("%d",&roll);
        fflush(stdin);

        for(int i=0; i<=*lastPointer; i++){
            if(arr[i].roll == roll){
                printf("Student found at index %d.\n",i);
                printStudent(arr[i]);
                printf("\n");
                return i;
            }
        }

        printf("\nStudent not found by this roll %s\n",roll);
    }else{
        printf("\n---Unable to search, user entered wrong choice ---\n");
    }

}

void deleteStudent(Student* arr, int* lastPointer){
    int index;
    printf("Delete\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);
    fflush(stdin);

    if(*lastPointer<0){
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
    if(index > *lastPointer){
        printf("Unable to delete!! -- invalid index given");
        return;
    }


    if( index > *lastPointer){
        printf("Invalid index !!....");
        return;
    }else if(index <= *lastPointer){
        char confirm;
        printf("\nAre you sure to delete the student?(y/n): ");
        scanf("%c",&confirm);
        fflush(stdin);
        if(confirm == 'Y' || confirm == 'y'){
            for(int i=index;i < *lastPointer;i++){
                arr[i]=*(arr+i+1);
            }
            (*lastPointer)--;
            printf("\nStudent deleted successfully!!\n");
        }else{
            printf("\nDelete aborted by the user!!\n");
        }

    }

}

void updateStudent(Student* arr, int *lastPointer){

    int index,math,english,bengali;
    int choice;
    char name[100];
    printf("Update into array\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);

     if(index > *lastPointer){
        printf("Unable to update!! -- invalid index given");
        return;
    }

    if(index<0){
        printf("Unable to update!! -- index must be greater than or equal to 0\n");
        return;
    }

    if(index >= MAX_SIZE){
        printf("Unable to update!! -- Array max size is %d",MAX_SIZE);
        return;
    }

    ////another menu....what to update
    printf("\n1. Press 1 to update Name.");
    printf("\n2. Press 2 to update Bengali marks.");
    printf("\n3. Press 3 to update English marks.");
    printf("\n4. Press 4 to update Math marks.");
    choice = getChoice();

    if(choice == 1){
       printf("Enter new name: ");
       scanf("%[^\n]s",name);
       strcpy(arr[index].name,name);
       printf("\nName is updated successfully!!\n");
    }else if(choice == 2){
       printf("Enter new Bengali marks: ");
       scanf("%d",bengali);
       arr[index].bengali = bengali;
       printf("\n Bengali marks is updated successfully!!\n");
    }else if(choice == 3){
       printf("Enter new English marks: ");
       scanf("%d",english);
       arr[index].english = english;
       printf("\nEnglish marks is updated successfully!!\n");
    }else if(choice == 4){
       printf("Enter new Math marks: ");
       scanf("%d",math);
       arr[index].math = math;
       printf("\nMath marks is updated successfully!!\n");
    }else{
        printf("\n----Unable to update for wrong choice. Try again----\n");
    }
}


void insertStudent(Student* arr, int *lastPointer){
    int index;

    if(*lastPointer >= MAX_SIZE-1){
        printf("-- Unable to insert!! -- Array is full\n");
        return;
    }

    printf("Insert into array\n-------------------------------\n");
    printf("Index:");
    scanf("%d",&index);

    if(index<0){
        printf("-- Unable to insert!! -- index must be greater than or equal to 0\n");
        return;
    }

    if(index >= MAX_SIZE){
        printf("-- Unable to insert!! -- Array max size is %d",MAX_SIZE);
        return;
    }

    Student student = scanStudent();
    (*lastPointer)++;
    if(index>*lastPointer){
        arr[*lastPointer]=student;
    }else{
        for(int i=*lastPointer; i>index; i--){
            arr[i]=arr[i-1];
        }
        arr[index] = student;
    }

    printf("\nStudent inserted successfully!!\n");

}

void printDate(Date date){
    printf("%d-%d-%d",date.day,date.month,date.year);
}
void printAddress(Address address){
    printf("%s, %s, %s, %s, %s",address.street,address.city,address.district,address.state,address.country);
}
void printStudent(Student student){
    printf("%d  %s  ",student.roll,student.name);
    printDate(student.dob);
    printf("  ");
    printAddress(student.address);
    printf("  %d  %d  %d",student.bengali,student.english,student.math);
}

void printSudentList(Student* arr, int* lastPointer){
    printf("\n======================================================\n");
    printf("Student List");
    printf("\n------------------------------------------------------\n");
    printf("Roll No  Name    DOB   Address  Bengali English Math");
    printf("\n------------------------------------------------------\n");

    if(*lastPointer>=0){
        for(int i=0; i<=*lastPointer; i++){
            printStudent(arr[i]);
            printf("\n");
        }
    }else{
        printf("Student List is empty!!");
    }


    printf("\n======================================================\n");
}
void printMenu(){
    printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("                      MENU");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("1. Print Student List\n");
    printf("2. Insert Student\n");
    printf("3. Update Student\n");
    printf("4. Delete Student\n");
    printf("5. Search Student\n");
    printf("6. Save file\n");
    printf("7. Open file\n");
    printf("9. Exit Application");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}

int getChoice(){
    int choice;
    printf("Enter your choice: ");
    int g = scanf("%d",&choice);
    fflush(stdin);
    if(g == 0){
        return -1;
    }else{
        return choice;
    }

}


Date scanDate(){
    Date date;

    printf("Enter day: ");
    scanf("%d",&date.day);
    fflush(stdin);

    printf("Enter month: ");
    scanf("%d",&date.month);
    fflush(stdin);

    printf("Enter year: ");
    scanf("%d",&date.year);
    fflush(stdin);

    return date;
}

Address scanAddress(){
    Address address;

    printf("Enter street: ");
    scanf("%[^\n]s",&address.street);
    fflush(stdin);

    printf("Enter city: ");
    scanf("%[^\n]s",&address.city);
    fflush(stdin);

    printf("Enter district: ");
    scanf("%[^\n]s",&address.district);
    fflush(stdin);

    printf("Enter state: ");
    scanf("%[^\n]s",&address.state);
    fflush(stdin);

    printf("Enter country: ");
    scanf("%[^\n]s",&address.country);
    fflush(stdin);

    return address;
}

Student scanStudent(){
    Student student;

    printf("Enter roll: ");
    scanf("%d",&student.roll);
    fflush(stdin);

    printf("Enter name: ");
    scanf("%[^\n]s",&student.name);
    fflush(stdin);

    printf("Enter Date Of Birth--\n");
    student.dob = scanDate();

    printf("Enter Address--\n");
    student.address = scanAddress();

    printf("Enter marks for Bengali: ");
    scanf("%d",&student.bengali);
    fflush(stdin);

    printf("Enter marks for English: ");
    scanf("%d",&student.english);
    fflush(stdin);

    printf("Enter marks for Math: ");
    scanf("%d",&student.math);
    fflush(stdin);

    return student;
}
