#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n=0;
    char num[10];
    num[1]='\0';num[2]='\0';num[3]='\0';num[4]='\0';num[5]='\0';num[6]='\0';num[7]='\0';num[8]='\0';num[9]='\0';
    while(n<9){
        printf("player X:\n");
        scanf("%d",&a);
        num[a]='X';
        printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n",num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
        n++;
        if(n==9){
             if(num[1]==num[2]&&num[2]==num[3]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
                 if(num[4]==num[5]&&num[5]==num[6]&&num[4]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[7]==num[8]&&num[8]==num[9]&&num[7]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[1]==num[4]&&num[4]==num[7]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[2]==num[5]&&num[5]==num[8]&&num[5]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[3]==num[6]&&num[6]==num[9]&&num[3]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[1]==num[5]&&num[5]==num[9]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[3]==num[5]&&num[5]==num[7]&&num[3]=='X'){
                 printf("player X win");
                return 0;
             }
             else{
                 printf("The game equalised");
                return 0;
             }
        }
        else{
                if(num[1]==num[2]&&num[2]==num[3]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
                 if(num[4]==num[5]&&num[5]==num[6]&&num[4]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[7]==num[8]&&num[8]==num[9]&&num[7]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[1]==num[4]&&num[4]==num[7]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[2]==num[5]&&num[5]==num[8]&&num[5]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[3]==num[6]&&num[6]==num[9]&&num[3]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[1]==num[5]&&num[5]==num[9]&&num[1]=='X'){
                 printf("player X win");
                return 0;
             }
              if(num[3]==num[5]&&num[5]==num[7]&&num[3]=='X'){
                 printf("player X win");
                return 0;
             }
             else{
            printf("player O:\n");
            scanf("%d",&b);
            num[b]='O';
            printf("%c|%c|%c\n%c|%c|%c\n%c|%c|%c\n",num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8],num[9]);
            n++;
             if(num[1]==num[2]&&num[2]==num[3]&&num[1]=='O'){
                 printf("player O win");
                return 0;
             }
                 if(num[4]==num[5]&&num[5]==num[6]&&num[4]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[7]==num[8]&&num[8]==num[9]&&num[7]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[1]==num[4]&&num[4]==num[7]&&num[1]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[2]==num[5]&&num[5]==num[8]&&num[5]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[3]==num[6]&&num[6]==num[9]&&num[3]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[1]==num[5]&&num[5]==num[9]&&num[1]=='O'){
                 printf("player O win");
                return 0;
             }
              if(num[3]==num[5]&&num[5]==num[7]&&num[3]=='O'){
                 printf("player O win");
                return 0;
             }
             }
    }
    }
}

