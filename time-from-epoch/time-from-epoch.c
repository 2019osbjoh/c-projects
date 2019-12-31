#include <stdio.h>
#include <time.h>

int main() {
	long int secondsEpoch = time(NULL);
	long int minutesEpoch = secondsEpoch / 60;
	long int hoursEpoch = minutesEpoch / 60;
	long int daysEpoch = hoursEpoch / 24;
	long int weeksEpoch = daysEpoch / 7;
	long int monthsEpoch = weeksEpoch / 4;
	long int yearsEpoch = monthsEpoch / 12;

	printf("\nSeconds since epoch ~ %li\n", secondsEpoch);
	printf("Minutes since epoch ~ %li\n", minutesEpoch);
	printf("Hours since epoch ~ %li\n", hoursEpoch);
	printf("Days since epoch ~ %li\n", daysEpoch);
	printf("Weeks since epoch ~ %li\n", weeksEpoch);
	printf("Months since epoch ~ %li\n", monthsEpoch);
	printf("Years since epoch ~ %li\n\n", yearsEpoch);
}
