#include<stdio.h>
#include<dos.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int sound(int *login);                            //This Fuction Will Produce Sound On Any Worng Input... 
  
struct Student
{
	char name[30];
	int id;
	int marks;
};

struct PhysicsQuestions
{
	char question[150];
	char options[100];
};

struct MathematicsQuestions
{
	char question[150];
	char options[100];
};

struct EnglishQuestions
{
	char question[150];
	char options[100];
};

struct GKQuestions
{
	char question[150];
	char options[100];
};

int random(int i,int *asked_questions)
{
	int index;
	do
	{
		index = rand()%i;	 
	} while(asked_questions[index] != 0);
	
	asked_questions[index] = 1;
	return index;
}

void gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);	
}

void SoundDiss()                                 //Produce Sound On Dissqualification Of Candidate...
{
    Beep(440,200);  
    Beep(494,200);  
    Beep(523,200);  
    Beep(587,200);  
    Beep(659,500);  
}

void loading() 
{ 	
	int i ,j;
	gotoxy(75,23);
	printf("LOADING");
	gotoxy(68,24);
 	printf("=====================");
	gotoxy(66,25);
	printf(" | ");
	gotoxy(88,25);
	printf(" | ");
	gotoxy(68,26);
	printf("=====================");
	gotoxy(73,28);
	printf("PLEASE WAIT...");
 	gotoxy(68,25);
	for(i=0;i<=20;i++)
	{
		for(j=0;j<=40000000;j++);
			printf("%c",177);
	}
	system("cls");	
}

void PhysicsSection()
{
	gotoxy(68,12);
	printf("PHYSICS SECTION");
	gotoxy(55,14);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,22);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,16);
	printf("[1]. This Section Consist Of 10 Question");
	gotoxy(55,18);
	printf("[2]. Answer Each Of The Following Question");
	gotoxy(55,20);
	printf("[3]. You May Start Now");
	gotoxy(55,24);
	system("pause");
}

void MathematicSection()
{
	gotoxy(66,12);
	printf("MATHEMATIC SECTION");
	gotoxy(55,14);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,22);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,16);
	printf("[1]. This Section Consist Of 10 Question");
	gotoxy(55,18);
	printf("[2]. Answer Each Of The Following Question");
	gotoxy(55,20);
	printf("[3]. You May Start Now");
	gotoxy(55,24);
	system("pause");
}

void EnglishSection()
{
	system("color 1f");
	gotoxy(68,12);
	printf("ENGLISH SECTION");
	gotoxy(55,14);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,22);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,16);
	printf("[1]. This Section Consist Of 10 Question");
	gotoxy(55,18);
	printf("[2]. Answer Each Of The Following Question");
	gotoxy(55,20);
	printf("[3]. You May Start Now");
	gotoxy(55,24);
	system("pause");
}

void GenKnowledgeSection()
{
	gotoxy(63,12);
	printf("GENERAL KNOWLEDGE SECTION");
	gotoxy(55,14);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,22);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(55,16);
	printf("[1]. This Section Consist Of 10 Question");
	gotoxy(55,18);
	printf("[2]. Answer Each Of The Following Question");
	gotoxy(55,20);
	printf("[3]. You May Start Now");
	gotoxy(55,24);
	system("pause");
}

void instruction()
{
	gotoxy(54,2);
	printf("NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCE");
	gotoxy(54,3);
	printf("====================================================");
	gotoxy(67,5);
	printf("F A S T KARACHI CAMPUS");
	gotoxy(67,6);
	printf("=======================");
	gotoxy(51,8);
	printf("( FOUNDATION FOR ADVANCEMENT OF SCIENCES AND TECHNOLOGY )");
	gotoxy(51,9);
	printf("==========================================================");
	gotoxy(72,11);
	printf("INSTRUCTIONS");
	gotoxy(72,12);
	printf("============");
	gotoxy(32,14);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(32,25);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(32,16);
	printf("[1]. Apitutde Test Consist Of Four Sections");
	gotoxy(32,17);
	printf("[2]. Each Section Consist Of Ten Question");
	gotoxy(32,18);
	printf("[3]. Read Each Question Care Fully");
	gotoxy(32,19);
	printf("[4]. Answer To Each Question");
	gotoxy(32,20);
	printf("[5]. In Each Questions There Are Three Options :- A,B Or C Choose The Appropriate Answer.");
	gotoxy(32,21);
	printf("[6]. You Will Be Provided I.D And Password");
	gotoxy(32,22);
	printf("[7]. Use Those Information For Login");
	gotoxy(32,23);
	printf("[8]. If You Fail To Enter Correct I.D And Password For Three Consecutive Time You Will Be Dissqualified");
	gotoxy(32,27);
	system("pause");
}
                                                    //MAIN FUNCTION...                               
int main()
{
	system("color 1f");
	char pasword[10],ch,choice,email[30];
	int mis=0,userid,userid1,id,id1,i,contno;
	char rString1[20],pasword1[10],ch1;
    char alphabets[26] = {'a','b','A','2','C','f','Z','h','8','j','x','l','7','6','Y','p','L','r','s','m','u','9','5','3','1','0'};
    char alphabets1[26] = {'a','b','A','2','C','f','Z','h','8','j','x','l','7','6','Y','p','L','r','s','m','u','9','5','3','1','0'};
	char rString[20];
	
	srand(time(NULL));
	userid = 100000+rand()%100000;
	userid1 = 100000+rand()%100000;
	
	i=0;
	while(i<6) 
	{
		int temp = rand() % 26;
		rString[i] = alphabets[temp];
		i++;
	}
	
    i=0;
	while(i<6)
	{
		int temp1 = rand() % 26;
		rString1[i] = alphabets1[temp1];
		i++;
	}
	
	
	//Main Menu...
	char cho;
	main:gotoxy(48,4);
	printf("WELCOME TO NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCE");
	gotoxy(48,5);
	printf("===============================================================");
	gotoxy(66,7);
	printf("F-A-S-T KARACHI CAMPUS");
	gotoxy(66,8);
	printf("=======================");
	gotoxy(51,10);
	printf("( FOUNDATION FOR ADVANCEMENT OF SCIENCES AND TECHNOLOGY )");
	gotoxy(51,11);
	printf("==========================================================");
	gotoxy(58,16);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(58,18);
	printf("Press [1]. Admin");
	gotoxy(58,20);
	printf("Press [2]. Student Aptitude Test");
	gotoxy(58,22);
	printf("Press [3]. Exit");
	gotoxy(58,24);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	en:gotoxy(58,27);
	printf("Enter Your Choice: ");
	cho=getche();
	
	if(cho=='1'||cho=='2'||cho=='3')
	{
		
	}
	
	else
	{
		goto en;
	}
	
	if(cho == '1')
	{
		system("cls");
		loading();
		goto m;
	}
	
	else if(cho == '2')
	{
		system("cls");
		loading();
		goto stud;
	}
	
	else
	{
		system("cls");
		printf("Thank You!");
		exit(1);
	}
	
	
	//ADMIN PANEL...
	m:gotoxy(48,4);
	printf("WELCOME TO NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCE");
	gotoxy(48,5);
	printf("===============================================================");
	gotoxy(66,7);
	printf("F A S T KARACHI CAMPUS");
	gotoxy(66,8);
	printf("=======================");
	gotoxy(51,10);
	printf("( FOUNDATION FOR ADVANCEMENT OF SCIENCES AND TECHNOLOGY )");
	gotoxy(51,11);
	printf("==========================================================");
	gotoxy(60,14);
	printf("WELCOME TO ADMINISTRATION DEPARTMENT");
	gotoxy(60,15);
	printf("=====================================");
    gotoxy(56,20);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(56,26);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(1,21);
	printf("I.D-PASSWORD");
	gotoxy(1,23);
	printf("USER I.D: %d", userid);
	gotoxy(1,25);
	printf("PASSWORD: %s",rString);
	c:gotoxy(60,22);
    printf("Enter I.D: ");
    scanf("%d",&id);
    
    gotoxy(77,24);
    printf("\xB2\xB2\xB2\xB2\xB2");
    gotoxy(60,24);
    printf("Enter Password: ");
    for(i=0;i<6;i++)
    {
        f:ch = getch();
        if(ch == 8)
        {
  	        goto f;
        }
    pasword[i] = ch;
    ch = '*' ;
    printf("%c",ch);
    }
    pasword[i] = '\0';
    
    if(mis<3)
	{
		for(i=0;i<6;i++)
		{
	    if(id==userid  && strcmp(pasword,rString)==0)
    	{
    		system("cls");
    		s:gotoxy(56,20);
	        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	        gotoxy(56,28);
	        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	        gotoxy(56,18);
    		printf("STUDENT - INFORMATION");
    		gotoxy(58,22);
    		printf("Press [1]. All Student Records");
    		gotoxy(58,24);
    		printf("Press [2]. Selected Student Records");
    		gotoxy(58,26);
    		printf("Press [3]. Main Menu");
    		gotoxy(58,30);
    		en1:printf("Enter Your Choice: ");
    		choice=getche();
    		if(choice=='1'||choice=='2'||choice=='3')
        	{
		
	        }
	        else
	        {
		        goto en1;
        	}
    		if(choice=='1')
			{
				system("cls");
				loading();
				goto z;
			}
			else if(choice == '2')
			{
				system("cls");
				loading();
				goto y;
			}
			else
			{
				system("cls");
				goto main;
			}
		break;
	    }
	    else
	    {
	    mis++;
	    sound(&mis);
		gotoxy(57,18);
    	printf("Login Fail: %d",mis);
    	if(mis ==3 )
    	{
    		system("cls");
    		SoundDiss();
    		goto b;
		}
		goto c;
	    }
	    }
    }
    else
    {
	    b:printf("\nAdmin System Has Been Locked Please Try After Few Hours");
	    printf("\nThank You!");
	    printf("\n\nPress Any Key For Exit...");
	    exit(1);
    }
    pasword[i] = ' ';
    
	struct PhysicsQuestions questions[100];
	struct MathematicsQuestions questions1[100];
	struct EnglishQuestions questions2[100];
	struct GKQuestions questions3[100];
	struct Student std;
	
	fflush(stdin);
	stud:printf("\nSTUDENT INFORMATION:-");
    printf("\n\n[1].Enter Your First Name: ");
	scanf("%s",std.name);
	fflush(stdin);
	printf("\n[2].Enter Your Email Address: ");
	gets(email);
	fflush(stdin);
	printf("\n[3].Enter Your Contact Number: ");
	scanf("%d",&contno);
	fflush(stdin);
	system("cls");
	gotoxy(48,4);
	printf("WELCOME TO NATIONAL UNIVERSITY OF COMPUTER AND EMERGING SCIENCE");
	gotoxy(48,5);
	printf("===============================================================");
	gotoxy(66,7);
	printf("F A S T KARACHI CAMPUS");
	gotoxy(66,8);
	printf("=======================");
	gotoxy(51,10);
	printf("( FOUNDATION FOR ADVANCEMENT OF SCIENCES AND TECHNOLOGY )");
	gotoxy(51,11);
	printf("==========================================================");
	gotoxy(66,14);
	printf("WELCOME TO APTITUDE TEST");
	gotoxy(66,15);
	printf("========================");
    gotoxy(56,20);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(56,26);
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(1,21);
	printf("I.D-PASSWORD");
	gotoxy(1,23);
	printf("USER I.D: %d", userid1);
	gotoxy(1,25);
	printf("PASSWORD: %s",rString1);
	d:gotoxy(60,22);
    printf("Enter I.D: ");
    scanf("%d",&id1);
    gotoxy(77,24);
    printf("\xB2\xB2\xB2\xB2\xB2");
    gotoxy(60,24);
    printf("Enter Password: ");
    for(i=0;i<6;i++)
    {
        fg:ch1 = getch();
        if(ch1 == 8)
        {
  	    goto fg;
        }
    pasword1[i] = ch1;
    ch1 = '*' ;
    printf("%c",ch1);
    }
    pasword1[i] = '\0';
    
    if(mis<3)
	{
		for(i=0;i<6;i++)
		{
	    if(id1==userid1  && strcmp(pasword1,rString1)==0)
    	{
    	system("cls");
    	goto i;
		break;
	    }
	    else
	    {
	    mis++;
	    sound(&mis);
		gotoxy(57,18);
    	printf("Login Fail: %d",mis);
    	if(mis ==3 )
    	{
    		system("cls");
    		SoundDiss();
    		goto cb;
		}
		goto d;
	    }
	    }
    }
    else
    {
	    cb:printf("\nYou Failed To Login Your System In Three Attempts. You Are Disqualified.");
	    printf("\nThank You!");
	    printf("\n\nPress Any Key For Exit...");
	    exit(1);
    }
    pasword1[i] = ' ';
    
	system("pause");
	system("cls");
	loading();
	system("cls");
	i:instruction();
	system("cls");
	loading();
	system("cls");
	
	char ab;
	int totalmarks = 0;
	char c[128];
	srand(time(0));
		
    FILE *fptr;
    FILE *fptr1;
    FILE *fptr2;
    FILE *fptr3;
    
	fptr = fopen("Physics.txt","r");
	fptr1 = fopen("math.txt","r");
	fptr2 = fopen("english.txt","r");
	fptr3 = fopen("gk.txt","r");
	
	
	//General Knowledge Section...
	int gki=0;
	while(fgets(questions3[gki].question, sizeof questions3[gki].question, fptr3) != NULL)
	{			
		fgets(questions3[gki].options, sizeof questions3[gki].options, fptr3);
		gki++;		
	}
	int n;	
    char ans3[100]={'a','a','c','a','a','a','b','c','c','c'};
	int *asked_questions3 = (int *)malloc(sizeof(int)*gki);
	memset(asked_questions3, 0, gki*sizeof(int)); 	
	
	
	//English Section...
	int englishi=0;
	while(fgets(questions2[englishi].question, sizeof questions2[englishi].question, fptr2) != NULL)
	{			
		fgets(questions2[englishi].options, sizeof questions2[englishi].options, fptr2);
		englishi++;		
	}
	int m;	
    char ans2[100]={'b','c','b','a','c','b','c','a','c','c'};
	int *asked_questions2 = (int *)malloc(sizeof(int)*englishi);
	memset(asked_questions2, 0, englishi*sizeof(int)); 
		
	
	//Mathematic Section...
	int mathi=0;
	while(fgets(questions1[mathi].question, sizeof questions1[mathi].question, fptr1) != NULL)
	{			
		fgets(questions1[mathi].options, sizeof questions1[mathi].options, fptr1);
		mathi++;		
	}
	int l;	
    char ans1[100]={'c','c','c','c','a','a','c','b','b','a'};
	int *asked_questions1 = (int *)malloc(sizeof(int)*mathi);
	memset(asked_questions1, 0, mathi*sizeof(int)); 
	
	
	//Physics Section...
	int physicsi = 0;
	while(fgets(questions[physicsi].question, sizeof questions[physicsi].question, fptr) != NULL)
	{			
		fgets(questions[physicsi].options, sizeof questions[physicsi].options, fptr);
		physicsi++;		
	}
	int k;	
	physicsi=physicsi-1;
    char ans[100]={'c','b','a','c','a','c','c','a','b','b'};
	int *asked_questions = (int *)malloc(sizeof(int)*physicsi);
	memset(asked_questions, 0, physicsi*sizeof(int)); 	
	PhysicsSection();
	system("cls");
	for(k=0;k<physicsi;k++)
	{
		int index = random(physicsi,asked_questions);
		printf("\n%d.",k+1);		
		printf(" %s",questions[index].question);
		printf("\n%s",questions[index].options);
		a:printf("\nEnter Your Answer: ");
		fflush(stdin);
		ab=getche();
		if(ab=='a'||ab=='b'||ab=='c')
		{
		if(ans[index]==ab){
			printf("\n\nCorrect\n");
			totalmarks++;
		}
		else
			printf("\n\nWrong Answer\n");	
			printf("\n");	
		}
		else
		{
			printf("\nEnter Only: a,b or c");
			printf("\n");
			goto a;
		}
	}
	
	//Mathematics Section.
	system("pause"); 
    system("cls");     
	MathematicSection();     
	system("cls");           	
	for(l=0;l<mathi;l++)
	{
		int index = random(mathi,asked_questions1);
		printf("\n%d.",l+1);		
		printf(" %s",questions1[index].question);
		printf("\n%s",questions1[index].options);
		printf("\nEnter Your Answer: ");
		fflush(stdin);
	  e:ab=getche();
	  if(ab=='a'||ab=='b'||ab=='c')
	  {
		if(ans1[index]==ab){
			totalmarks++;
			printf("\n\nCorrect\n");
		}
			
		else
			printf("\n\nWrong Answer\n");	
			printf("\n");	
		}
		else
		{
			printf("\nEnter Only a,b Or c");
			printf("\n");
			goto e;
		}
	}
	
	//English Section.
	system("pause"); 
    system("cls");  
	EnglishSection();     
	system("cls");         
	for(m=0;m<englishi;m++)
	{
		int index = random(englishi,asked_questions2);
		printf("\n%d.",m+1);		
		printf(" %s",questions2[index].question);
		printf("\n%s",questions2[index].options);
		q:printf("\nEnter Your Answer: ");
		fflush(stdin);
		ab=getche();
		if(ab=='a'||ab=='b'||ab=='c')
		{
		if(ans2[index]==ab){
			totalmarks++;
			printf("\n\nCorrect\n");
		}
		else
			printf("\n\nWrong Answer\n");	
			printf("\n");	
		}
		else
		{
			printf("\nEnter a,b Or c");
			printf("\n");
			goto q;
		}
	}      
	
	//Genral Knowledge Section...
	
	system("pause"); 
    system("cls");     
	GenKnowledgeSection();     
	system("cls");               	
	for(n=0;n<mathi;n++)
	{
		int index = random(mathi,asked_questions3);
		printf("\n%d.",n+1);		
		printf(" %s",questions3[index].question);
		printf("\n%s",questions3[index].options);
		printf("\nEnter Your Answer: ");
		fflush(stdin);
		g:ab=getche();
		if(ab=='a'||ab=='b'||ab=='c')
		{
		if(ans3[index]==ab){
			totalmarks++;
			printf("\n\nCorrect\n");
		}
		else
			printf("\n\nWrong Answer\n");	
			printf("\n");		
		}
		else
		{
			printf("\nEnter a,b Or c");
			printf("\n");
			goto g;
		}
	}
	fclose(fptr);
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	std.marks = totalmarks;
	srand(time(NULL));
	std.id=rand()%100;
	FILE *fstd = fopen("student.dat","ab");
	fwrite(&std,sizeof (struct Student),1,fstd);
	fclose(fstd);
	struct Student std2;
	fstd = fopen("student.dat","rb");
	system("Cls");
	//stds record
	printf("\nStudent I.D\tStudent Name\t\tStudent Score");
	while(fread(&std2,sizeof (struct Student),1,fstd)){
	printf("\n\n%d\t\t%-15s\t\t%d",std2.id,std2.name,std2.marks);
	i++;
    }
    printf("\n\n");
    system("pause");
    system("cls");
    goto main;
    
	z:fstd = fopen("student.dat","rb");
	system("Cls");
	//stds record
	printf("\nStudent I.D\tStudent Name\t\tStudent Score");
	while(fread(&std2,sizeof (struct Student),1,fstd))
	{
	printf("\n\n%d\t\t%-15s\t\t%d",std2.id,std2.name,std2.marks);
    }
    printf("\n\n");
    system("pause");
    system("cls");
    goto s;	
	
	int criteria;
	y:fstd = fopen("student.dat","rb");
	printf("\nEnter Criteria For Student Selection: ");
	scanf("%d",&criteria);
	printf("\nStudent I.D\tStudent Name\t\tStudent Score");
	while(fread(&std2,sizeof (struct Student),1,fstd)){
		if(std2.marks>criteria)
		{
			printf("\n\n%d\t\t%-15s\t\t%d",std2.id,std2.name,std2.marks);
		}
	}
	printf("\n\n");
    system("pause");
    system("cls");
    goto s;
	return 0;   	
}
int sound(int *login)
{
	int i=0;
	if(*login==i)
        	{
        		Beep(800, 200);
  			 	Beep(800, 200);
			}
			else
			{
				Beep(800, 200);
  			 	Beep(1000,200);
			}
			i++;
}
