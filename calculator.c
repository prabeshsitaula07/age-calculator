#include <stdio.h>
void calculateAge(int currentDay, int currentMonth, int currentYear,
                  int birthDay, int birthMonth, int birthYear,
                  int *ageYears, int *ageMonths, int *ageDays) {
    
    // If birth date is greater than current birth month
    if (birthDay > currentDay) {
        currentDay += 30;
        currentMonth--;
    }

    // If birth month is greater than current birth year
    if (birthMonth > currentMonth) {
        currentMonth += 12;
        currentYear--;
    }

    *ageDays = currentDay - birthDay;
    *ageMonths = currentMonth - birthMonth;
    *ageYears = currentYear - birthYear;
}

int main() {
    int currentDay, currentMonth, currentYear;
    int birthDay, birthMonth, birthYear;
    int ageYears, ageMonths, ageDays;

    // current date 
    printf("Enter current date (DD MM YYYY): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);

    // user's birthday 
    printf("Enter your birthday (DD MM YYYY): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);

    // Calculate age
    calculateAge(currentDay, currentMonth, currentYear,
                 birthDay, birthMonth, birthYear,
                 &ageYears, &ageMonths, &ageDays);

    // Display the result
    printf("Your age is: %d years, %d months, and %d days\n",
           ageYears, ageMonths, ageDays);

    return 0;
}
