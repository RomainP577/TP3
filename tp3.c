#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//struct declaration
struct Item
{
    char Name[64];
    int Price;
    int Empty;
};
typedef struct Item Item;

int i=0;
int BuyID=0;

int FreeSlot=0;

//Int Main__________________________________________
int main(){

    //item declaration SWORD, Shield, Potion >Inventaire
    Item Sword = {"Sword", 10, 1};
    Item Shield = {"Shield", 8, 1};
    Item Map = {"Map", 5, 1};

    //item declaration SWORD, Shield, Potion >Inventaire
    Item PotionHP = {"Potion de vie", 3, 1};
    Item PotionMP = {"Potion de mana", 3, 1};
    Item ScrollFlame = {"Scroll of Flame", 15, 1};

    Item EmptySlot = {"Empty slot !", 0, 0};

    //INV array
    Item a_inv[5];
    a_inv[0]= Sword;
    a_inv[1]= Shield;
    a_inv[2]= Map;
    a_inv[3]= EmptySlot;
    a_inv[4]= EmptySlot;

    //MERCH array
    Item a_merch[5];
    a_merch[0]= PotionHP;
    a_merch[1]= PotionMP;
    a_merch[2]= ScrollFlame;
    a_merch[3]= EmptySlot;
    a_merch[4]= EmptySlot;

    //_________________________________________________________________________//
    //AFFICHAGE INV
    for (i=0; i<5; i++)
    {
        if (a_inv[i].Empty = 1)
        {
            printf("=> Inv(%d) : %s \n", i+1, a_inv[i].Name);
        }
        else 
        {

            printf("Empty Slot");
        }
    }

    printf("---\n");

    //AFFICHAGE MERCH
    for (i=0; i<5; i++)
    {
        if (a_merch[i].Empty = 1)
        {
            printf("=> Merch(%d) : %s (%d gold)\n", i+1, a_merch[i].Name, a_merch[i].Price);
        }
        else 
        {
            printf("Empty Slot");
        }
    } 
return 0;
}