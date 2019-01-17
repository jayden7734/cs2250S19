#include<stdio.h>

int main()
{
	// Ask for distance in meters
	// Ask for time in seconds
	// Calculate and display the velocity in km/hr
	int distance;
	int time;
	int velocity;

	printf("Please input the distance traveled in meters\n");
	scanf("%d",&distance);
	printf("Please input the time taken in seconds\n");
	scanf("%d",&time);
	printf("The distance traveled is %d meters\n",distance);
	printf("The time it took was %d seconds\n",time);
	velocity = (distance/time);
	printf("Velocity (integer) is %d m/s\n", velocity);

	// km = 1000 meters
	// hr = 3600 seconds
	// TODO: Fix the coredum related to Floating point
	//velocity = (distance/1000)/(time/3600);
	//printf("Velocity (integer) is %d km/hr\n", velocity);


	return 0;
}
