#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
struct team{
    char name[20];
    int score[30];
    int top;
    int lyf;
    }arr[4];

struct store{
    char s[1000];
    }qrr[20];
char ch2;
void showrules()
{
    system("color B0");
    printf("\n 1.There are 20 points awarded for a correct answer.");
    printf("\n 2.10 points will be deducted from tally for incorrect answer.");
    printf("\n 3.There will be 20 questions in all, 5 questions per team.");
    printf("\n 4.The team can pass on the question to the next team and no points will be deducted.");
    printf("\n 5.If the passed question is answered correctly 10 points will be awarded and if wrong, 10 will be deducted.");
    printf("\n 6.The team can take a lifeline 50-50 at any instance, once throughout the quiz.");
    printf("\n -------------------GOOD LUCK!--------------------------\n\n");
    ch2=getch();
}

int checklyf(int id)
{
    if(arr[id].lyf==1)
        return 1;
    else
        return 0;

}
void storescore(int n,int n1)
{
    int topa=arr[n].top;
    arr[n].score[topa]=n1;
    arr[n].top++;
}
int display(int a)
{
    int i,sum=0;
    for(i=0;i<arr[a].top;i++)
    {
        sum+=arr[a].score[i];
    }
    return sum;

}
void quiz()
{
    int m=0;
    FILE *fp1;
    fp1=fopen("questions.txt","r");
    if(fp1=="NULL")
    {
        printf("FILE NOT FOUND");
        exit(0);
    }
    else
    {
        while(!(feof(fp1)))
        {
            fgets(qrr[m].s,950,fp1);
            m++;
        }
    }
    int i=1;
    int ch;
    int k=0;
    while(i<21)
    {
        if(i==20)
        {
            system("cls");
            printf("\n---------------------------\nTeam 4:\n%s",qrr[i-1].s);
            printf("\nA.Polar Bear  B.Hyena  C.Donkey  D.Chimpanzee  E.Life-Line\n");
            terminal20:
            ch=toupper(getch());
            if(ch=='B')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(3,20);

            }
            else if(ch=='E')
            {
                if(checklyf(3))
                {
                    printf("\n B.Hyena  C.Donkey");
                    arr[3].lyf=0;
                    goto terminal20;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal20;
                }
            }
            else
                {
                    printf("\nWRONG! 10 points deducted");
                    storescore(3,-10);
                }
         ch=getch();
        }
        else if(i==19)
        {
            system("cls");
            printf("\n---------------------------\nTeam 3:\n%s",qrr[i-1].s);
            printf("\nA.Mt. K2  B.Mt. Kilimanjaro  C.Mt. Kanchanjunga  D.Mt. Makalu  E.Life-Line\n");
            terminal19:
            ch=toupper(getch());
            if(ch=='B')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(2,20);

            }
            else if(ch=='E')
            {
                if(checklyf(2))
                {
                    printf("\n A.Mt. K2  B.Mt. Kilimanjaro");
                    arr[2].lyf=0;
                    goto terminal19;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal19;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(2,-10);}
        ch=getch();
        }
        else if(i==18)
        {
            system("cls");
            printf("\n---------------------------\nTeam 2:\n%s",qrr[i-1].s);
            printf("\nA.Football  B.Baseball  C.Cricket  D.Golf  E.Life-Line\n");
            terminal18:
            ch=toupper(getch());
            if(ch=='C')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(1,20);

            }
            else if(ch=='E')
            {
                if(checklyf(1))
                {
                    printf("\n A.Football  C.Cricket");
                    arr[1].lyf=0;
                    goto terminal18;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal18;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(1,-10);}
        ch=getch();
        }
         else if(i==17)
        {
            system("cls");
            printf("\n---------------------------\nTeam 1:\n%s",qrr[i-1].s);
            printf("\nA.James Gosling  B.Mark Zuckerberg  C.Matt Ritchie  D.Sunfling Roberts  E.Life-Line\n");
            terminal17:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(0,20);

            }
            else if(ch=='E')
            {
                if(checklyf(0))
                {
                    printf("\n A.James Gosling  B.Mark Zuckerberg");
                    arr[0].lyf=0;
                    goto terminal17;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal17;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(0,-10);}
        ch=getch();
        }
        else if(i==16)
        {
            system("cls");
            printf("\n---------------------------\nTeam 4:\n%s",qrr[i-1].s);
            printf("\nA.Newton  B.Tesla  C.Einstein  D.Faraday  E.Life-Line\n");
            terminal16:
            ch=toupper(getch());
            if(ch=='D')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(3,20);

            }
            else if(ch=='E')
            {
                if(checklyf(3))
                {
                    printf("\n B.Tesla  D.Faraday");
                    arr[3].lyf=0;
                    goto terminal16;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal16;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(3,-10);}
        ch=getch();
        }
        else if(i==15)
        {
            system("cls");
            printf("\n---------------------------\nTeam 3:\n%s",qrr[i-1].s);
            printf("\nA.Coulumb  B.Watt  C.Power  D.Joule  E.Life-Line\n");
            terminal15:
            ch=toupper(getch());
            if(ch=='B')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(2,20);

            }
            else if(ch=='E')
            {
                if(checklyf(2))
                {
                    printf("\n B.Watt  D.Joule");
                    arr[2].lyf=0;
                    goto terminal15;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal15;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(2,-10);}
        ch=getch();
        }
        else if(i==14)
        {
            system("cls");
            printf("\n---------------------------\nTeam 2:\n%s",qrr[i-1].s);
            printf("\nA.Munich  B.Rhone Valley  C.Berlin  D.Mainz  E.Life-Line\n");
            terminal14:
            ch=toupper(getch());
            if(ch=='C')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(1,20);

            }
            else if(ch=='E')
            {
                if(checklyf(1))
                {
                    printf("\n B.Rhone Valley  C.Berlin");
                    arr[1].lyf=0;
                    goto terminal14;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal14;
                }
            }
            else
               {

               printf("\nWRONG! 10 points deducted");
                storescore(1,-10);}
         ch=getch();
        }
        else if(i==13)
        {
            system("cls");
            printf("\n---------------------------\nTeam 1:\n%s",qrr[i-1].s);
            printf("\nA.Rome  B.Vactican City  C.Madrid  D.Berlin  E.Life-Line\n");
            terminal13:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(0,20);

            }
            else if(ch=='E')
            {
                if(checklyf(0))
                {
                    printf("\n A.James Gosling  B.Mark Zuckerberg");
                    arr[0].lyf=0;
                    goto terminal13;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal13;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(0,-10);}
        ch=getch();
        }
        else if(i==12)
        {
            system("cls");
            printf("\n---------------------------\nTeam 4:\n%s",qrr[i-1].s);
            printf("\nA.Transistor  B.Valves  C.IntegratedCircuit  D. S.S.I  E.Life-Line\n");
            terminal12:
            ch=toupper(getch());
            if(ch=='B')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(3,20);

            }
            else if(ch=='E')
            {
                if(checklyf(3))
                {
                    printf("\n B.Valves  D. S.S.I");
                    arr[3].lyf=0;
                    goto terminal12;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal12;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(3,-10);}
    ch=getch();
        }
        else if(i==11)
        {
            system("cls");
            printf("\n---------------------------\nTeam 3:\n%s",qrr[i-1].s);
            printf("\nA.Shutter Island  B.The Secret In Their Eye's  C.The King's Speech  D.The Mind Reader  E.Life-Line\n");
            terminal11:
            ch=toupper(getch());
            if(ch=='C')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(2,20);

            }
            else if(ch=='E')
            {
                if(checklyf(2))
                {
                    printf("\n A.Shutter Island  C.The King's Speech");
                    arr[2].lyf=0;
                    goto terminal11;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal11;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(2,-10);}
         ch=getch();
        }
        else if(i==10)
        {
            system("cls");
            printf("\n---------------------------\nTeam 2:\n%s",qrr[i-1].s);
            printf("\nA.Germany  B.Hungary  C.Belgium  D.France  E.Life-Line\n");
            terminal10:
            ch=toupper(getch());
            if(ch=='D')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(1,20);

            }
            else if(ch=='E')
            {
                if(checklyf(1))
                {
                    printf("\n C.Belgium  D.France");
                    arr[1].lyf=0;
                    goto terminal10;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal10;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(1,-10);}
         ch=getch();
        }
        else if(i==9)
        {
            system("cls");
            printf("\n---------------------------\nTeam 1:\n%s",qrr[i-1].s);
            printf("\nA.Rahul Dravid  B.Saurav Ganguly  C.Dhoni  D.Anil Kumble  E.Life-Line\n");
            terminal9:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(0,20);

            }
            else if(ch=='E')
            {
                if(checklyf(0))
                {
                    printf("\n A.Rahul Dravid  B.Saurav Ganguly");
                    arr[0].lyf=0;
                    goto terminal9;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal9;
                }
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(0,-10);}
         ch=getch();
        }
        else if(i==8)
        {
            system("cls");
            printf("\n---------------------------\nTeam 4:\n%s",qrr[i-1].s);
            printf("\nA.Seismology  B.Cosmology  C.Orology  D.Etimology  E.Life-Line\n");
            terminal8:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(3,20);

            }
            else if(ch=='E')
            {
                if(checklyf(3))
                {
                    printf("\n A.Seismology  C.Orology");
                    arr[3].lyf=0;
                    goto terminal8;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal8;
                }
            }
            else
               {

                printf("\nWRONG! 10 points deducted");
                storescore(3,-10);}
         ch=getch();
        }
        else if(i==7)
        {
            system("cls");
            printf("\n---------------------------\nTeam 3:\n%s",qrr[i-1].s);
            printf("\nA.3  B.5  C.8  D.4  E.Life-Line\n");
            terminal7:
            ch=toupper(getch());
            if(ch=='C')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(2,20);

            }
            else if(ch=='E')
            {
                if(checklyf(2))
                {
                    printf("\n A.3  C.8");
                    arr[2].lyf=0;
                    goto terminal7;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal7;
                }
            }
            else
               {

                printf("\nWRONG! 10 points deducted");
                storescore(2,-10);}
        ch=getch();
        }
        else if(i==6)
        {
            system("cls");
            printf("\n---------------------------\nTeam 2:\n%s",qrr[i-1].s);
            printf("\nA.5  B.7  C.10  D.Depends On the Size  E.Life-Line\n");
            terminal6:
            ch=toupper(getch());
            if(ch=='B')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(1,20);

            }
            else if(ch=='E')
            {
                if(checklyf(1))
                {
                    printf("\n B.7  D.Depends On the Size");
                    arr[1].lyf=0;
                    goto terminal6;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal6;
                }
            }
            else
               {

               printf("\nWRONG! 10 points deducted");
                storescore(1,-10);}
         ch=getch();
        }
        else if(i==5)
        {
            system("cls");
            printf("\n---------------------------\nTeam 1:\n%s",qrr[i-1].s);
            printf("\nA.Black  B.Red  C.Blue  D.Orange  E.Life-Line\n");
            terminal5:
            ch=toupper(getch());
            if(ch=='D')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(0,20);

            }
            else if(ch=='E')
            {
                if(checklyf(0))
                {
                    printf("\n A.Black  D.Orange");
                    arr[0].lyf=0;
                    goto terminal5;
                }
                else
                {
                    printf("\nSorry you don't have any lifeline left. Please choose from above options only.");
                    goto terminal5;
                }
            }
            else
            {
                    printf("\nWRONG! 10 points deducted");
                    storescore(0,-10);
                }
        ch=getch();
        }
        else if(i==4)
        {
            system("cls");
            printf("\n---------------------------\nTeam 4:\n%s",qrr[i-1].s);
            printf("\nA. AB  B. O  C. B  D. A  E.Life-Line\n");
            terminal4:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(3,20);

            }
            else if(ch=='E')
            {

                    printf("\n A. AB  B. O");
                    arr[3].lyf=0;
                    goto terminal4;

            }
            else
            {
                    printf("\nWRONG! 10 points deducted");
                    storescore(3,-10);
            }
          ch=getch();
        }
        else if(i==3)
        {
            system("cls");
            printf("\n---------------------------\nTeam 3:\n%s",qrr[i-1].s);
            printf("\nA.Spain  B.Portugal  C.Brazil  D.Argentina  E.Life-Line\n");
            terminal3:
            ch=toupper(getch());
            if(ch=='C')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(2,20);

            }
            else if(ch=='E')
            {
                printf("\n C.Brazil  D.Argentina");
                arr[2].lyf=0;
                goto terminal3;
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(2,-10);}
         ch=getch();
        }
        else if(i==2)
        {
            system("cls");
            printf("\n---------------------------\nTeam 2:\n%s",qrr[i-1].s);
            printf("\nA.Martina Hingis  B.Maria Sarapova  C.Kim Clijster  D.Serena Williams\n");
            terminal2:
            ch=toupper(getch());
            if(ch=='D')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(1,20);

            }
            else if(ch=='E')
            {

                    printf("\n C.Kim Clijister  D.Serena Williams");
                    arr[1].lyf=0;
                    goto terminal2;
            }
            else
                {printf("\nWRONG! 10 points deducted");
                storescore(1,-10);
        }
          ch=getch();
        }
        else if(i==1)
        {
            system("cls");
            printf("\n---------------------------\nTeam 1:\n%s",qrr[i-1].s);
            printf("\nA.George Boole  B.Boole Amstrong  C.Christian Saubers  D.Bruce Lipschitz  E.Life-Line\n");
            terminal1:
            ch=toupper(getch());
            if(ch=='A')
            {
                printf("\nCORRECT! 20 points to you.");
                storescore(0,20);

            }
            else if(ch=='E')
            {
                    printf("\n A.George Boole  B.Boole Amstrong");
                    arr[0].lyf=0;
                    goto terminal1;
                }

            else
               {

               printf("\nWRONG! 10 points deducted");
                storescore(0,-10);
               }
            ch=getch();
        }
        i++;
    }

}
void teamname()
{
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("\nTeam %d: Enter your name:-",i+1);
        scanf("%s",arr[i].name);
        arr[i].top=0;
        arr[i].lyf=1;
    }
    ch2=getch();
}
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mywindow:
     system("cls");
     system("color 17");
     printf("\n\t\t\t   WELCOME ");
     printf("\n\t\t\t      to ");
     printf("\n\t\t\t   THE GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t   YOU KNOW YOU GROW!!!!!!!!!!!    ") ;
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t > Press S to start the game");
     printf("\n\t\t > Press H to view the scores  ");
     printf("\n\t\t > press R for rules            ");
     printf("\n\t\t > press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");

     choice=toupper(getch());
     if(choice=='R')
     {
         showrules();
         goto mywindow;
     }
     else if(choice=='S')
     {
         teamname();
         quiz();
         goto mywindow;
     }
     else if(choice=='Q')
     {
         printf("\nTHANK YOU FOR PLAYING!");
         exit(0);
     }
     else if(choice=='H')
     {
         printf("Team 1: %s has scored %d points\n",arr[0].name,display(0));
         printf("Team 2: %s has scored %d points\n",arr[1].name,display(1));
         printf("Team 3: %s has scored %d points\n",arr[2].name,display(2));
         printf("Team 4: %s has scored %d points\n",arr[3].name,display(3));
         ch2=getch();
         goto mywindow;
     }
}
