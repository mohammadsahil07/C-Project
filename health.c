#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
 int dehradun_bp[20],dehradun_ecg[20],dehradun_pulse[20],delhi_bp[20],delhi_ecg[20],delhi_pulse[20],haridwar_bp[20],haridwar_ecg[20],haridwar_pulse[20],lucknow_bp[20],lucknow_ecg[20],lucknow_pulse[20];
    srand(time(NULL));
    for(int i=0;i<20;i++){
         dehradun_bp[i]=rand() % 51 +75;
         dehradun_ecg[i]=rand() % 51 +153;
         dehradun_pulse[i]=rand() % 11 +66;

         delhi_bp[i]=rand() % 51 +75;
         delhi_ecg[i]=rand() % 51 +153;
         delhi_pulse[i]=rand() % 11 +66;

         haridwar_bp[i]=rand() % 51 +75;
         haridwar_ecg[i]=rand() % 51 +153;
         haridwar_pulse[i]=rand() % 11 +66;

         lucknow_bp[i]=rand() % 51 +75;
         lucknow_ecg[i]=rand() % 51 +153;
         lucknow_pulse[i]=rand() % 11 +66;
    }
   
    printf("To,\n The MAX Hospital,\nRajpur Road Dehradun\n");
    //sending the request in the hospitals of dehradun for patients
    printf("\n");
    for(int i=0;i<20;i++){
        if(dehradun_bp[i]<80 || dehradun_bp[i]>120){ printf("The blood pressure of the patient is abnormal . BP=%d,Patient Number=%d.\n",dehradun_bp[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(dehradun_ecg[i]<120 || dehradun_ecg[i]>200){ printf("The ECG of the patient is abnormal . ECG=%d,Patient Number=%d.\n",dehradun_ecg[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(dehradun_pulse[i]<65 || dehradun_pulse[i]>75){ printf("The pulse rate of the patient is abnormal . Pulse Rate=%d,Patient Number=%d.\n",dehradun_ecg[i],i+1);}
    }
    //delhi health mangement

   
    //sending the request in the hospitals of delhi for patients
    printf("\n");printf("\n");
    printf("To,\n The Subharti Hospital,\nMayur Vihar Delhi\n ");
    printf("\n");
    for(int i=0;i<20;i++){
        if(delhi_bp[i]<80 || delhi_bp[i]>120){ printf("The blood pressure of the patient is abnormal . BP=%d,Patient Number=%d.\n",delhi_bp[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(delhi_ecg[i]<120 || delhi_ecg[i]>200){ printf("The ECG of the patient is abnormal . ECG=%d,Patient Number=%d.\n",delhi_ecg[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(delhi_pulse[i]<65 || delhi_pulse[i]>75){ printf("The pulse rate of the patient is abnormal . Pulse Rate=%d,Patient Number=%d.\n",delhi_ecg[i],i+1);}
    }
    //haridwar health mangemnt

    //sending the request in the hospitals of delhi for patients
    printf("\n");printf("\n");
    printf("To,\n The Swastik Hospital,\nKalidas Road Haridwar\n ");
    printf("\n");
    for(int i=0;i<20;i++){
        if(haridwar_bp[i]<80 || haridwar_bp[i]>120){ printf("The blood pressure of the patient is abnormal . BP=%d,Patient Number=%d.\n",haridwar_bp[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(haridwar_ecg[i]<120 || haridwar_ecg[i]>200){ printf("The ECG of the patient is abnormal . ECG=%d,Patient Number=%d.\n",haridwar_ecg[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(haridwar_pulse[i]<65 || haridwar_pulse[i]>75){ printf("The pulse rate of the patient is abnormal . Pulse Rate=%d,Patient Number=%d.\n",haridwar_pulse[i],i+1);}
    }
    //lucknow health mangement


    //sending the request in the hospitals of delhi for patients
    printf("\n");printf("\n");
    printf("To,\n The Vainavi Hospital,\nAmrit Vihar Lucknow\n ");
    printf("\n");
    for(int i=0;i<20;i++){
        if(lucknow_bp[i]<80 || lucknow_bp[i]>120){ printf("The blood pressure of the patient is abnormal . BP=%d,Patient Number=%d.\n",lucknow_bp[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(lucknow_ecg[i]<120 || lucknow_ecg[i]>200){ printf("The ECG of the patient is abnormal . ECG=%d,Patient Number=%d.\n",lucknow_ecg[i],i+1);}
    }
    printf("\n");
    for(int i=0;i<20;i++){
        if(lucknow_pulse[i]<65 || lucknow_pulse[i]>75){ printf("The pulse rate of the patient is abnormal . Pulse Rate=%d,Patient Number=%d.\n",lucknow_pulse[i],i+1);}
    }
return 0;
}