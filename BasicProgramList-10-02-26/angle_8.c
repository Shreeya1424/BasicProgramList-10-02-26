#include<stdio.h>

void main(){
    int hour, minute;
    float angle, minute_angle, hour_angle;

    printf("Enter the hour (1-12): ");
    scanf("%d", &hour);

    printf("Enter the minute (0-59): ");
    scanf("%d", &minute);

    hour_angle = (30 * hour) + (0.5 * minute);
    minute_angle = 6 * minute;

    angle = hour_angle - minute_angle;

    if (angle < 0) {
        angle = -angle;
    }

    if(angle > 180) {
        angle = 360 - angle;
    }

    printf("The angle is: %.2f degrees\n", angle);
}