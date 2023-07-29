// Enter Address (house no, block, city, state) of 5 people.

#include<stdio.h>
struct Address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAddress(struct address add); 
int main() {
    struct address adds[5];
    //input
     printf("Enter info for person 1 : ");
    scanf("%d",&adds[0].houseNo);
    scanf("%d",&adds[0].block);
    scanf("%s",adds[0].city);
    scanf("%s",adds[0].state);

    printf("Enter info for person 2 : ");
    scanf("%d",&adds[1].houseNo);
    scanf("%d",&adds[1].block);
    scanf("%s",adds[1].city);
    scanf("%s",adds[1].state);

    printf("Enter info for person 3 : ");
    scanf("%d",&adds[2].houseNo);
    scanf("%d",&adds[2].block);
    scanf("%s",adds[2].city);
    scanf("%s",adds[2].state);

    printf("Enter info for person 4 : ");
    scanf("%d",&adds[3].houseNo);
    scanf("%d",&adds[3].block);
    scanf("%s",adds[3].city);
    scanf("%s",adds[3].state);

    printf("Enter info for person 5 : ");
    scanf("%d",&adds[4].houseNo);
    scanf("%d",&adds[4].block);
    scanf("%s",adds[4].city);
    scanf("%s",adds[4].state);

    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);

    return 0;
}
void printAddress(struct address add) {
    printf("address Is :%d ,%d ,%s ,%s \n",add.houseNo,add.block,add.city,add.state);
}