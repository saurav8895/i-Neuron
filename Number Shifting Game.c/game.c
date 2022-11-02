#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void print_array(int array[], int size, int current_pos,int moves,char name[])
{
     system("cls");
     printf("\tPLAYER NAME : %s\tREMAINING MOVES : %d\n",name,moves);
      printf("-----------------\n");
    for (int i = 0; i < 16; i++)
    {
        if (i == current_pos)
        {
            if ((i + 1) % 4 == 0)
            {
                printf("|   |\n");
                continue;
            }
            else 
            {
                printf("|   ");
                continue;
            }
        }
        if ((i + 1) % 4 == 0)
            {if(array[i]>=10)
               printf("|%d |\n", array[i]);
            else printf("| %d |\n", array[i]);}
        else
             {if(array[i]>=10)
               printf("|%d ", array[i]);
            else printf("| %d ", array[i]);}
    }
      printf("-----------------\n");
}
void generate_unique_number(int array[], int size)
{
    int temp[size];

    memset(temp, -1, sizeof(temp));
    for (int i = 0; i < size - 1; i++)
    {
        srand(time(0));
        int randomNumber;
        do
        {
            randomNumber = rand() % 15 + 1;
        } while (temp[randomNumber] != -1);
        array[i] = randomNumber;

        temp[randomNumber] = randomNumber;
    }
}

bool winning_situation(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (array[i] != (i + 1))
            return false;
    }
    return true;
}
bool is_move_possible(unsigned char key, int current_pos)
{
    if (key != UP && key != LEFT && key != RIGHT && key != DOWN)
        return false;

    if (key == DOWN && (current_pos == 0 || current_pos == 1 || current_pos == 2 || current_pos == 3))
        return false;

    if (key == RIGHT && (current_pos == 0 || current_pos == 4 || current_pos == 8 || current_pos == 12))
        return false;

    if (key == LEFT && (current_pos == 15 || current_pos == 3 || current_pos == 7 || current_pos == 11))
        return false;

    if (key == UP && (current_pos == 12 || current_pos == 13 || current_pos == 14 || current_pos == 15))
        return false;

    return true;
}

int get_next_position(unsigned char key, int current_pos)
{
    switch ((int)key)
    {
    case UP:
        if (is_move_possible(key, current_pos))
            current_pos += 4;
        else
            printf("invalid move..");
        break;
    case LEFT:
        if (is_move_possible(key, current_pos))
            current_pos += 1;
        else
            printf("invalid move..");
        break;
    case RIGHT:
        if (is_move_possible(key, current_pos))
            current_pos -= 1;
        else
            printf("invalid move..");
        break;
    case DOWN:
        if (is_move_possible(key, current_pos))
            current_pos -= 4;
        else
            printf("invalid move..");
        break;

    default:
        printf("something is in valid\n");
        break;
    }
    return current_pos;
}

void swap_pos(int *prev_pos, int *next_pos)
{
    int temp;
    temp = *prev_pos;
    *prev_pos = *next_pos;
    *next_pos = temp;
}

void rules()
{
     system("cls");
    printf("\n\t\t\tRULES OF THIS GAME\t\t\t\n\n"
           "1.you can move one position at a time using arrow key\n\n"
           "move up : by up arrow key\n"
           "move left : by left arrow key\n"
           "move right : by right arrow key\n"
           "move down : by down arrow key\n"
           "\n2.you can move at empty positions only\n\n3.for each valid move your total number of moves will decrease by one\n\n4.winning situation:number should be in sorted order in 4*4 matrix\n\n\t\t\tWINNING SITUATION\t\t\t\n\n-----------------\n| 1 | 2 | 3 | 4 |\n| 5 | 6 | 7 | 8 |\n| 9 |10 |11 |12 |\n|13 |14 |15 |   |\n-----------------\n\n5.you can exit from the game at any time by pressing E or e\nSo try to win in minimum number of moves\n\t\t\tHAPPY GAMING , GOOD LUCK\nenter any key to continue..");
           getch();
} 

int main()
{
    int size = 16, up = 72, down = 75, left = 77, right = 80;
    int array[size];
    static int current_pos = 15, prev_pos, moves = 500;
    unsigned char key;
    char name[100];
    printf("enter your name : ");
    fgets(name,100,stdin);

    rules();
    generate_unique_number(array, size);
    print_array(array, size, current_pos,moves,name);
    do
    {
        key = getch();
        if (key == 0 || key == 0xE0)
            key = getch();
        if (is_move_possible(key, current_pos))
        {
            prev_pos = current_pos;
            current_pos = get_next_position(key, current_pos);
        }
        else
            continue;
        swap_pos(&array[prev_pos], &array[current_pos]);
        if (winning_situation(array, size))
        {
            printf("congrats %s you won !!...",name);
            break;
        }
        moves--;
        print_array(array, size, current_pos,moves,name);

    } while (moves >=1);
    if(moves==0)
    printf("better luck next time %s",name);
    return 0;
}