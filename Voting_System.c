#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Arijit Singh"
#define CANDIDATE2 "Jubin Nautiyal"
#define CANDIDATE3 "Armann Mallik"
#define CANDIDATE4 "Kumar Sanu"

int votes_count1=0,  votes_count2=0, votes_count3=0, votes_count4=0, spoilled_votes=0;

void castvote(){
int choice;
printf("\n\n### Please choose your candidate ###\n\n");
printf("\n 1. %s",CANDIDATE1);
printf("\n 2. %s",CANDIDATE2);
printf("\n 3. %s",CANDIDATE3);
printf("\n 4. %s",CANDIDATE4);
printf("\n 5. %s","NONE");

printf("\n\n Input your choice(1-4): ");
scanf("%d",&choice);

switch(choice){
case 1: votes_count1++; break;
case 2: votes_count2++; break;
case 3: votes_count3++; break;
case 4: votes_count4++; break;
case 5: spoilled_votes++; break;
default: printf("\nError:Wrong Choice !!! Please Try Again");
            getchar();//holding the screen
}
printf("\n Thanks for vote!!");
}
void votesCount(){
printf("\n\n ### Voting Statistics ###");
printf("\n%s-%d",CANDIDATE1, votes_count1);
printf("\n%s-%d",CANDIDATE2, votes_count2);
printf("\n%s-%d",CANDIDATE3, votes_count3);
printf("\n%s-%d",CANDIDATE4, votes_count4);
printf("\n%s-%d", "Spoiled Votes",spoilled_votes);
}
void getLeadingCandidate(){
    printf("\n\n### Leading Candidate###\n\n");
        if((votes_count1>votes_count2) && (votes_count1>votes_count3) && (votes_count1>votes_count4))
        printf("[%s]",CANDIDATE1);
        else if((votes_count2>votes_count3) && (votes_count2>votes_count4) && (votes_count2>votes_count1))
        printf("[%s]",CANDIDATE2);
        else if((votes_count3>votes_count4) && (votes_count3>votes_count2) && (votes_count3>votes_count1))
        printf("[%s]",CANDIDATE3);
        else if((votes_count4>votes_count3) && (votes_count4>votes_count2) && (votes_count4>votes_count1))
        printf("[%s]",CANDIDATE4);
        else
        printf("-----Warning!!! No win situation");
}

int main(){
int i;
int choice;
do{
    printf("\n\n ### WELCOME TO ELECTION 2021####");
    printf("\n\n 1. Cast Your Vote");
    printf("\n 2. Find Vote Count");
    printf("\n 3. Find Leading Candidate");
    printf("\n 0. Exit");
    printf("\n\n Please enter your choice : ");
    scanf("%d",&choice);
    switch(choice){
    case 1: castvote(); break;
    case 2: votesCount(); break;
    case 3: getLeadingCandidate(); break;
    default: printf("Error: Invalid Choice");
    }
}while(choice!=0);

getchar();

return 0;
}

