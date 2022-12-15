#include <stdio.h>
int main()
{
    int tar_run, cur_run, tot_ovs, rem_bowl, cur_bowl, need_run, remain_ovs, rem_bowl_in_ovs;
    float rem_ovs, cur_ovs, crr, rrr;

    /* GREETINGS TO USER */
    printf("---------------------This is a BETA version of the Cricket Score Calculation Program--------------------\n");
    printf("---------------------------------So this program contains a lot of bugs---------------------------------\n");
    printf("-----------------------------But we are continuously updating this program------------------------------\n\n\n\n");

    /* DATA INPUT SECTION */
    printf("1. Input the total overs of the match: ");
    scanf("%d", &tot_ovs);
    printf("2. Input the opposite team's targeted runs to win: ");
    scanf("%d", &tar_run);
    printf("3. Input the current run(s) of your team: ");
    scanf("%d", &cur_run);
    printf("4. Input the remaining bowl(s) to go: ");
    scanf("%d", &rem_bowl);

    /* PROGRAM'S CALCULATION SECTION */
    need_run = tar_run - cur_run;
    remain_ovs = rem_bowl / 6;
    rem_ovs = (float)rem_bowl / 6;
    rem_bowl_in_ovs = rem_bowl % 6;
    cur_ovs = (float)tot_ovs - rem_ovs;
    crr = (float)cur_run / cur_ovs;
    rrr = (float)need_run / rem_ovs;

    /* NON-DRAW & LOST MATCH CONDITIONS */
    if ((cur_run < tar_run) && (cur_run != tar_run - 1))
    {
        /* NON-DRAW BUT BOWL(S) REMAINED */
        if (remain_ovs > 1)
        {
            if (rem_bowl_in_ovs == 0)
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVERS.", need_run, remain_ovs, rem_bowl_in_ovs);
            else if (rem_bowl_in_ovs == 1)
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVERS & %d BOWL.", need_run, remain_ovs, rem_bowl_in_ovs);
            else
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVERS & %d BOWLS.", need_run, remain_ovs, rem_bowl_in_ovs);
        }
        /* NON-DRAW BUT BOWL(S) REMAINED */
        else if (remain_ovs == 1)
        {
            if (rem_bowl_in_ovs == 0)
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVER.", need_run, remain_ovs, rem_bowl_in_ovs);
            else if (rem_bowl_in_ovs == 1)
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVER & %d BOWL.", need_run, remain_ovs, rem_bowl_in_ovs);
            else
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d OVER & %d BOWLS.", need_run, remain_ovs, rem_bowl_in_ovs);
        }
        /* NON-DRAW BUT BOWL(S) REMAINED */
        else if (remain_ovs < 1)
        {
            if (rem_bowl_in_ovs == 0) /* LOST MATCH CONDITIONS */
            {
                if ((need_run - 1) == 1)
                {
                    printf("\nOPPS! YOU LOST THE GAME. THE OPPOSITE TEAM DEFEATED YOU BY %d RUN.", need_run - 1);
                }
                else
                {
                    printf("\nOPPS! YOU LOST THE GAME. THE OPPOSITE TEAM DEFEATED YOU BY %d RUNS.", need_run - 1);
                }
            }
            else if (rem_bowl_in_ovs == 1)
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d BOWL.", need_run, rem_bowl_in_ovs);
            else
                printf("\nYOUR TEAM NEED %d MORE RUNS TO WIN OFF %d BOWLS.", need_run, rem_bowl_in_ovs);
        }
    }

    /* DRAW MATCH CONDITIONS */
    else if ((cur_run < tar_run) && (cur_run == tar_run - 1))
    {
        /* DRAW BUT BOWL(S) REMAINED */
        if (remain_ovs > 1)
        {
            if (rem_bowl_in_ovs == 0)
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVERS.", need_run, remain_ovs, rem_bowl_in_ovs);
            else if (rem_bowl_in_ovs == 1)
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVERS & %d BOWL.", need_run, remain_ovs, rem_bowl_in_ovs);
            else
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVERS & %d BOWLS.", need_run, remain_ovs, rem_bowl_in_ovs);
        }
        /* DRAW BUT BOWL(S) REMAINED */
        else if (remain_ovs == 1)
        {
            if (rem_bowl_in_ovs == 0)
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVER.", need_run, remain_ovs, rem_bowl_in_ovs);
            else if (rem_bowl_in_ovs == 1)
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVER & %d BOWL.", need_run, remain_ovs, rem_bowl_in_ovs);
            else
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUN TO WIN OFF %d OVER & %d BOWLS.", need_run, remain_ovs, rem_bowl_in_ovs);
        }
        /* DRAW BUT BOWL(S) REMAINED OR NOT */
        else if (remain_ovs < 1)
        {
            if (rem_bowl_in_ovs == 0) /* MATCH DRAW BUT NO BOWL TO GO */
                printf("\nMATCH DRAW.");
            else if (rem_bowl_in_ovs == 1)
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUNS TO WIN OFF %d BOWL.", need_run, rem_bowl_in_ovs);
            else
                printf("\nMATCH DRAW. YOUR TEAM NEED %d MORE RUNS TO WIN OFF %d BOWLS.", need_run, rem_bowl_in_ovs);
        }
    }

    /* WON MATCH CONDITIONS */
    else if (cur_run >= tar_run)
    {
        printf("\nCONGRATULATIONS! YOUR TEAM ALREADY WON.");
    }

    printf("\nCURRENT RUN RATE: %.2f", crr);

    /* REQUIRED RUN RATE CALCULATION*/
    if (rem_ovs > 0 && rrr > 0)
        printf("\nREQUIRED RUN RATE: %.2f", rrr);
    else if (rem_ovs <= 0 || rrr <= 0)
        printf("\nREQUIRED RUN RATE: NULL"); /* IF rrr's VALUE IS MINUS OR INFINITY */

    /* TO EXIT THE PROGRAM */
    printf("\n\nEnter any key to EXIT the program. Thank you.\n\n");

    return 0;
}
