#include<stdio.h>
FILE *Student;
typedef struct infoStudent
{
    char name[20];
    char id[20];
    char depertment[20];
    double CSE115;
    double CSE115L;
    double Mat116;
    double Eng102;
    char user[20];
    char pass[20];
} infoS;

//cgpa calculator----------------------
double cgpa(double marks)
{
    if(marks>=92.00)
        return 4.00;
    else if(marks>=90.00)
        return 3.70;
    else if(marks>=86.00)
        return 3.30;
    else if(marks>=83.00)
        return 3.00;
    else if(marks>=80.00)
        return 2.70;
    else if(marks>=77.00)
        return 2.3;
    else if(marks>=73.00)
        return 2.00;
    else if(marks>=70.00)
        return 1.7;
    else if(marks>=67.00)
        return 1.3;
    else if(marks>=60.00)
        return 1.0;
    return 0.0;
}

double Total_Cgpa(double cse115, double cse115L, double mat116, double Eng102)
{
    cse115=cgpa(cse115);
    cse115L=cgpa(cse115L);
    mat116=cgpa(mat116);
    Eng102=cgpa(Eng102);
    cse115*=3.00;
    mat116*=3.00;
    Eng102*=3.00;

    return (cse115+cse115L+mat116+Eng102)/10.00;
}

//teacher marks faculty based-------------------
//CSE115 SFR1 marks-------------
void SFR1()
{
    infoS  Ex[100];
    Student = fopen("UserInfo.txt","r");
    for(int i=0; i<3; ++i)
        fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);

    for(int i=0; i<3; ++i)
    {
        printf("\n%d. Student ID %s:\n",i+1,Ex[i].id);
        printf("Enter Marks: \n");
        fflush(stdin);
        printf("CSE-115: ");
        scanf("%lf", &Ex[i].CSE115);
        printf("CSE-115L: ");
        scanf("%lf", &Ex[i].CSE115L);
        fflush(stdin);
        printf("\n");
    }
    fclose(Student);
    Student = fopen("UserInfo.txt","w");
    for(int i=0; i<3; ++i)
        fprintf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",Ex[i].name,Ex[i].id,Ex[i].depertment,Ex[i].CSE115, Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102,Ex[i].user,Ex[i].pass);
    fclose(Student);
    printf("**Grading Successfully complete!!");

}

//mat116 AmK marks-------------------
void AMK()
{
    infoS  Ex[100];
    Student = fopen("UserInfo.txt","r");
    for(int i=0; i<3; ++i)
        fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);

    for(int i=0; i<3; ++i)
    {
        printf("\n%d. Student ID %s:\n",i+1,Ex[i].id);
        printf("Enter Marks: \n");
        fflush(stdin);
        printf("Math-116: ");

        scanf("%lf", &Ex[i].Mat116);
        fflush(stdin);
        printf("\n");
    }
    fclose(Student);
    Student = fopen("UserInfo.txt","w");
    for(int i=0; i<3; ++i)
        fprintf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",Ex[i].name,Ex[i].id,Ex[i].depertment,Ex[i].CSE115, Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102,Ex[i].user,Ex[i].pass);
    fclose(Student);
    printf("**Grading Successfully complete!!");

}

//Eng102 FHS marks---------
void FHS()
{
    infoS  Ex[100];
    Student = fopen("UserInfo.txt","r");
    for(int i=0; i<3; ++i)
        fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);

    for(int i=0; i<3; ++i)
    {
        printf("\n%d. Student ID %s:\n",i+1,Ex[i].id);
        printf("Enter Marks: \n");
        printf("Eng-102: ");
        fflush(stdin);
        scanf("%lf", &Ex[i].Eng102);
        fflush(stdin);
        printf("\n");
    }
    fclose(Student);
    Student = fopen("UserInfo.txt","w");
    for(int i=0; i<3; ++i)
        fprintf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",Ex[i].name,Ex[i].id,Ex[i].depertment,Ex[i].CSE115, Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102,Ex[i].user,Ex[i].pass);
    fclose(Student);
    printf("**Grading Successfully complete!!");
}

//login as teacher----------
void logingTeacher()
{
    char username[20];
    char password[20];

    printf("\n");
    printf("Please enter Teacher Username and Password -> \n");
    printf("\nUsername: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s", &password);

    if(strcmp(username,"SFR1")==0 && strcmp(password,"sfr01")==0)
    {
        SFR1();
    }
    else if(strcmp(username,"AMK")==0 && strcmp(password,"amk01")==0)
    {
        AMK();
    }
    else if(strcmp(username,"FHS")==0 && strcmp(password,"fhs01")==0)
    {
        FHS();
    }
}

//SignUp as student-----------
void SignUp_Student()
{
    Student = fopen("UserInfo.txt","a");
    if(Student == NULL)
    {
        printf("File isn't Created.");
    }
    else
    {
        infoS Ex[10];
        printf("\nPlease Provide Your Information Below\n--------------------------------------\n");
        printf("Name: ");
        scanf("%s",&Ex[0].name);
        printf("ID: ");
        scanf("%s", &Ex[0].id);
        printf("Department: ");
        scanf("%s", &Ex[0].depertment);
        printf("User Name: ");
        scanf("%s",&Ex[0].user);
        printf("Password: ");
        scanf("%s",&Ex[0].pass);
        int i=0;
        fprintf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",Ex[i].name,Ex[i].id,Ex[i].depertment,Ex[i].CSE115, Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102,Ex[i].user,Ex[i].pass);


    }
    fclose(Student);
    printf("\n**Signed Up Successfully**\n");
}

//log in as student -----------
void LogIn_Student()
{
    infoS  Ex[100];
    Student = fopen("UserInfo.txt","r");
    for(int i=0; i<3; ++i)
        fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);
    char username[20], password[20];
    printf("\nUsername: ");
    scanf("%s",&username);
    printf("Password: ");
    scanf("%s", &password);
    printf("\n");
    int cnt=0;
    for(int i=0; i<3; ++i)
    {
        if(strcmp(username,Ex[i].user)==0 && strcmp(password, Ex[i].pass)==0)
        {
            cnt++;
            fflush(stdin);
            printf("Your Profile:\n");
            printf("----------------");
            printf("\nName: %s\nStudent id: %s\nDepertment: %s", Ex[i].name, Ex[i].id,Ex[i].depertment);


            printf("\nCGPA: ");
            double cg = Total_Cgpa(Ex[i].CSE115,Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102);
            printf("%.2lf\n",cg);

        }

    }
    if(cnt==0)
        printf("***Enter valid username or Password***");
        fclose(Student);
    printf("\n");
}

//view student function----------------------
void view_student()
{
    infoS Ex[10];
    Student = fopen("UserInfo.txt","r");
    for(int i=0; i<3; ++i)
        fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);
    for(int i=0; i<3; ++i)
    {
        printf("\n(%d)Student Profile:\n-------------------\nName: %s\nStudent id: %s\nDepertment: %s",i+1, Ex[i].name, Ex[i].id,Ex[i].depertment);
        printf("\nCGPA: ");
            double cg = Total_Cgpa(Ex[i].CSE115,Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102);
            printf("%.2lf",cg);
            printf("\n");
    }
    fclose(Student);
}

//search student function----------------------
void search_student()
{
    int i;
    char me[25];
    infoS  Ex[100];
    Student = fopen("UserInfo.txt","r");
    if(Student==NULL)
        printf("File isn't created");
    else
    {
        printf("\n");
        for(int i=0; i<3; ++i)
            fscanf(Student,"\n%s\n%s\n%s\n%lf\n%lf\n%lf\n%lf\n%s\n%s",&Ex[i].name,&Ex[i].id,&Ex[i].depertment,&Ex[i].CSE115, &Ex[i].CSE115L,&Ex[i].Mat116,&Ex[i].Eng102,&Ex[i].user,&Ex[i].pass);

        printf("\n");
        fflush(stdin);
        printf("Enter the student ID: ");
        gets(me);
        fflush(stdin);

        for(i=0; i<3; i++)
        {
            if(strcmp(me,Ex[i].id)==0)
            {
                printf("------------------------------\n");
                printf(" Student Name : %s\n", Ex[i].name);
                printf(" Student ID : %s\n", Ex[i].id);
                printf(" Department : %s\n", Ex[i].depertment);
                printf(" CSE115 marks : %lf\n", Ex[i].CSE115);
                printf(" CSE115L marks : %lf\n", Ex[i].CSE115L);
                printf(" MAT116 marks : %lf\n", Ex[i].Mat116);
                printf(" Eng102 marks : %lf\n", Ex[i].Eng102);
                printf(" CGPA: ");
            double cg = Total_Cgpa(Ex[i].CSE115,Ex[i].CSE115L,Ex[i].Mat116,Ex[i].Eng102);
            printf("%.2lf",cg);
                printf("\n");
            }
        }

        fclose(Student);
    }
    printf("\n");
}

//void edit_student()
//{
//    infoS S1;
//    infoS  Ex[100];
//    int i;
//    FILE *Student, *edited;
//    Student = fopen("UserInfo.txt","r");
//    edited = fopen("temp.txt","w");
//    printf("Enter Student ID: ");
//    char id[20];
//    scanf("%s", &Ex[i].id);
//    while(fread(&S1,sizeof(infoS),1,Student))
//    {
//        if(strcmp(Ex[i].id)==0)
//        {
//            printf("Student Record Found\n");
//
//        printf(" Student Name : %s\n", Ex[i].name);
//        printf(" Student ID : %s\n", Ex[i].id);
//        printf(" Department : %s\n", Ex[i].depertment);
//        printf(" CSE115 marks : %lf\n", Ex[i].CSE115);
//        printf(" CSE115L marks : %lf\n", Ex[i].CSE115L);
//        printf(" MAT116 marks : %lf\n", Ex[i].Mat116);
//        printf(" Eng102 marks : %lf\n", Ex[i].Eng102);
//
//        int n;
//        printf("What do you want to edit: ");
//        printf("CSE115 marks : ");
//        fflush(stdin);
//        scanf("%s",&Ex[i].CSE115);
//        printf("CSE115L marks : ");
//        fflush(stdin);
//        scanf("%s",&Ex[i].CSE115L);
//        printf("Mat116 marks : ");
//        fflush(stdin);
//        scanf("%s",&Ex[i].Mat116);
//        printf("Eng102 marks : ");
//        fflush(stdin);
//        scanf("%s",&Ex[i].Eng102);
//        }
//    fwrite(&S1,sizeof(infoS),1,edited);
//    }
//    fclose(edited);
//    fclose(Student);
//    remove("UserInfo.txt");
//    rename("temp.txt", "UserInfo.txt");
//
//
//}


int main()
{
    printf("\n\tWelcome to NSU Result Portal \n");
    printf("   ======================================\n");
    int opt,num1,num2;
    printf("1. Student Portal\n2. Teacher Portal\n3. Exit.\n");
    printf("\n");
    printf("Choose an option: ");
    scanf("%d",&opt);
    switch(opt)
    {

    //student panel
    case 1:
        printf("\nStudent Portal\n");
        printf("-----------------");
        printf("\n1. Sign up student\n2. Student Log In\n3. Back");
        printf("\n");
        printf("\nChoose an option: ");
        scanf("%d",&num1);
        switch(num1)
        {
        case 1:
            SignUp_Student();
            break;
        case 2:
            LogIn_Student();
            break;
        case 3:
            main();
            break;
        }
    main();
    //teacher panel
    case 2:
        printf("\nTeacher Portal\n");
        printf("-----------------");
        printf("\n1. Add Student Marks \n2. View all Students\n3. Search Exact Student\n4. Back");
        printf("\n");
        printf("\nChoose an option: ");
        scanf("%d",&num2);
        switch(num2)
        {
        case 1:
            logingTeacher();
            main();
            break;
        case 2:
            view_student();
            main();
            break;
        case 3:
            search_student();
            main();
            break;
//        case 4:
//        //edit_student();
//        case 5:

        case 4:
            main();
            break;
        }

    //exit from programe
    case 3:
        printf("\n--------Thank You----------");
        exit(1);


    default:
        printf("\nInvalid Choosing Option. Try Again between (1 to 3).\n");
        main();
    }
}
