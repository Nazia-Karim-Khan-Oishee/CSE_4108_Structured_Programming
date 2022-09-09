#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  int price;
} temp ;



int find_part(int number,int num_parts, struct part inventory[MAX_PARTS]);
void insert(int num_parts, struct part inventory[MAX_PARTS]);
void search(int num_parts, struct part inventory[MAX_PARTS]);
void updateQ(int num_parts, struct part inventory[MAX_PARTS]);
void updatePrice(int num_parts, struct part inventory[MAX_PARTS]);
void print(int num_parts, struct part inventory[MAX_PARTS]);


int main(void)
{
  ///num_parts and inventory->local to main function here  (B)
  int num_parts=0;
  struct part inventory[MAX_PARTS];
  char code;

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')
      {
          ;
      }
    switch (code) {
      case 'i': insert(num_parts,inventory);
                num_parts++;
                break;
      case 's': search(num_parts,inventory);
                break;
      case 'u': updateQ(num_parts,inventory);
                break;
      case 'n': updatePrice(num_parts,inventory);///(C)
                break;
      case 'p': print(num_parts,inventory);
                break;
      case 'q': return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}


int find_part(int number,int num_parts, struct part inventory[MAX_PARTS])
{
  int i;

  for (i = 0; i < num_parts; i++)
    if (inventory[i].number == number)
      return i;
  return -1;
}


void insert(int num_parts, struct part inventory[MAX_PARTS])
{
  int part_number;

  if (num_parts == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number,num_parts,inventory) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  printf("Enter price: ");
  scanf("%d", &inventory[num_parts].price);

}


void search(int num_parts, struct part inventory[MAX_PARTS])
{
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number,num_parts,inventory);
  if (i >= 0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
    printf("Price : %d\n", inventory[i].price);
  } else
    printf("Part not found.\n");
}


void updateQ(int num_parts, struct part inventory[MAX_PARTS])
{
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number,num_parts,inventory);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  } else
    printf("Part not found.\n");
}

///start of price update function (C)
void updatePrice(int num_parts, struct part inventory[MAX_PARTS])
{
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number,num_parts,inventory);
  if (i >= 0) {
    printf("Enter new price: ");
    scanf("%d", &change);
    inventory[i].price = change;
  } else
    printf("Part not found.\n");
}


void print(int num_parts, struct part inventory[MAX_PARTS])
{

  ///sorting part starts (A)
  int i,j;
  int num=num_parts;
  for(i=0;i<num;i++){
    for(j=i+1;j<num;j++){
        if((inventory[i].number)>(inventory[j].number)){
           temp=inventory[i];
            inventory[i]=inventory[j];
            inventory[j]=temp;
        }
    }
  }
  ///sorting part ends
  printf("Part Number   Part Name                  "
         "Quantity on Hand       Price\n");
  for (i = 0; i < num_parts; i++)
    printf("%7d       %-25s%11d          \t%d\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand,inventory[i].price);
}


