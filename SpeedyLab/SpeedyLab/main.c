/***************************************************************
 *Class:                     CSCI 112                                                                                        *
 *Instructor:               Ronald Burgher                                                                              *
 *Programmer:          Ethan Grant                                                                                    *
 *Project:                  Speedy Lab Project                                                                        *
 **********************************************************************************************/

#include <stdio.h>

FILE *fp;

#define _CRT_SECURE_NO_WARNINGS

int main(void) {
 fp = fopen("csis.txt", "w");
    
    // Declare variables
    int speedlimit = 0;
    int clockedspeed = 0;
    int speedover = 0;
    int ticketsreceived = 0;
    double suspension = 0;
    
    // Get data from user
    printf("Enter the speed limit: ");
    scanf("%d", &speedlimit);

    printf("Enter clocked speed: ");
     scanf("%d", &clockedspeed);
    
    printf("How many tickets have you received in the last year? ");
     scanf("%d", &ticketsreceived);
    
    // Determine the amount fined
    speedover = clockedspeed - speedlimit;
    if (speedover <= 15)
    {
        printf ("You are fined $238.00\n");
        fprintf (fp, "You are fined $238.00\n");
    }
    else if (speedover <= 25)
    {
        printf ("You are fined $367.00\n");
        fprintf (fp, "You are fined $367.00\n");
    }
    else if (speedover <= 100)
    {
        printf ("You are fined $490.00\n");
        fprintf (fp, "You are fined $490.00\n");
    }
    else if (speedover > 100)
    {
        printf ("You are fined $900.00\n");
        fprintf (fp, "You are fined $900.00\n");
    }
    
    // Determine if the user will have their license suspended
    if (speedover > 26)
    {
        printf ("Your license is suspended for 6 months\n");
        fprintf (fp, "Your license is suspended for 6 months\n");
    }
   if (suspension >= 1)
   {
       printf ("Your license is suspended for 6 months\n");
       fprintf (fp, "Your license is suspended for 6 months\n");
   }
   if (suspension < 1 && speedover < 26) {
       printf("Your licence is not suspended\n");
       fprintf(fp, "Your license is not suspended\n");
   }
    // Close the text file
  fclose(fp);
    return 0;
}



