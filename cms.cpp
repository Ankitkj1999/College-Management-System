#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<ios>
#include<time.h>
#include<iomanip>
#include<stdlib.h>


using namespace std;

//calss defining
//for student
class student
{
    public:
    string fname;//for student first name
    string lname;//for student last name
    string registerstion;//for registeration number
    string classes;//for class info
    static int rollno;//for the roll no of student

    void r1(){
        rollno++;
        cout<<"\t\t\t\t\t\tRoll no. of student: "<<student::rollno;
    }
    
}studentData[20];//variable of student type
int student::rollno=1;

//for teachers
class teachers
{
    public:
    string fst_name;//first name of teacher
    string lst_name;//last name of the teacher
    string qualification;//qulaification of the teacher
    string exp;//experience of the teacher
    string pay;//pay of thr teacher
    string subj;//subject he teaches
    string lec;//lectures per week
    string addrs;//teacher's address
    string cell_no;//pnone number
    string cab_no;//cabin number
    string serves;//number of survrs in the school

}teach[20];//objects of teacher type
//main function













int login()
{
    string username="";
    string pass="";
    char ch;
     //cout<<setw(500);
    cout<<"\n\n\n\n\t\t\t\t\t\t\t COLLEGE MANAGEMENT SYSTEM "
    <<"\n\n\t\t\t\t\t\t\t---------------------------"
    <<"\n\t\t\t\t\t\t\t\t   LOGIN\n"
    <<"\t\t\t\t\t\t\t---------------------------\n\n\n";
    cout<<"\t\t\t\t\t\t\tEnter User Name: ";
    getline(cin, username); 
    cout<<"\n\t\t\t\t\t\t\tEnter Password:  ";
    ch = getch();
    while(ch !=13)
    { //character 13 is enter
    pass.push_back(ch);
    cout<<'$';
    ch=getch();
    }
    if((username=="student"||username=="teacher")&&(pass == "callforcode"||pass == "student"||pass == "teacher"))
    {
        cout<<"\n\n\n\t\t\t\t\tACCESS GRANTED! \n";
        system("pause");
        system("cls");
    }
    
    else
    {
        cout<<"\n\n\n\t\t\t\t\t\tACCESS ABORTED!\n\t\t\t\t\t\tPlease Try Again";
        system("PAUSE");
        system("cls");
        login();
    }
    return 0;
}


int main()
{
    system("(color 7D)");
    int login();
    login();

int i=0,j;//for processing usage;
char choice;// for getting choice
string find;//find shorting
string srch;

while(1)//outer loop
{
    system("cls");//clear screen

//Level 1 Dispaly process
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
 <<"\n\n\t\t\t\t\t  COLLEGE DATA MANAGEMENT\n\n";
 cout<<"\t\t\t\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
 cout<<"\n\n\t\t\t\t\t\t:MAIN SCREEN:\n\n";
cout<<"\t\t\t\t\t\t1. Student Information\n";
cout<<"\t\t\t\t\t\t2. Teacher Information\n";
cout<<"\t\t\t\t\t\t3. Exit Program\n";
cout<<"\n\n\t\t\t\t\tEnter Your Choice: ";
cin>>choice;

system("cls");//Clear screen;

switch(choice)//First switch;
{

    case '1'://Student
    {
        while(1)//inner loop
        {
            system("cls");//Clear screen
             system("(color AD)");
            //Level 2 Display
cout<<"\t\t\t\tSTUDENT INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"\t\t\t\t1. Create New Entry\n";
cout<<"\t\t\t\t2. Find And Dispaly Entry\n";
cout<<"\t\t\t\t3. Jump To Main\n";
cout<<"\n\n\t\t\t\tEnter your choice: ";
cin>>choice;

switch(choice)//Second switch student

{
    case '1':// new entey
{
    ofstream f1("student.txt",ios::app);
    for(i=0;choice!='n';i++)
{

    if((choice=='y')||(choice=='Y')||(choice=='1'))
    {
    system("cls");
    cout<<"\t\t\t\t\tNEW ENTRY\n";
    cout<<"\n\n\t\t\t\t\tEnter First Name: ";
    cin>>studentData[i].fname;
    cout<<"\n\t\t\t\t\tEnter Last Name: ";
    cin>>studentData[i].lname;
    cout<<"\n\t\t\t\t\tEnter Registeration Number: ";
    cin>>studentData[i].registerstion;
    cout<<"\ns\t\t\t\t\tEnter Class: ";
    cin>>studentData[i].classes;
    
    studentData[i].r1();

    f1<<studentData[i].fname<<endl<<studentData[i].lname<<endl<<studentData[i].registerstion<<endl<<studentData[i].classes<<endl;
    cout<<"\n\n\t\t\t\t\tDo you want to enter data: ";
    cout<<"\n\n\t\t\t\t\tPress Y for continue and N to finish:  ";
    cin>>choice;
    }
}
f1.close();
}
continue;//control back to inner loop 1

case '2'://Data display
{ ifstream f2("student.txt");
system("cls");
cout<<"\n\t\t\t\t\t    DISPLAY STUDENT'S DATA\n ";
cout<<"\n\t\t\t\t\tEnter First Name To Be Dispalyed: ";
cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<=i)||(!f2.eof());j++)
{

    getline(f2,studentData[j].fname);

    if(studentData[j].fname==find)
    {
        notFound =1;
        cout<<"\n\t\t\t\t\t\tFirst Name:         "<<studentData[j].fname<<endl;
        cout<<"\n\t\t\t\t\t\tLast Name:          "<<studentData[j].lname<<endl;

        cout<<"\n\t\t\t\t\tRegisteration Number: "<<studentData[j].registerstion<<endl;
        
        cout<<"\n\t\t\t\t\t Class:               "<<studentData[j].classes<<endl;

    }
}


if(notFound ==0){

    cout<<"\n\t\tNo Record Found"<<endl;
}
f2.close();
cout<<"Press any key to continue";
    getch();//To hold data on screen
}
continue;//control back to inner loop 1

case '3'://Jump to main
{
    break;//innner switch break
}
}//student second switch

break;//inner loop 1 breaking
}//student while loop
continue;//control pass to 1st loop
}//student case 1



case '2'://Teacher info
{
while(1)//inner loop 2
{
system("cls");//clear screen
//Level 2 Display Process
cout<<"\t\t\t\tTEACHER INFORMATION AND BIO DATA SECTION\n\n\n";
cout<<"\t\t\t\t1. Create New Entry\n";
cout<<"\t\t\t\t2. Find And Dispaly Entry\n";
cout<<"\t\t\t\t3. Jump To Main\n";
cout<<"\n\n\t\t\t\tEnter Your choice: ";
cin>>choice;

switch (choice)//third switch
{
    case '1'://Insert data
    {
    ofstream t1("teacher.txt",ios::app);

    for(i=0;choice!='n'&& choice!='N';i++)
    {

        if ((choice=='y')||(choice=='Y')||(choice=='1'))
        {
        system("cls");
        cout<<"\t\t\t\t\tEnter First Name: ";
        cin>>teach[i].fst_name;
        cout<<"\t\t\t\t\tEnter Last Name: ";
        cin>>teach[i].lst_name;
        cout<<"\t\t\t\t\tEnter Qualification: ";
        cin>>teach[i].qualification;
        cout<<"\t\t\t\t\tEnter Experience (year): ";
        cin>>teach[i].exp;
        cout<<"\t\t\t\t\tEnter Years In This College: ";
        cin>>teach[i].serves;
        cout<<"\t\t\t\t\tEnter Subject Taught: ";
        cin>>teach[i].subj;
        cout<<"\t\t\t\t\tEnter Lecture Per Week: ";
        cin>>teach[i].lec;
        cout<<"\t\t\t\t\tEnter Salary: ";
        cin>>teach[i].pay;
        cout<<"\t\t\t\t\tEnter Address: ";
        cin>>teach[i].addrs;
        cout<<"\t\t\t\t\tEnter Phone Number: ";
        cin>>teach[i].cell_no;
        cout<<"\t\t\t\t\tEnter Cabin Number: ";
        cin>>teach[i].cab_no;

        t1<<teach[i].fst_name<<endl<<teach[i].lst_name<<endl
        <<teach[i].qualification<<endl<<teach[i].exp<<endl<<teach[i].serves<<endl
        <<teach[i].subj<<endl<<teach[i].lec<<endl<<teach[i].pay<<endl
        <<teach[i].addrs<<endl<<teach[i].cell_no<<endl<<teach[i].cab_no<<endl;
        cout<<"\n\n\t\t\t\tDo Press Y to add Press N for main menu: ";
        cin>>choice;
        }//if
    }//for loop
    //for finding through names
    system("cls");

    t1.close();
    }//case 1

    continue;// Control pass to iner loop 2

    case '2'://Dispaly Data
    {
        ifstream t2("teacher.txt");
        system("cls");
        cout<<"\n\t\t\t\tDISPLAY TEACHER'S ENTRY\n";
        cout<<"\n\t\t\t\tEnter Name To Be Displayed: ";
        cin>>find;

        cout<<endl;
        int notFound =0;
        for(j=0;((j<=i)||(!t2.eof()));j++)
        {

            getline(t2,teach[j].fst_name);

            if(teach[j].fst_name==find)
            {
                notFound =1;
                cout<<"\n\n\t\t\t\tFirst Name: "<<teach[j].fst_name<<endl;
                getline(t2,teach[j].lst_name);
                cout<<"\n\n\t\t\t\tLast Name: "<<teach[j].lst_name<<endl;
                getline(t2,teach[j].qualification);
                cout<<"\n\n\t\t\t\tQualification: "<<teach[j].qualification<<endl;
                getline(t2,teach[j].exp);
                cout<<"\n\n\t\t\t\tExperience: "<<teach[j].exp<<endl;
                
                getline(t2,teach[j].serves);
                cout<<"\n\n\t\t\t\tEars In This College: "<<teach[j].lst_name<<endl;
                
                getline(t2,teach[j].subj);
                cout<<"\n\n\t\t\t\tSubject Taught: "<<teach[j].subj<<endl;
                
                getline(t2,teach[j].lec);
                cout<<"\n\n\t\t\t\tLectures Per Week: "<<teach[j].lec<<endl;
                
                getline(t2,teach[j].pay);
                cout<<"\n\n\t\t\t\tSalary: "<<teach[j].pay<<endl;
                
                getline(t2,teach[j].addrs);
                cout<<"\n\n\t\t\t\tAddress: "<<teach[j].addrs<<endl;
                
                getline(t2,teach[j].cell_no);
                cout<<"\n\n\t\t\t\tPhone Number: "<<teach[j].cell_no<<endl;
                getline(t2,teach[j].cab_no);
                cout<<"\n\n\t\t\t\tCabin Number: "<<teach[j].cab_no<<endl;
 }//if

}//for loop
t2.close();
if(notFound ==0){

    cout<<"\n\t\tNo Record Found"<<endl;
}
cout<<"Press Any Key Twice To Continue";
getch();
getch();
}//case 2

continue;//Control pass to inner loop 2 

case '3'://Jump to main
{
    break;//inner switch
}//case 3

}//inner switch

break;//inner while
}//inner loop

continue;//control pass to 1st loop
}//outer case 2

case '3':
{
    cout<<"\n Brought To You By Call For Code";
    break;//outer case 3
}//outer case 3
}   
break;//outer loop
}//outer while loop
}//int main


