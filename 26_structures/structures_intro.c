#include <stdio.h>
#include <string.h> // strcpy

#define NAME_SIZE 30
#define STREET_NAME 30
#define CITY_NAME 40
#define CLASS_SIZE 48

// Create the address structure
typedef struct {
    char street[STREET_NAME];
    char city[CITY_NAME];
    int zip_code;
} Address;

// Create a new type (structure)
struct student {
    // Data members
    char first_name[NAME_SIZE];
    char last_name[NAME_SIZE];
    unsigned age;
    Address home_address;
};


typedef struct student Student;

typedef struct {
    int class_size;
    Student student_list[CLASS_SIZE];
} Class;


// Function prototype (accepting a structure)
void print(struct student s); // Not efficient
void printStudentPointer(const struct student* s);


Address createAddress(void);
void printAddress(const Address* adr);
void printClass(const Class* class);


int main(void) {
    int a; // Creates an object of type int named a

    struct student stud; // Creates an object of type struct student named stud

    // Access and initialize the data members
    strcpy (stud.first_name, "Bobby"); // Have to use strcpy or else only copy first address of array. Copy each array element.
    strcpy (stud.last_name, "Barnett");
    stud.age = 20;

    print(stud);

    ////////////
    int b = 1;
    int* pB = &b;
    *pB = 10; // Access n through pB

    // Create a pointer to a student
    struct student* stud_ptr = &stud;

    printStudentPointer(stud_ptr);

    // Test address
    //Address address = createAddress();
    //printAddress(&address);

    // Create a student (initializer list)
    Student aStudent = {.first_name = "Michael", .last_name = "Myers", .age = 25, .home_address.street = "Orange", .home_address.city = "Miami", .home_address.zip_code = 31845};
    printStudentPointer(&aStudent);

    Student bStudent = {"Jack", "Wright", 21, {"Pine", "Tampa", 34532}};
    printStudentPointer(&bStudent);

    // Create the class object
    Class COP2271;
    COP2271.class_size = 0;
    COP2271.student_list[0] = stud;
    COP2271.class_size++;
    COP2271.student_list[1] = aStudent;
    COP2271.class_size++;
    COP2271.student_list[2] = bStudent;
    COP2271.class_size++;

    printClass(&COP2271);

    return 0;
}

void print(struct student s) {
    printf("First name:\t%s\n", s.first_name);
    printf("Last name:\t%s\n", s.last_name);
    printf("Age:\t\t%u\n", s.age);
}

void printStudentPointer(const struct student* s) {
    // Works but inefficient
    //printf("First name:\t%s\n", (*s).first_name);
    //printf("Last name:\t%s\n", (*s).last_name);
    //printf("Age:\t\t%u\n", (*s).age);

    // Specifically for pointers
    printf("First name:\t%s\n", s->first_name);
    printf("Last name:\t%s\n", s->last_name);
    printf("Age:\t\t%u\n", s->age);
    printAddress(&s->home_address);
}

Address createAddress(void) {
    Address adr;
    printf("Enter the street: ");
    scanf("%s", adr.street);
    printf("Enter the city: ");
    scanf("%s", adr.city);
    printf("Enter the zip code: ");
    scanf("%d", &adr.zip_code);

    return adr;
}

void printAddress(const Address* adr) {
    printf("%s, %s, %d\n", adr->street, adr->city, adr->zip_code);
}

void printClass(const Class* class) {
    for (int i = 0; i < class->class_size; i++) {
        printStudentPointer(&class->student_list[i]);
    }
}