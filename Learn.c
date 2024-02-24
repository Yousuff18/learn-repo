#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct std{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()

{
    /*giving all the components in std to variables std1, std2*/
    struct std std1, std2;
    /*attributes of std1*/
    strcpy(std1.name, "Sharon");
    strcpy(std1.major, "EEE");
    std1.age = 22;
    /*attributes of std2*/
    std1.gpa = 3.2;
    strcpy(std2.name, "Laura");
    strcpy(std2.major, "CSE");
    std2.age = 20;
    std2.gpa = 4.8;
    /*displaying output for the given values*/
    printf("\nname:%s\n", std1.name);
    printf("major:%s\n", std1.major);
    printf("age:%d\n", std1.age);
    printf("gpa:%.1f\n", std1.gpa);

    printf("\nname:%s\n", std2.name);
    printf("major:%s\n", std2.major);
    printf("age:%d\n", std2.age);
    printf("gpa:%.1f\n\n", std2.gpa);


    
    return 0;
}