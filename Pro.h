#ifndef PRO_H_INCLUDED
#define PRO_H_INCLUDED
#define MAX_SPACE 100

int x=0,y=0,n=1;
bool gameEnd=false;
bool leftMovement=false;
bool rightMovement=false;
bool upMovement=false;
bool downMovement=false;
bool leftMovement2=false;
bool rightMovement2=false;
bool upMovement2=false;
bool downMovement2=false;

int randomNum;


void left2()
{
    leftMovement2=true;
    rightMovement2=false;
    upMovement2=false;
    downMovement2=false;

}
void right2()
{
    leftMovement2=false;
    rightMovement2=true;
    upMovement2=false;
    downMovement2=false;

}
void up2()
{
    leftMovement2=false;
    rightMovement2=false;
    upMovement2=true;
    downMovement2=false;
}
void down2()
{
    leftMovement2=false;
    rightMovement2=false;
    upMovement2=false;
    downMovement2=true;
}

void left()
{
    leftMovement=true;
    rightMovement=false;
    upMovement=false;
    downMovement=false;

}
void right()
{
    leftMovement=false;
    rightMovement=true;
    upMovement=false;
    downMovement=false;

}
void up()
{
    leftMovement=false;
    rightMovement=false;
    upMovement=true;
    downMovement=false;
}
void down()
{
    leftMovement=false;
    rightMovement=false;
    upMovement=false;
    downMovement=true;
}
int maxHealth=500;
int yourHealthT1=maxHealth;
int yourHealthT2=maxHealth;
int yourHealthT3=maxHealth;
int yourHealthT4=maxHealth;
char Map1[MAX_SPACE][MAX_SPACE]=
{
    "###############################################################",
    "#                                                             #",
    "#                                      #                      #",
    "#                             R        #                      #",
    "#     ###########             ############         #          #",
    "#               #                                  #        # #",
    "#               #               #                  #        # #",
    "#               #         #######                  #        # #",
    "#     L         ####                               #   G    # #",
    "#                                                  #        # #",
    "#                         #######          #########        # #",
    "#                 ####          #                           # #",
    "#         #          #          #    ########  #############  #",
    "#       #            #                #               ##      #",
    "#     #              #                #               ##      #",
    "#   #    #################            #               ##      #",
    "# #                             W                     ##      #",
    "#   #                                                 #########",
    "#     #                  #                    #       ##      #",
    "#       #                                     #     #    #    #",
    "#         # # # # #      #          #######   #   #        #  #",
    "#                 #      #                    # #           # #",
    "#                 #      #          #######   #               #",
    "###############################################################"
};
int gamespeed= 20;








#endif // PRO_H_INCLUDED
