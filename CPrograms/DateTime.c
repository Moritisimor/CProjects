#include <stdio.h>

#define SUCCESS 0

int main(void) {
  typedef struct Time {
    int hours;
    int minutes;
    int seconds;
  } time;
  typedef struct Date {
    int year;
    int month;
    int day;
  } date;

  struct Date currentDate;
  currentDate.year = 2025;
  currentDate.month = 7;
  currentDate.day = 12;

  struct Time currentTime;
  currentTime.hours = 12;
  currentTime.minutes = 34;
  currentTime.seconds = 32;
  
  printf("Current Date: \nCurrent Year: %d \nCurrent Month: %d \nCurrent Day: %d\n", currentDate.year, currentDate.month, currentDate.day);
  printf("\nCurrent Time: \nCurrent Hours: %d \nCurrent Minutes: %d \nCurrent Seconds: %d\n", currentTime.hours, currentTime.minutes, currentTime.seconds);

  return SUCCESS;
}
