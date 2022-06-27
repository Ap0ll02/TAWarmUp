#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void StartPoint();
void A1(int hasKey1);
void C1();
void C2();
void C3();
int main()
{
    int age = 0;
    printf("What is your age: \n");
    scanf("%d", &age);
    printf("Your age is %d in eldritch years. \n", age*50);
    printf("\n");
    StartPoint();
}

void StartPoint(int key)
{
    int choice = 0;
    printf("Good. Now that is out of the way. You are in a dark room. \n");
    printf("What would you like to do? \n");
    printf("1. Walk Around | 2. Don't Move | 3. Reach into your pockets \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        C1();
    }
    else if(choice == 2)
    {
        C2();
    }
    else
    {
        C3();
    }
}

void C1(int hasKey1)
{
    int choice;
    printf("You walk around and find the room to have a door and a table. \n");
    printf("1. Open the door | 2. Go to the table \n");
    scanf("%d", &choice);
    if(choice == 1)
    {
        A1(hasKey1);
    }
}

void C2()
{
    int ret;
    char status;
    printf("You stand still. Regretably, a monster was following you. Tentacles come into view, strangling you. Game Over. \n");
    printf("Restart? Type Y \n");
    scanf("%c", &status);
    ret = strcmp(&status, "Y");
    if(ret == 0)
    {
        StartPoint();
    }
}

void C3()
{
    int firstKey = 1;
    printf("You reach into your pockets and find a key. \n");
    StartPoint(firstKey);
}

void A1(int hasKey1)
{
    printf("You Attempt To Open The Door \n");
    if()
    {
        
    }
}