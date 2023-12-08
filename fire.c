#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

int isFireDetected(){
    int detected_or_not;
    printf("Enter 1 if fire is detected or 0 if not detected: ");
    scanf("%d",&detected_or_not);
    return detected_or_not;
}

int main(){
    int alarmActivated = 0;
    while (1){
        if (isFireDetected()){
            printf("Fire detected!\n");
            alarmActivated = 1;
            printf("Waiting for 1 minute...\n");
            sleep(60);

            if (alarmActivated){
            printf("Emergency message sent to the Fire Brigade!\n");
                alarmActivated = 0;
            }
            else{
                printf("Fire handled within 1 minute. Alarm deactivated.\n");
            }
            break;
        }
        else{
            printf("No fire detected....\n");
            break;
        }
    }
}