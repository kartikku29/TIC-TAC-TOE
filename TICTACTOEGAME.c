#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void draw();
int win();
char a[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main()
{
    system("color 2e");
    int i=-1;    
    printf("Player (1) = X and Player (2) = 0\n");
    int x, player = 1;
    char m;
    while(i==-1)
    {
        draw();
        win();
        player = (player % 2 != 0) ? 1 : 2;
        printf("Player %d Turns, at which number: \n", player);
        scanf("%d", &x);
        m = (player == 1) ? 'X' : '0';
        
        if (x == 1 && a[1]=='1')
        {
            a[x] = m;
        }
        else if (x == 2 && a[2]=='2')
        {
            a[x] = m;
        }
        else if (x == 3 && a[3]=='3')
        {
            a[x] = m;
        }
        else if (x == 4 && a[4]=='4')
        {
            a[x] = m;
        }
        else if (x == 5 && a[5]=='5')
        {
            a[x] = m;
        }
        else if (x == 6 && a[6]=='6')
        {
            a[x] = m;
        }
        else if (x == 7 && a[7]=='7')
        {
            a[x] = m;
        }
        else if (x == 8 && a[8]=='8')
        {
            a[x] = m;
        }
        else if (x == 9 && a[9]=='9')
        {
            a[x] = m;
        }
        else{
            printf("invalid option");   
        }
        i=win();
        if (i==1)
        {
            printf("Player %d won", player);
        }
        else if(i==0){
            printf("Game Draw\n");
        }
        player++;

    }

    return 0;
    
}

    void draw() {
        
        system("CLS");
        printf("\tTIC TAc TOE GAME\n");
        printf("Player1 (X) - Player2 (O) \n\n\n");
        printf("  %c  |  %c  |  %c  \n", a[1], a[2], a[3]);
        printf("  %c  |  %c  |  %c  \n", a[4], a[5], a[6]);
        printf("  %c  |  %c  |  %c  \n", a[7], a[8], a[9]);
        
       
    }
    int win(){
        if (a[1]== a[2] && a[2]== a[3])
        {
            return 1;
        }
        else if(a[1]==a[4] && a[4]== a[7]){
            return 1;
        }
        else if(a[7]==a[8] && a[8]==a[9]){
            return 1;
        }
        else if(a[3]==a[6] && a[6]==a[9]){
            return 1;
        }
        else if(a[2]==a[5] &&  a[5]==a[8]){
            return 1;
        }
        else if(a[1]==a[5] && a[5]==a[9]){
            return 1;
        }
        else if(a[3]==a[5] && a[5]==a[7]){
            return 1;
        }
        else if(a[4]==a[5] && a[5]==a[6]){
            return 1;
        }
        else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9'){
            
            return 0;
        }
        else {
            return -1;
        }
        
    }
