#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentInfo {
       char first_name[20];
       char last_name[20];
       int credit_hours_completed;
       float gpa;
   };
void sortFile(struct studentInfo list[], int s);



int main() {
    int n = 6;
    struct studentInfo Student[n];


    strcpy(Student[1].first_name, "Jeffy");
    strcpy(Student[1].last_name, "Steelflex");
    Student[1].credit_hours_completed = 20;
    Student[1].gpa = 3.7;

    strcpy(Student[2].first_name, "Lee");
    strcpy(Student[2].last_name, "Madison");
    Student[2].credit_hours_completed = 90;
    Student[2].gpa = 3.1;

    strcpy(Student[3].first_name, "Jennifer");
    strcpy(Student[3].last_name, "Jess");
    Student[3].credit_hours_completed = 65;
    Student[3].gpa = 2.5;

    strcpy(Student[4].first_name, "Lans");
    strcpy(Student[4].last_name, "Waxington");
    Student[4].credit_hours_completed = 12;
    Student[4].gpa = 1.4;

    strcpy(Student[5].first_name, "Zack");
    strcpy(Student[5].last_name, "Pol");
    Student[5].credit_hours_completed = 50;
    Student[5].gpa = 3.7;


  for (int i = 1; i < n; i++) {
  printf("Student %d's first name is: %s\n",i,Student[i].first_name);
  printf("Student %d's last name is: %s\n",i,Student[i].last_name);
  printf("Student %d completed this amount of credit hours: %d\n",i,Student[i].credit_hours_completed);
  printf("Student %d's GPA is: %.2f\n \n",i,Student[i].gpa);

  }
  printf("\n\n After sorting \n\n");

  sortFile(Student, 6);
    for (int i = 1; i < n; i++) {
      printf("Student %d's first name is: %s\n",i,Student[i].first_name);
      printf("Student %d's last name is: %s\n",i,Student[i].last_name);
      printf("Student %d completed this amount of credit hours: %d\n",i,Student[i].credit_hours_completed);
      printf("Student %d's GPA is: %.2f\n \n",i,Student[i].gpa);

  }
  return 0;

}

  void sortFile(struct studentInfo list[80], int s)
{
    int i, j;
    struct studentInfo temp;

    for (i = 0; i < s - 1; i++)
    {
        for (j = 0; j < (s - 1-i); j++)
        {
            if (list[j].credit_hours_completed < list[j + 1].credit_hours_completed)
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

