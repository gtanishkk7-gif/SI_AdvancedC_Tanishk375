#include<stdio.h>
int main(){
    int Attended_classes, Absent_classes, Total_classes, Days, Classes_per_day;
    float Percentage;
    printf("Enter the total no. of days: ");
    scanf("%d", &Days);
    printf("Enter the number of classes per day: ");
    scanf("%d", &Classes_per_day);
    Total_classes = Days * Classes_per_day;
    printf("Total classes: %d\n", Total_classes);
    printf("Enter the no. of classes you were absent in: ");
    scanf("%d", &Absent_classes);
    Attended_classes = Total_classes - Absent_classes;
    printf("Attended classes: %d\n", Attended_classes);
    Percentage = (float)(Attended_classes) / Total_classes * 100;
    printf("Your attendance percentage is: %.2f\n", Percentage);
    if(Percentage >= 75){
        printf("You are eligible for Exams");
    }
    else{
        printf("You are not eligible for Exams");
    }
    return 0;
}