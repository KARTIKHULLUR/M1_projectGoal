#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int printOpt();
void startGame();
int printOpt2();
int player(int user_selection2);
void scores(int wins, int loses);

int main()
{

    int playerSelect;

    printf("\nHi my name is dhanesh would you like to play rock, paper, scissors with me?\n");

    do
    {
        playerSelect = printOpt();
        switch(playerSelect)
        {
        case 0:
        {
            printf("\n     Ok! Have a nice day then!\n");
            break;
        }
        case 1:
        {
            printf("\nOk! What will you first choose rock, paper, or scissors?\n\n");
            startGame();
            exit(1);
        }
        case 2:
        {
            printf("\n\tWhen does a robot need training?\n\tWhenever it get rusty.\n\tHAHAHAHAHAHAHAHAHAHA\n\n");
            break;
        }
        case 3:
        {
            printf("\n Billy: What did the man say to his dead robot?\n Bob: What?\n Billy: Rust in peace.\n HAHAHAHAHAHA\n\n");
            break;
            ;
        }
        case 4:
        {
            printf("OK fine! I will ask someone else then!... Bwesit\n");
            exit(1);
        }
        default:
        {
            printf(" Invalid response entered: %d\n", playerSelect);
        }
        }
    }
    while (playerSelect != 0);
    return 0;
}

int printOpt()
{
    int playerSelect;

    printf("    Press 0 to say no\n");
    printf("    Press 1 to say yes\n");
    printf("    Press 2 to ask for a joke instead\n");
    printf("    Press 3 to ask for another joke\n");
    printf("    Press 4 to say get out\n\t\t");
    scanf("%d", &playerSelect);
    return (playerSelect);
}

void startGame()
{
    int user_selection2, player_choose, wins = 0, loses = 0;
    do
    {
        user_selection2 = printOpt2();
        switch(user_selection2)
        {
        case 0:
        {
            printf(" I'm sorry you must leave...Have a nice day!\n");
            break;
        }
        case 1:
        {
            player_choose = player(user_selection2);
            if(player_choose == 1)
            {
                printf("\n My rock beats your scissors\n\n");
                loses++;
                scores(wins, loses);
                break;
            }
            if(player_choose == 0)
            {
                printf("\n I got scissors too I guess it's a tie\n\n");
                break;
            }
            if(player_choose == 2)
            {
                printf("\n Your scissors beat my rock!!! I will beat you next time! You will see >:( \n\n");
                wins++;
                scores(wins, loses);
                break;
            }
        }
        case 2:
        {
            player_choose = player(user_selection2);
            if(player_choose == 1)
            {
                printf("\n My scissors beats your paper\n\n");
                loses++;
                scores(wins, loses);
                break;
            }
            if(player_choose == 0)
            {
                printf("\n I got paper too ... I guess it's a tie\n\n");
                break;
            }
            if(player_choose == 2)
            {
                printf("\n Your paper beat my rock!!! I'm so mad right now!! >:( \n\n");
                wins++;
                scores(wins, loses);
                break;
            }
        }
        case 3:
        {
            player_choose = player(user_selection2);
            if(player_choose == 1)
            {
                printf("\n My paper beats your rock\n\n");
                loses++;
                scores(wins, loses);
                break;
            }
            if(player_choose == 0)
            {
                printf("\n I got rock too I guess it's a tie\n\n");
                break;
            }
            if(player_choose == 2)
            {
                printf("\n Your rock beat my scissors!!! DARN it :( \n\n");
                wins++;
                scores(wins, loses);
                break;
            }
        }
        default:
        {
            printf(" Invalid response entered: %d\n", user_selection2);
        }
        }
    }
    while (user_selection2 != 0);
}


int printOpt2()
{
    int user_selection2;

    printf("    Press 0 to say I got to go kid\n");
    printf("    Press 1 to say Scissors\n");
    printf("    Press 2 to say Paper\n");
    printf("    Press 3 to say Rock\n\t\t");
    scanf("%d", &user_selection2);
    return (user_selection2);
}

int player(int user_selection2)
{
    int player_choose;
    player_choose = rand()%3;
    return player_choose;
}

void scores(int wins, int loses)
{
    printf("The score board is now:\n");
    printf(" Juan - You\n");
    printf(" %d         %d\n\n",loses, wins);
}
