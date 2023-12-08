#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
int main()
{
    int level[20],s=1;
    srand(time(NULL));
    for(int i=1;i<=20;i++){
        level[i]=rand() %  51 +220 ;
    }
    for(int i=1;i<=20;i++){
        if(level[7] > 255){
           printf("Water is detected to be above the standard parameters . Please reach to the elevated place , stay away from electric switches and poles.\n");
           Beep(432,6000);
           printf("\nplease enter 0 to stop\n\n ");
           scanf("%d",s);
           if(s==0){
            printf("The place is absolutely safe.");
            return 0;
           }
           else{printf("House number %d is affected by flood . Please don't be panic we have infomed the local police station and flood rescue team",i);}
           return 0;
        }
    }

return 0;
}