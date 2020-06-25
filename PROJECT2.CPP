#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>

int i=0;
void lines()
{	gotoxy(21,37);
	cout<<"--------------------------------------";
	for(int l=0;l<5;l++)
		{	gotoxy(21,38+l);
			cout<<"|";
		}
	gotoxy(21,43);
	cout<<"--------------------------------------";
	for(int m=0;m<5;m++)
		{	gotoxy(58,38+m);
			cout<<"|";
		}
}
void bbps()
{       for(int i=1;i<=80;i++)
		{	gotoxy(i,2);
			cout<<"-";
		}
	gotoxy(29,4);
	cout<<"BAL BHARATI PUBLIC SCHOOL ";
	gotoxy(33,6);
	cout<<"RESULT CLASS XII ";
	for(i=1;i<=80;i++)
		{	gotoxy(i,8);
			cout<<"-";
		}
}
class student
{       private:

	int admno,rno;
	char name[20],fname[20],mname[20],clasec[5],grade;
	float eng,maths,cpp,phy,chem;

	public:

	int getrollno()
	{	return rno;
	}
	void getdata()
	{	clrscr();
		bbps();
		cout<<"\n\n  ENTER THE DETAILS"<<endl;
		cout<<"\n\n\n   ENTER ADMISSION NO.: ";
		cin>>admno;
		cout<<"\n   ENTER NAME: ";
		gets(name);
		cout<<"\n   ENTER FATHER's NAME: ";
		gets(fname);
		cout<<"\n   ENTER MOTHER's NAME: ";
		gets(mname);
		cout<<"\n   ENTER ROLL NO.: ";
		cin>>rno;
		cout<<"\n   ENTER CLASS AND SECTION: ";
		gets(clasec);
		cout<<"\n   ENTER MARKS: ";
		cout<<"\n\n    ENGLISH: ";
		cin>>eng;
		cout<<"\n    MATHS: ";
		cin>>maths;
		cout<<"\n    COMPUTER SCIENCE: ";
		cin>>cpp;
		cout<<"\n    PHYSICS: ";
		cin>>phy;
		cout<<"\n    CHEMISTRY: ";
		cin>>chem;

	}
	void showdata()
	{       clrscr();
		gotoxy(29,6);
		cout<<"BAL BHARATI PUBLIC SCHOOL";
		gotoxy(28,9);
		cout<<"REPORT CARD SESSION 2015-16";
		gotoxy(55,15);
		cout<<"ADMNO: "<<admno;
		gotoxy(55,13);
		cout<<"ROLL NO: "<<rno;
		gotoxy(17,13);
		cout<<"STUDENT's NAME: "<<name;
		gotoxy(17,15);
		cout<<"FATHER's NAME: "<<"Mr. "<<fname;
		gotoxy(17,17);
		cout<<"MOTHER's NAME: "<<"Mrs. "<<mname;
		gotoxy(55,17);
		cout<<"CLASS & SEC: "<<clasec;
		gotoxy(28,23);
		cout<<"SUBJECT"<<setw(20)<<"MARKS"<<endl;
		gotoxy(28,26);
		cout<<"ENGLISH";
		gotoxy(51,26);
		cout<<eng;
		gotoxy(28,28);
		cout<<"MATHS";
		gotoxy(51,28);
		cout<<maths;
		gotoxy(28,30);
		cout<<"COMP SCI";
		gotoxy(51,30);
		cout<<cpp;
		gotoxy(28,32);
		cout<<"PHYSICS";
		gotoxy(51,32);
		cout<<phy;
		gotoxy(28,34);
		cout<<"CHEMISTRY";
		gotoxy(51,34);
		cout<<chem;

	}
	void modifyrec()
	{       clrscr();
		bbps();
		gotoxy(9,11);
		cout<<"MENU";
		gotoxy(12,14);
		cout<<"1.MODIFY NAME ";
		gotoxy(12,16);
		cout<<"2.MODIFY MARKS ";
		gotoxy(12,18);
		cout<<"3.EXIT ";
		int a;
		lines();
		gotoxy(32,40);
		cout<<"ENTER YOUR CHOICE ";
		cin>>a;
		if(a==1)
		{   	clrscr();
			bbps();
			gotoxy(9,11);
			cout<<"MENU";
			gotoxy(12,14);
			cout<<"1.CORRECT STUDENT's NAME ";
			gotoxy(12,16);
			cout<<"2.CORRECT FATHER's NAME ";
			gotoxy(12,18);
			cout<<"3.CORRECT MOTHER's NAME ";
			gotoxy(12,20);
			cout<<"4.EXIT ";
			lines();
			gotoxy(32,40);
			cout<<"ENTER YOUR CHOICE ";
			int b;
			cin>>b;
			char sn[10];
			char mn[10];
			char fn[10];
			if(b==1)
			{	clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER NIL ";
				gotoxy(9,12);
				cout<<"ENTER STUDENT's NAME ";
				gets(sn);
				if(strcmpi("NIL",sn)==0)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       strcpy(name,sn);
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(b==2)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER NIL ";
				gotoxy(9,12);
				cout<<"ENTER FATHER's NAME ";
				gets(fn);
				if(strcmpi("NIL",fn)==0)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       strcpy(fname,fn);
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(b==3)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER NIL ";
				gotoxy(9,12);
				cout<<"ENTER MOTHER's NAME ";
				gets(mn);
				if(strcmpi("NIL",mn)==0)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       strcpy(mname,mn);
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}

			}
			else if(b==4)
			{	exit(0);
			}
			else
			{       bbps();
				lines();
				gotoxy(30,40);
				cout<<"ENTER A VALID CHOICE ";
			}
		}
		else if(a==2)
		{	clrscr();
			bbps();
			gotoxy(9,11);
			cout<<"MENU";
			gotoxy(11,14);
			cout<<"CHOOSE THE SUBJECT ";
			gotoxy(12,16);
			cout<<"1.ENGLISH";
			gotoxy(12,18);
			cout<<"2.MATHS";
			gotoxy(12,20);
			cout<<"3.COMP SCI";
			gotoxy(12,22);
			cout<<"4.PHYSICS";
			gotoxy(12,24);
			cout<<"5.CHEMISTRY";
			gotoxy(12,26);
			cout<<"6.EXIT ";
			lines();
			gotoxy(32,40);
			cout<<"ENTER YOUR CHOICE ";
			int c;
			cin>>c;
			int ab,bc,cd,de,ef;
			if(c==1)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER 101 ";
				gotoxy(9,12);
				cout<<"ENTER NEW MARKS OF ENGLISH ";
				cin>>ab;
				if(ab==101)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       eng = ab;
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(c==2)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER 101 ";
				gotoxy(9,12);
				cout<<"ENTER NEW MARKS IN MATHS ";
				cin>>bc;
				if(bc==101)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       maths = bc;
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(c==3)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER 101 ";
				gotoxy(9,12);
				cout<<"ENTER NEW MARKS IN COMP SCI ";
				cin>>cd;
				if(cd==101)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       cpp = cd;
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(c==4)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER 101 ";
				gotoxy(9,12);
				cout<<"ENTER NEW MARKS IN PHYSICS ";
				cin>>de;
				if(de==101)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       phy = de;
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(c==5)
			{       clrscr();
				bbps();
				lines();
				gotoxy(28,40);
				cout<<"TO RETAIN SAME; ENTER 101 ";
				gotoxy(9,12);
				cout<<"ENTER NEW MARKS IN CHEMISTRY ";
				cin>>ef;
				if(ef==101)
				{	gotoxy(9,15);
					cout<<"RECORD RETAINED ";
				}
				else
				{       chem = ef;
					gotoxy(9,15);
					cout<<"RECORD MODIFIED ";
				}
			}
			else if(c==6)
			{	exit(0);
			}
			else
			{       bbps();
				lines();
				gotoxy(30,40);
				cout<<"ENTER A VALID CHOICE ";
			}
		}
		else if(a==3)
		{	exit(0);
		}
		else
		{       bbps();
			lines();
			gotoxy(30,40);
			cout<<"ENTER A VALID CHOICE ";
		}
	}
	void compiledresult()
	{
		gotoxy(9,(14+i));
		cout<<rno;
		gotoxy(15,(14+i));
		cout<<name;
		gotoxy(31,(14+i));
		cout<<clasec;
		gotoxy(40,(14+i));
		cout<<eng;
		gotoxy(47,(14+i));
		cout<<maths;
		gotoxy(54,(14+i));
		cout<<phy;
		gotoxy(61,(14+i));
		cout<<chem;
		gotoxy(69,(14+i));
		cout<<cpp;
		i+=2;

	}

};

student S;
void write()
{	clrscr();
	int d;
	bbps();
	gotoxy(9,12);
	cout<<"ENTER NUMBER OF RECORDS TO BE ENTERRED ";
	cin>>d;
	ofstream fout("student.dat",ios::binary);
	for(int i=1;i<=d;i++)
	{	S.getdata();
		fout.write((char*)&S,sizeof(S));
		clrscr();
	}
	fout.close();
}

void search()
{       clrscr();
	int e,p=0;
	bbps();
	gotoxy(9,12);
	cout<<"ENTER ROLL NO TO SEARCH ";
	cin>>e;
	ifstream fin("student.dat",ios::binary);
	while(fin)
	{	fin.read((char*)&S,sizeof(S));
		if(S.getrollno()==e)
		{	S.showdata();
			p=1;
			break;
		}

	}
	if(p==0)
	{	clrscr();
		bbps();
		gotoxy(9,12);
		cout<<"RECORD NOT FOUND ";
	}
	fin.close();
}

void del()
{	clrscr();
	int f,o=0;
	bbps();
	gotoxy(9,12);
	ifstream fin("student.dat",ios::binary);
	ofstream fout("temp.dat",ios::binary);
	cout<<"ENTER ROLL NO TO DELETE RECORD ";
	cin>>f;
	fin.read((char*)&S,sizeof(S));
	while(fin)
	{
		if(S.getrollno() !=f)
		{	fout.write((char*)&S,sizeof(S));
		}
		else if(S.getrollno()==f)
		{	o=f;
		}
	    fin.read((char*)&S,sizeof(S));
	}
	if(o==0)
	{       clrscr();
		bbps();
		gotoxy(9,12);
		cout<<"RECORD DOES NOT EXIST ";
	}
	else
	{       clrscr();
		bbps();
		gotoxy(9,12);
		cout<<"RECORD DELETED ";
	}
	remove("student.dat");
	rename("temp.dat","student.dat");
	fin.close();
	fout.close();
}

void modify()
{	clrscr();
	int g,pos;
	student S;
	bbps();
	gotoxy(9,12);
	cout<<"ENTER THE ROLL NO TO MODIFY ITS RECORD ";
	cin>>g;
	fstream fil("student.dat",ios::binary|ios::in|ios::out);
	while(fil)
	{      pos =fil.tellg();
		fil.read((char*)&S,sizeof(S));
		if(S.getrollno()==g)
		{
			S.modifyrec();
		}
	fil.seekp(pos);
	fil.write((char*)&S,sizeof(S));

	}
	fil.close();

}
void display()
{       clrscr();
	bbps();
	ifstream fin("student.dat",ios::binary);
	gotoxy(6,12);
	cout<<"ROLL NO     NAME       CLASS/SEC  ENG   MATHS   PHY   CHEM   COMP SCI";
	 fin.read((char*)&S,sizeof(S));
	 i=1;

	while(!fin.eof())
	{
		S.compiledresult();
		fin.read((char*)&S,sizeof(S));
	}
	fin.close();
}


void main()
{       int k;char ch,pas;
	clrscr();
	bbps();
	do
	{      	clrscr();
		bbps();
		gotoxy(9,11);
		cout<<"MENU";
		gotoxy(12,14);
		cout<<"1.ENTER RECORD ";
		gotoxy(12,16);
		cout<<"2.SEARCH RECORD ";
		gotoxy(12,18);
		cout<<"3.DELETE RECORD ";
		gotoxy(12,20);
		cout<<"4.MODIFY RECORD ";
		gotoxy(12,22);
		cout<<"5.DISPLAY RESULT ";
		gotoxy(12,24);
		cout<<"6.EXIT ";
		lines();
		gotoxy(32,40);
		cout<<"ENTER YOUR CHOICE ";
		cin>>k;
		switch(k)
		{	case 1: write();
				break;
			case 2: search();
				break;
			case 3: del();
				break;
			case 4: modify();
				break;
			case 5: display();
				break;
			case 6: exit(0);
			default:lines();
				gotoxy(30,40);
				cout<<"ENTER A VALID CHOICE ";
		}
		getch();
		lines();
		gotoxy(25,40);
		cout<<"DO YOU WISH TO CONTINUE (Y/N) ";
		ch = getche();
	}while(ch=='y'||ch=='Y');
}