#include <stdio.h>
struct crick
{
    char name[30];
    int rn;

};

int main()
{
    int i,total=0;
    struct crick a[11];
    printf("Enter the detils of the players\n");
    for(i=0;i<11;i++)
    {
        printf("Enter the name of the player\n");
        scanf("%s",a[i].name);
        printf("Enter the runs scored\n");
        scanf("%d",&a[i].rn);
    }
    for(i=0;i<11;i++)
        {
            total= total+a[i].rn;
        }
    printf("total runs scored by the team is  %d",total);
    return 0;
}//wap to accept batting info of a cricket team using structure. it contains player name and runs scored by thr player. calc total runs scored by the team.
// wap to read info of student. it contains, roll no, bday and addmission date.calc age of the student at the time of admission.
//wap to create a structure of student hsving fields roll no , student name ,mark1,mark2,mark3. calc the total and avg marks. arrange the record in acc to accending order of marks.
