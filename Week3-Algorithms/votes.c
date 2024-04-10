#include <stdio.h>
#include "cs50.h"


typedef struct votes
{
    string name;
    int votes;


}candidate;



int main(void){


    const int numCandidates =  3;
    candidate candidates[numCandidates];


    candidates[0].name = "Carter";
    candidates[0].votes = 10;


    candidates[1].name = "Yuliia";
    candidates[1].votes = 12;

    candidates[2].name = "Inno";
    candidates[2].votes = 7;



    //TODO: find highest number of votes using linear search
    int  highestVotes = 0; 
    for (int i = 0; i < numCandidates; i++)
    {
        if (candidates[i].votes > highestVotes)
        {
            highestVotes = candidates[i].votes;
        }
           
    }


    //Print name of candidate with the highest votes
    printf("%i\n", highestVotes);

    for (int i = 0; i < numCandidates; i++)
    {
        if(candidates[i].votes == highestVotes){
            printf("%s\n", candidates[i].name);
        }
    }
    



    return 0;
}
