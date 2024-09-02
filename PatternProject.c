#include <stdio.h>
#include <stdlib.h>
int printJ[7][5];
int printA[7][5];
int printH[7][5];
int printN[7][5];
int printA1[7][5];
int printV[7][5];
int printI[7][5];

void gap(){
for(int i=0;i<7;i++){
    for(int j=0;j<1;j++)
    {
        printf(" ");
    }
}
} //end gap()

void printConsole(){
for(int i=0;i<7;i++){
    gap();
    for(int j=0;j<5;j++){
        char ch=printJ[i][j];
        printf("%c",ch);
        system("COLOR 0A");
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
       gap();
    for(int j=0;j<5;j++){
     char ch=printH[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printN[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printA[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printV[i][j];
     printf("%c",ch);
    }
    gap();
    for(int j=0;j<5;j++){
     char ch=printI[i][j];
     printf("%c",ch);
    }
    gap();

    printf("\n");

} // end top most for

} // end printConsole()

void J(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++)
    {
            if(i==0||j==3||i==6&&j!=4||i==4&&j!=1&&j!=2&&j!=4||i==5&&j!=1&&j!=2&&j!=4)
        {
            printJ[i][j]=42;
        }
       else{
            printJ[i][j]=32;
        }
    }
}
}


void A(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(((j==0 || j==4)&&(i!=0)) || ((i==0 || i==3)&&(j>0 && j<4))){
            printA[i][j]=42;
        }
        else{
            printA[i][j]=32;
        }
    }
}
}
void H(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++)
    {
            if((j==0||j==4||i==3))
        {
            printH[i][j]=42;
        }
       else{
            printH[i][j]=32;
        }
    }
}
}
void N(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(j==0 ||i==0&&j==0||i==1&&j==1||i==2&&j==2||i==3&&j==3||i==4&&j==4||j==4){
            printN[i][j]=42;
        }
        else{
            printN[i][j]=32;
        }
    }
}
}
void V(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if(i==0&&j!=1&&j!=2&&j!=3||i==1&&j!=1&&j!=2&&j!=3||i==2&&j!=1&&j!=2&&j!=3||i==3&&j!=1&&j!=2&&j!=3||i==4&&j!=1&&j!=2&&j!=3||i==5&&j!=0&&j!=2&&j!=4||i==6&&j!=0&&j!=1&&j!=3&&j!=4){
            printV[i][j]=42;
        }
        else{
            printV[i][j]=32;
        }
    }
}
}
void I(){
for(int i=0;i<7;i++){
    for(int j=0;j<5;j++){
        if((i==0||j==2||i==6)){
            printI[i][j]=42;
        }
        else{
            printI[i][j]=32;
        }
    }
}
}



int main(){
J();
A();
H();
N();
A();
V();
I();

printConsole();
}
