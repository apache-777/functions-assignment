#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int secask,proask;
int x11,y11,x22,y22;
int xttt ,yttt;
bool ptr(int x11, int y11, int x22,int y22, int xttt, int yttt)
{
    cout<<"Enter the coordinate x : ";
    cin>>xttt;
    cout<<"Enter the coordinate y : ";
    cin>>yttt;
    cout<<"Enter the coordinate x1 : ";
    cin>>x11;
    cout<<"Enter the coordinate y1 : ";
    cin>>y11;
    cout<<"Enter the coordinate x2 : ";
    cin>>x22;
    cout<<"Enter the coordinate y2 : ";
    cin>>y22;
    if (xttt > x11 && xttt < x22 && yttt > y11 && yttt < y22)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const double EPS=1e-12;
struct Point {
    double x;
    double y;
};
double distance(Point p1, Point p2) 
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}
bool isEqual(double x, double y) 
{
    return abs(x-y) < EPS;
}
bool isIsosceles(Point p1, Point p2, Point p3) 
{
    double s1 = distance(p1, p2);
    double s2 = distance(p1, p3);
    double s3 = distance(p2, p3);
    if ( isEqual(s1, s2) && !isEqual(s1, s3))
        return true;
    if ( isEqual(s2, s3) && !isEqual(s2, s1))
        return true;
    if ( isEqual(s3, s1) && !isEqual(s3, s2))
        return true;
    return false; 
}
bool isEquilateral(Point p1, Point p2, Point p3) 
{
    double s1 = distance(p1, p2);
    double s2 = distance(p1, p3);
    double s3 = distance(p2, p3);


    if (isEqual(s1, s2) && isEqual(s2, s3))
        return true;
    return false;
}
bool isRightAngled(Point p1, Point p2, Point p3) 
{
    double s1 = distance(p1, p2);
    double s2 = distance(p1, p3);
    double s3 = distance(p2, p3);
    if (isEqual(s1*s1 + s2*s2, s3*s3) ||
        isEqual(s2*s2 + s3*s3, s1*s1) ||
        isEqual(s3*s3 + s1*s1, s2*s2) )
        return true;
    return false;
}
struct Pt 
{
    float x, y;
};
bool eq(float pnt1, float pnt2) 
{
    return (pnt1 == pnt2);
}
float dt(Pt pnt1, Pt pnt2)
{
    return (pnt1.x - pnt2.x) * (pnt1.x - pnt2.x) + (pnt1.y - pnt2.y) * (pnt1.y - pnt2.y);
} 
bool Square(Pt pnt1, Pt pnt2, Pt pnt3, Pt pnt4)
{
    double y1 = dt(pnt1, pnt2);
    double s2 = dt(pnt2, pnt3);
    double s3 = dt(pnt3, pnt4);
    double t4 = dt(pnt4, pnt1);
    double d1 = dt(pnt1, pnt3);
    double dtt2 = dt(pnt2, pnt4);
    if (eq(y1, s2) && eq(s2, s3) && eq(s3, t4) &&
        eq(d1, dtt2) ) {
            return true;
        } else {
            return false;
        }    
}
bool Rectangle(Pt pnt1, Pt pnt2, Pt pnt3, Pt pnt4) 
{
    double y1 = dt(pnt1, pnt2);
    double s2 = dt(pnt2, pnt3);
    double s3 = dt(pnt3, pnt4);
    double t4 = dt(pnt4, pnt1);
    double d1 = dt(pnt1, pnt3);
    double dtt2 = dt(pnt2, pnt4);
    if (eq(y1, s3) && eq(s2, t4) && eq(d1, dtt2) ) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}
bool Parallelogram(Pt pnt1, Pt pnt2, Pt pnt3, Pt pnt4) 
{
    double y1 = dt(pnt1, pnt2);
    double s2 = dt(pnt2, pnt3);
    double s3 = dt(pnt3, pnt4);
    double t4 = dt(pnt4, pnt1);
    double d1 = dt(pnt1, pnt3);
    double dtt2 = dt(pnt2, pnt4);
    if (eq(y1, s3) && eq(s2, t4) && eq(d1, dtt2) ) 
    {
        return true;
    } 
    else 
    {
        return false;
    }     
}
bool Rhombus(Pt pnt1, Pt pnt2, Pt pnt3, Pt pnt4) 
{
    double y1 = dt(pnt1, pnt2);
    double s2 = dt(pnt2, pnt3);
    double s3 = dt(pnt3, pnt4);
    double t4 = dt(pnt4, pnt1);
    double d1 = dt(pnt1, pnt3);
    double dtt2 = dt(pnt2, pnt4);
    if (eq(y1, s2) && eq(s2, s3) && eq(s3, t4) &&!eq(d1, dtt2) ) 
        {
            return true;
        } else 
        {
            return false;
        }
}
void numty(string number)
{
      for (int i = 0; i < 6; i++) 
    {
        if (number[i] == '0')
            cout << "Zero ";
        else if (number[i] == '1')
            cout << "One ";
        else if (number[i] == '2')
            cout << "Two ";
        else if (number[i] == '3')
            cout << "Three ";
        else if (number[i] == '4')
            cout << "Four ";
        else if (number[i] == '5')
            cout << "Five ";
        else if (number[i] == '6')
            cout << "Six ";
        else if (number[i] == '7')
            cout << "Seven ";
        else if (number[i] == '8')
            cout << "Eight ";
        else if (number[i] == '9')
            cout << "Nine ";

    } 
}
int atr,bbt,c,ddrt,eer,frt,ggt,hht,iit,jjt,kkt,llt,mmt,nnt,oot,ppt,qqt,rrt,sst,ttl,uut,vvt,wwt,xxt,yyt,zzt,abt,act,addrt,aet,imt,bbr,tyt,rtt,eet;
int sum(int atr,int bbt,int c,int ddrt,int eer,int frt,int ggt,int hht,int iit,int jjt,int kkt,int llt,int mmt,int nnt,int oot,int ppt,int qqt,int rrt,int sst,int ttl,int uut,int vvt,int wwt,int xxt,int yyt,int zzt,int abt,int act,int addrt,int aet,int imt,int bbr,int tyt,int rtt,int eet)
{
    imt=atr+bbt+c+ddrt+eer;
    bbr=ggt+hht+iit+jjt+kkt;
    tyt=mmt+nnt+oot+ppt+qqt;
    rtt=sst+ttl+uut+vvt+wwt;
    eet=yyt+zzt+xxt+rrt+llt;
    cout<<"Sum of Roll No. 1: "<<imt<<endl;
    cout<<"Sum of Roll No. 2: "<<bbr<<endl;;
    cout<<"Sum of Roll No. 3: "<<tyt<<endl;
    cout<<"Sum of Roll No. 4: "<<rtt<<endl;
    cout<<"Sum of Roll No. 5: "<<eet<<endl<<endl;
    return (atr,bbt,c,ddrt,eer,frt,ggt,hht,iit,jjt,kkt,llt,mmt,nnt,oot,ppt,qqt,rrt,sst,ttl,uut,vvt,wwt,xxt,yyt,zzt,abt,act,addrt,aet,imt,bbr,tyt,rtt,eet);
}
int high(int atr,int bbt,int c,int ddrt,int eer,int frt,int ggt,int hht,int iit,int jjt,int kkt,int llt,int mmt,int nnt,int oot,int ppt,int qqt,int rrt,int sst,int ttl,int uut,int vvt,int wwt,int xxt,int yyt,int zzt,int abt,int act,int addrt,int aet,int imt,int bbr,int tyt,int rtt,int eet)
{
    imt=atr+bbt+c+ddrt+eer;
    bbr=ggt+hht+iit+jjt+kkt;
    tyt=mmt+nnt+oot+ppt+qqt;
    rtt=sst+ttl+uut+vvt+wwt;
    eet=yyt+zzt+xxt+rrt+llt;
    if(imt>bbr&&imt>tyt&&imt>rtt&&imt>eet)
    {
        cout<<"Roll N.o# 1 has the highest marks.\n.i.e. ";
        return imt;
    }
    else if(bbr>imt&&bbr>tyt&&bbr>rtt&&bbr>eet)
    {
        cout<<"Roll N.o# 2 has the highest marks.\n.i.e. ";
        return bbr;
    }
    else if(tyt>bbr&&tyt>imt&&tyt>rtt&&tyt>eet)
    {
        cout<<"Roll N.o# 3 has the highest marks.\n.i.e. ";
        return tyt;
    }
    else if(rtt>imt&&rtt>bbr&&rtt>tyt&&rtt>eet)
    {
        cout<<"Roll N.o# 4 has the highest marks.\n.i.e. ";
        return rtt;
    }
    else if(eet>imt&&eet>bbr&&eet>rtt&&eet>tyt)
    {
        cout<<"Roll N.o# 5 has the highest marks.\n.i.e. ";
        return eet;
    }
}
void winnersection(char name6[6],int avg6[6])
{
    int value;
    value=avg6[0];
    if(value<avg6[1])
    {
        value=avg6[1];
    }
    if(value<avg6[2])
    {
        value=avg6[2];
    }
    if(value<avg6[3])
    {
        value=avg6[3];
    }
    if(value<avg6[4])
    {
        value=avg6[4];
    }
     if(value<avg6[5])
    {
        value=avg6[5];
    }
    if(value==avg6[0])
    {
        cout<<"\nSection "<<name6[0]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
    if(value==avg6[1])
    {
        cout<<"\nSection "<<name6[1]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
    if(value==avg6[2])
    {
        cout<<"\nSection "<<name6[2]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
    if(value==avg6[3])
    {
        cout<<"\nSection "<<name6[3]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
    if(value==avg6[4])
    {
        cout<<"\nSection "<<name6[4]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
    if(value==avg6[5])
    {
        cout<<"\nSection "<<name6[5]<<" won !! It has maximum Average .i.e. "<<value<<".";
    }
}
char opertt;
void calce(float num1, float num2)
{     
      switch (opertt) 
      {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
            break;
        default:
            cout<<"Error! The operator is not correct";
            break;
      }
}
int multiple(int a,int b)
{
    if(a%b==0)
    {
        cout<<endl<<a<<" is multiple of  "<<b<<"."<<endl;
    }
    else
    { 
        cout<<endl<<a<<" is not a multiple of "<<b<<".";
    }
}
int fminnum,fmaxnum,abx[100],smaxnum,sminnum,i12;
void mxmnsmnsmx()
{ 
	fmaxnum=fminnum=abx[0];
   for(i12=1; i12<6; i12++)
   {
     if(fmaxnum<abx[i12])
	 {
	 	 fmaxnum=abx[i12];
	 }
     if(fminnum>abx[i12])
     {
     	 fminnum=abx[i12];
	 }
   }
   smaxnum=fminnum;
   sminnum=fmaxnum;
   for(i12=0; i12<6; i12++)
   {
     if(abx[i12]<fmaxnum && abx[i12]>smaxnum)
	 {
	 	smaxnum=abx[i12];
	 }
     if(abx[i12]>fminnum && abx[i12]<sminnum)
	 {
	 	sminnum=abx[i12];
	 }
   }
}
int wnttrs,trtr=0,plpl=0,pzpzpy=0,pypypi=0;
char pqpq,tetet;
int wrtrt(char player1, char player2)
{   
	cout<<"----------------------------------------------------------------------------------------------------------------------\n";
	cout<<"---------------------------------------- R O C K,   P A P E R,   S C I S S O R ---------------------------------------\n";
	cout<<"----------------------------------------------------------------------------------------------------------------------\n";
	rpsp1:
	cout<<"Enter 'r' for rock, 'p' for paper, 's' for scissor.\n";
	cout<<"Enter either 'e' or 'E' !OR! Both 'e' or 'E' to end the game !\n\n";
	cout<<"Player 1 : "<<endl;
	cin>>pqpq;
	if(pqpq!='r'&&pqpq!='p'&&pqpq!='s'&&pqpq!='e'&&pqpq!='E')
	{
		cout<<"Invalid ! Please enter 'r' , 'p' or 's'  || 'e' or 'E' to end !\n\n";
		goto rpsp1;
	}
	rpsp2:
	cout<<"Player 2 :"<<endl;
	cin>>tetet;
	if(tetet!='r'&&tetet!='p'&&tetet!='s'&&tetet!='e'&&tetet!='E')
	{
		cout<<"Invalid ! Please enter 'r' , 'p' or 's' || 'e' or 'E' to end !\n\n";
		goto rpsp2;
	}
	else if(pqpq=='s'&&tetet=='e'||pqpq=='s'&&tetet=='E'||pqpq=='r'&&tetet=='e'||pqpq=='r'&&tetet=='E'||pqpq=='p'&&tetet=='e'||pqpq=='p'&&tetet=='E'||pqpq=='e'&&tetet=='s'||pqpq=='E'&&tetet=='s'||pqpq=='e'&&tetet=='r'||pqpq=='E'&&tetet=='r'||pqpq=='e'&&tetet=='p'||pqpq=='E'&&tetet=='p')
	{   cout<<"The Game was played "<<plpl<<" time(s).\n";
		cout << "Total Matches Drawn : " <<  trtr << endl;
        cout << "Player 1 Wins : " << pypypi << endl;
        cout << "Player 2 Wins : " << pzpzpy << endl;
	}
	else if(pqpq=='s' && tetet=='s'||pqpq=='r' && tetet=='r'||pqpq=='p' && tetet=='p')
	{
		return 0;
	}
	else if(pqpq=='s' && tetet=='p'||pqpq=='r' && tetet=='s'||pqpq=='p' && tetet=='r')
	{
		return 1;
	}              
	else if(pqpq=='r' && tetet=='p'||pqpq=='p' && tetet=='s'||pqpq=='s' && tetet=='r')
	{
		return 2;
	}
	else if(pqpq == 'e' && tetet == 'e'|| pqpq == 'E'  && tetet == 'E' || pqpq == 'e' && tetet == 'E' || pqpq == 'E' && tetet == 'e')
    {
    	cout<<"The Game was played "<<plpl<<" time(s).\n";
        cout << "Total Matches Drawn : " <<  trtr << endl;
        cout << "Player 1 Wins : " << pypypi << endl;
        cout << "Player 2 Wins : " << pzpzpy << endl;
    }
}
int findsum(int num)
{
    int rem,sum=0;
    a:
    rem=num%10;
    sum+=rem;
    num=num/10;
    if(num>0)
    {
        goto a;
    }
	cout<<sum;
	return 1;
}

void lp1()
{
	cout<<"1. Program Statement :\nWrite a C++ program that prints the following pattern using loops.\n";
	cout<<"1\n1 2\n1 2 3\n1 2 3 4\n\n";
}
void lp2()
{
	cout<<"2. Program Statement :\nWrite a C++ program that prints the following pattern using loops.\n";
	cout<<"* * * * *\n* * * *\n* * *\n* *\n*\n\n";
}
void lp3()
{
	cout<<"3. Program Statement :\nWrite a C++ program that prints the following pattern using loops.\n";
    cout<<"      *\n    * * *\n  * * * * *\n* * * * * * *\n\n";
}
void lp4()
{
	cout<<"4. Program Statement :\nWrite a C++ program that prints the following pattern using loops.\n";
	cout<<"1\n2 4\n5 6 7\n9 11 13 15\n\n";
}
void fp1()
{
    cout<<"1. Program Statement :\nWrite a Function(Digits Summation) that takes a six-digit integer and returns the sum of its six digits.\n";
	cout<<"Also write int main to test this function.\n";
	cout<<"int DigitsSummation(int Number)\n";
	cout<<"{\n";
	cout<<".... it should return the summation of the digits of the values passed in Number\n";
	cout<<"}\n";
   	cout<<"int main()\n";
	cout<<"{\n";
	cout<<"int Num;\n";
	cout<<"cout<<'Enter the Six Digit Number: ';\ncin>>Num;\n";
	cout<<".\n";
	cout<<".	// Write the code here..!!!\n";
	cout<<".\n}\n";
	cout<<"Sample Input: 153426\nSample output: 21\n\n";
}
void fp2()
{
    cout<<"2. Program Statement :\n.Write a Program that plays the game of 'Rock, paper, scissors'. In this game, two players simultaneously say \n";
	cout<<"(or display a hand symbol representing) either 'rock', 'paper' or 'scissors'. The winner is the one whose choice\ndominates the other.";
	cout<<"The rules are: paper dominates (wraps) rock, rock dominates (breaks) scissors, and scissors\ndominate (cut) paper. You can use 'r'=rock, 'p'=paper,";
	cout<<"'s'=scissors as symbols entered by the user. First you should\nmake a function WhoWins which takes as argument 2 characters (Player1, Player2) and returns";
    cout<<"the results 0, 1 or 2\n(0 means game draw, 1 means Player 1 wins, 2 means Player 2 wins).\n";
    cout<<"After writing the above function, Write the the main program which uses above function to complete the game.\n";
	cout<<"BONUS: The game should run many times such that until user says 'e' or 'E' it should keep playing again and again.\n";
	cout<<"Bonus: In the end it should tell how many times the game was played and who is the winner.\n";
	cout<<"Sample Input: r r Sample Output: Draw.\nSample Input: r p Sample Output: 2nd player wins.\n\n";
}
void fp3()
{
    cout<<"3. Program Statement :\nWrite a function SecondMaximum, SecondMinimum which takes 6 inputs integers as parameters and returns the 2nd maximum.\n";
	cout<<"Also write int main to test it. Similarly design Minimum, Maximum functions also and write a main function which should use above functions to display the ";
	cout<<"three numbers in order.\n";
	cout<<"Sample Input: 90 5 60 45 70 75\n";
	cout<<"Max, 2nd Max, Min, 2ndMin: 90 75 5 45\n\n";
}
void fp4()
{
	cout<<"4. Program Statement :\nWrite a function MultipleOrNot that takes two integers (A and B) and then uses the conditional ";
	cout<<"expression operator\nto return that A is a 'multiple' of B or not. Then write a main test program which takes input from";
	cout<<"the user and\ntell whether the two numbers entered are multiple of each other or not.\n";
	cout<<"Sample Input: 12 6\n";
	cout<<"Output: 12 is the multiple of 6\nSample Input: 12 13\nOutput: 12 is not a multiple of 13";
   	cout<<"\nAlso write its int main to test this program.\n\n";
}
void fp5()
{
   cout<<"5. Program Statement :\nWrite a Function Calculate that simulates a simple calculator. It takes two integers and a character as parameter.\n";
   cout<<"If the character is a '+', the sum is returned; if it is a '-', the difference is returned; if it is a '*', the product\nis returned;";
   cout<<"if it is a '/', the quotient is returned; and if it is a '%', the remainder is returned. Also write int\nmain to test this function.\n";
   cout<<"Sample Input: 12%7\n";
   cout<<"Sample Output: 5\nSample Input: 19x10\nSample Output: 190.\n\n";
}
void fp6()
{
	cout<<"6. Program Statement :\nITC has 6 sections we are required to find out which sections average is higher. Write first a\n";
	cout<<"function WinnerSection which takes each section's ITC's averages along with their names and 'returns' which section\n(a letter)";
	cout<<"has won w.r.t average.Write the second function WinnerSectionAverage which takes each section's ITC's average and returns which";
	cout<<"average is the highest average. Write int main to test this program. Also make a helper function\nShouldUpdateMax which should";
	cout<<"just take two values PreviousMax and NewValue and return true (if Max should be updated) or false (if Max should not be updated).\n";
	cout<<"Also write int main to test this program which must call the above two functions to print the section Letter and its\naverage marks.\n";
	cout<<"Sample Input:\nB   90\nD   80\nC   60\nA   99\nE   91\nF   80\n\nOutput: A got the highest average of 99.\n\n";
}
void fp7()
{
    cout<<"7. Program Statement :\nWrite a program which takes marks of 5 courses as input of 5 students as parameter and returns the students";
	cout<<"who got the\nhighest aggregate. First it must make the function Summation, which should take 5 integers as values and return its\nsummation.";
	cout<<"Secondly You must make two function HighestmarksRollNo and HighestMarks which must return the roll number of\nthe students who got the";
	cout<<"highest marks and that highest marks respectively. Write proper main which must use the above\nthree functions to properly calculate which ";
	cout<<"student has got the highest marks and how much marks.\n\n";
	cout<<"Sample Input\n";
	cout<<"Roll#   C1      C2      C3      C4      C5\n";	
	cout<<"1391	80	70	60	14	88\n";
    cout<<"1376	70	80	80	88	89\n";	
	cout<<"1374	71	82	50	80	79\n";	
    cout<<"1372	77	90	90	99	100\n";	
	cout<<"1375	73	83	40	81	69\n";	
	cout<<"Sample Output: 1372 has highest Aggregate of 456.\n\nAlso write int main to test this program.\n\n";
}
void fp8()
{
	cout<<"8. Program Statement :\nWrite a program which will take at max: a six digit number and returns each of its digit in words.\n";
	cout<<"First it has to make a function Digit2Word and that should take a digit as input and displays its digit into word.\n";
	cout<<"(Bonus) if the number is less than 6 digit it should not out print initial zeros. If the number is greater than 6\n";
	cout<<"digit then it should output wrong input.\n";
	cout<<"Sample Input: 651432\n";
	cout<<"Output: Six Five One Four Three two\n(Bonus)Sample Input: 1432\nSample Output: One Four Three two.\n\n";
}
void fp9()
{
	cout<<"9. Program Statement :\nWrite a function which takes as input 4 points and tell whether these points are the coordinates of Square, Rhombus,\nRectangle, Parallelogram or Quadrilateral.";
    cout<<"NOTE: Make separate functions for each case checking whether its\nsquare / rhombus / rectangle / parallelogram. i-e (isSquare, isRhombus, isRectangle, isParallelogram).\n";
	cout<<"Sample Input:\nP1	0 0\n";
	cout<<"P2	1 0\n";
	cout<<"P3	1 1\n";
	cout<<"P4	0 1\n";
	cout<<"Output: It's a square\n";
	cout<<"Also Write int main to test this program.\n\n";
}
void fp10()
{
	cout<<"10. Program Statement :\nWrite a function which takes as parameter 3 points and tell whether these points are the coordinates of isosceles or\nequilateral or";
    cout<<"right angled or scalene triangle.\nNOTE 'Make separate functions as isEquilateral, isRightAngled and so on... '\n";
	cout<<"Sample Input:\nP1      0 0\n";
	cout<<"P2	1 0\n";
	cout<<"P3	1 1\n";
	cout<<"Sample Output: Right Angle Triangle.\n";
	cout<<"Also Write int main to test this program.\n\n";
}
void fp11()
{
	cout<<"11. Program Statement :\nWrite a function which takes 4 coordinates of the Rectangle and a point P as parameter.\n";
    cout<<"Your function should be able to tell whether P lies inside the Rectangle, On the Rectangle or Outside rectangle.\n";
	cout<<"Sample Input:\n";
	cout<<"P1	0 0\n";
	cout<<"P2	2 0\n";
	cout<<"P3	2 2\n";
	cout<<"P4	0 2\n";
	cout<<"P	1 1\n";
	cout<<"Output: P lies inside Square.\n";
	cout<<"Also Write int main to test this Program.\n\n";
}	   
void fp12()
{
	cout<<"12. Program Statement :\nWrite a function which takes as parameter a floating number and returns its ceiling Integer. Write main to test it.\n";
	cout<<"Sample Input: 5.5\n";
	cout<<"Output:	6\n";
	cout<<"Sample Input: -5.5\n";
	cout<<"Output:	-5\n";
	cout<<"Sample Input: 5\n";
	cout<<"Output:	5\n";
	cout<<"Also write int main to test the program.\n\n";
}
void fp13()
{
	cout<<"13. Program Statement :\nWrite a function which takes as input a floating number and returns its floor value. Test it using main function on\ndifferent values.\n";
	cout<<"Sample Input: 5.5\n";
	cout<<"Output:	5\n";
	cout<<"Sample Input: -5.5\n";
	cout<<"Output:	-6\n";
	cout<<"Sample Input: 5\n";
	cout<<"Output:	5\n";
	cout<<"Also write int main to test this program.\n\n";
}
void ap1()
{
	cout<<"1. Program Statement :\nWrite a C++ program to find the largest element of a given array of integers.\n\n";
}
void ap2()
{
	cout<<"2. Program Statement :\nWrite a C++ program to find second largest element in an given array  of integers.\n\n";
}
void ap3()
{
	cout<<"3. Program Statement :\nWrite a C++ program to update every array element by multiplication of next and	previous";
	cout<<" values of a given array of integers.\n\n";
}
void ap4()
{
	cout<<"4. Program Statement :\nWrite a C++ program to separate 0s and 1s from a given array of values 0 and 1.\n\n";
}
void ap5()
{
	cout<<"5. Program Statement :\nWrite a C++ program to count the number of occurrences of given number in a sorted array of integers.\n\n";
}
void ap6()
{
	cout<<"6. Program Statement :\nWrite a C++ program to print the Arrays Values in reverse order.\n\n";
}
void ap7()
{
	cout<<"7. Program Statement :\nWrite a C++ Program that input into 1-D array of 15 values.It fill the array then draw the bars";
	cout<<" one by one of histogram.\n";
	cout<<"Hint: Histogram :\n\n";
	cout<<"|Element||Value||   HISTOGRAM   |\n";
	cout<<"|   0   || 15  ||***************|\n";
	cout<<"|   1   || 5   ||*****          |\n\n";
}
void ap8()
{
	cout<<"8. Program Statement :\nWrite a C++ program that enter data into an array of 1-D array and find out the maximum value";
	cout<<" and its location in the array and print them on screen.\n\n";
}
void ap9()
{
	cout<<"9. Program Statement :\nWrite a C++ program that Sort value in ascending and descending order using bubble sort.";
	cout<<"\nabc[6]= {76,1,98,0,87,67}\n\n";
}
void pendinask1(int sec1,int sec)
{
	cout<<endl<<endl<<"-------------------------------- P R O G R A M  "<<sec1<<"   O F   S E C T I O N  "<<sec<<"   E N D E D -------------------------------"<<endl;
}
void pendinask2(int sec2,int sec)
{
	cout<<endl<<endl<<"-------------------------------- P R O G R A M  "<<sec2<<"   O F   S E C T I O N  "<<sec<<"   E N D E D -------------------------------"<<endl;
}
void pendinask3(int sec3,int sec)
{
	cout<<endl<<endl<<"-------------------------------- P R O G R A M  "<<sec3<<"   O F   S E C T I O N  "<<sec<<"   E N D E D -------------------------------"<<endl;
}
void pendinask4(int sec4,int sec)
{
	cout<<endl<<endl<<"-------------------------------- P R O G R A M  "<<sec4<<"   O F   S E C T I O N  "<<sec<<"   E N D E D -------------------------------"<<endl;
}
int ask(int sec)
{   
    char asking,con;
    contry:
    cout<<endl<<"Do you want to continue to another program in or out of this section? (y/n) ";
    cin>>con;
    if(con=='y')
    {   contry1:
    	cout<<"Do want to go to another section? (y/n) "<<endl; 
		cin>>asking;
	   if(asking=='y')
     	{
		secaskagain:
		cout<<"In which section do you want to go? "<<endl; 
		cin>>secask;
		if(secask!=1&&secask!=2&&secask!=3&&secask!=4)
		{
			cout<<"Invalid Entry ! There are 4 sections. Please enter valid Sections .i.e. 1-4 !"<<endl;
			goto secaskagain;
		}
    	}
     	else if(asking=='n')
    	{
		proaskagain:
		cout<<"In which Program do you want to go in this section? "<<endl;
		cin>>proask;
		if(sec==1)
		{
			if(proask!=1&&proask!=2&&proask!=3&&proask!=4&&proask!=5&&proask!=6&&proask!=7)
			{
				cout<<"Invalid Entry ! There are 7 Basic Programs. Please Enter between 1-7 !"<<endl;
				goto proaskagain;
			}
		}
		else if(sec==2)
		{
			if(proask!=1&&proask!=2&&proask!=3&&proask!=4&&proask!=5&&proask!=6&&proask!=7&&proask!=8&&proask!=9)
			{
				cout<<"Invalid Entry ! There are 9 Array Programs. Please Enter between 1-9 !"<<endl;
				goto proaskagain;
			}
		}
		else if(sec==3)
		{
			if(proask!=1&&proask!=2&&proask!=3&&proask!=4&&proask!=5&&proask!=6&&proask!=7&&proask!=8&&proask!=9&&proask!=10&&proask!=11&&proask!=12&&proask!=13)
			{
				cout<<"Invalid Entry ! There are 13 Function Programs. Please Enter between 1-13 !"<<endl;
				goto proaskagain;
			}
		}
		else if(sec==4)
		{
			if(proask!=1&&proask!=2&&proask!=3&&proask!=4)
			{
				cout<<"Invalid Entry ! There are 4 Loop Programs. Please Enter between 1-4 !"<<endl;
				goto proaskagain;
			}
		}
    	}
    	else if(asking!='y'&&asking!='n')
    	{
    		cout<<"Invalid Selection ! Please enter 'y' or 'n' ! Try Again !\n";
	    	goto contry1;
		}
	}
	else if(con=='n')
	{
		cout<<endl;
		return 0;
	}
	else if(con!='y'&&con!='n')
	{
		cout<<"Invalid Selection ! Please enter 'y' or 'n' ! Try Again !\n";
		goto contry;
	} 
}
void sp7()
{
	cout<<"7. Program Statement :\nWrite a C++ programs that input and compute income tax for three Categories of income groups.\n";
    cout<<"1- if the income is less then Rs. 25k then the tax is 4.86%.\n2- if the income is equal to 25k then the tax is Rs. 1500.\n";
    cout<<"3- if the income is greater then 25k then the tax is Rs. 1575 and plus 17% of income exceeding to 25K.\n";
}
void sp6()
{
	cout<<"6. Program Statement :\nWrite a C++ program that converts 'Small Alphabets into Capital' and vise versa.\n\n";
}
void sp5()
{
	cout<<"5. Program Statement :\nWrite a C++ program that take 3 values from user and determine that which value is prime num, which one\nis even and which";
	cout<<" one is odd also determine these numbers are multiple of each other or not.\n\n";
}
void sp4()
{
	cout<<"4. Program Statement :\nWrite a C++ program that input an even number and a odd number from user, after taking input from user multiply\n";
	cout<<"even num with 7 and odd num with 5 and then add them both after adding subtract the answer with 1000 and\ndisplay its result.\n\n";
}
void sp3()
{
	cout<<"3. Program Statement :\nWrite a C++ program that input current unit and previous unit from user and calculate the Gas petroleum bill.";
	cout<<"\nPer unit price is USD $ 0.25, first convert USD($) into PKR Rs., and surcharge on bill is 12% will be added. The \n";
	cout<<"program will calculate the net bill and display it on screen.\n\n";
}
void sp2()
{
	cout<<"2. Program Statement :\nWrite a C++ Program that input the distance travelled and speed of a car. It calculates the time required\nto reach ";
	cout<<"the destination and display on screen.\nHint: time=distance/speed.\n\n";
}
void sp1()
{
	cout<<"1. Program Statement :\nWrite a C++ program that input an integer of five digits, Separate the integer into digits and display them separated\n";
	cout<<"of by four spaces each. Use integer division, modulus operator in program.\n";
    cout<<"Hint : let assume 4321 is input and output is  4  3	2	1.\n\n";
}
void intro1()
{
	cout<<"\n############################################# | SECTION 1 | BASIC PROGRAMS ############################################\n"<<endl;
}
void intro2()
{
	cout<<"\n################################################# | SECTION 2 | ARRAYS ################################################\n"<<endl;
}
void intro3()
{
	cout<<"\n################################################ | SECTION 3 | FUNCTIONS ##############################################\n"<<endl;
}
void intro4()
{
	cout<<"\n################################################# | SECTION 4 | LOOPS #################################################\n"<<endl;
}
void intro()
{
	cout<<"#######################################################################################################################"<<endl;
	cout<<"########################################################## M Y ########################################################\n";
    cout<<"########################################### F I N A L   A S S I G N M E N T ###########################################\n";
    cout<<"#######################################################################################################################"<<endl;
}
int main()
{   
    int sec,sec1,sec2,sec3,sec4;
    start:
	cout<<"#######################################################################################################################";
	cout<<"\n################################################## W E L C O M E ######################################################\n";
	cout<<"#################################################### T O   M Y ########################################################\n";
	cout<<"########################################## F I N A L   A S S I G N M E N T ############################################\n";
	cout<<"#######################################################################################################################"<<endl;
	cout<<"\nTHIS ASSIGNMENT CONSISTS OF FOUR (4) SECTIONS : ";
	cout<<"| SECTION 1 | BASIC PROGRAMS\n\t\t\t\t\t\t| SECTION 2 | ARRAYS\n\t\t\t\t\t\t| SECTION 3 | FUNCTIONS\n\t\t\t\t\t\t| SECTION 4 | LOOPS"<<endl;
	y:
	cout<<"Please enter the required section : ";
	cin>>sec;
	if(sec!=1&&sec!=2&&sec!=3&&sec!=4)
	{
		cout<<"Invalid Selection !! Please Select from 1-4 ! Press any key to try again.";
		getch();
		system("cls");
		goto start;
	}
	else if(sec==1)
	{
		sec1again:
		system("cls");
        intro();
	    intro1();
		cout<<"This section contains seven (7) Basic Programs.\n\n";
		sp1(); sp2(); sp3(); sp4(); sp5(); sp6(); sp7();
		s1again:
		cout<<"\n\nPlease enter your selection : ";
		cin>>sec1;
		if(sec1!=1&&sec1!=2&&sec1!=3&&sec1!=4&&sec1!=5&&sec1!=6&&sec1!=7)
		{
			cout<<"Invalid Selection ! Please select from 1-7 ! Press any button to Try again."<<endl;
			getch();
			system("cls");
			intro(); intro1();
			goto s1again;
		}
		else if(sec1==1)
		{ 
			p1s1:
			system("cls");
		    intro();intro1();
			sp1();
			cout<<"Program :\n\n";
			int num;
            cout << "Enter a five-digit number: ";
            cin >> num;
            cout << num / 10000 << " ";
            num = num % 10000;
            cout << num / 1000 << " ";
	        num = num % 1000;
            cout << num / 100 << " ";
            num = num % 100;
            cout << num / 10 << " ";
            num = num % 10;
            cout << num ;
            pendinask1(sec1, sec);
			ask(sec);	
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}
			
			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
		}
		else if(sec1==2)
		{
			p2s1:
			 system("cls");
			 intro();intro1();
			 sp2();
             cout<<"Program :\n\n";
             float d,s;
             cout<<"Enter distance in metres : ";
             cin>>d;
             cout<<"Enter speed in metre/second : ";
             cin>>s;
             cout<<"Total time is : "<<d/s<<" sec.";
             pendinask1(sec1, sec);
             ask(sec);
			 if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
		}
		else if(sec1==3)
		{
			p3s1:
			system("cls");
			intro();intro1();
			sp3();
			cout<<"Program :\n\n";
			float prvu,cru;
            cout<<"Per Unit Price is $0.25 USD i.e. "<<0.25*174<<" PKR."<<endl;
            cout<<"Enter previous Month's Number of Units : ";
            cin>>prvu;
            cout<<"Enter current Month's Number of Units : ";
            cin>>cru;
            int bill=cru-prvu;
            int i=bill*174;
            cout<<"Net Bill is "<<i+(12/100)*bill;
            pendinask1(sec1,sec);
            ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
        }
		else if(sec1==4)
		{
			p4s1:
		    system("cls");
			intro();intro1();
			sp4();
			int e,o;
			cout<<"Program :\n\n";
            begin:
            cout<<"Enter An Even Number : ";
            cin>>e;
            if(e%2!=0)
            {
            cout<<"The number is not even!!"<<endl;
            goto begin;
            }
            begin2:
            cout<<"Enter any odd number : ";
            cin>>o;
            if(o%2==0)
            {
            cout<<"The number is not odd!!"<<endl;
            goto begin2;
            }
            e=e*7;
            o=o*5;
            cout<<"Result : "<<(e+o)-1000;
            pendinask1(sec1,sec);
			ask(sec);  
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
        }
        else if(sec1==5)
        {
			p5s1:
        	system("cls");
			intro();intro1();
			sp5();
			int v[3];
			cout<<"Program :\n\n";
		    cout<<"Enter any 3 values : "<<endl;
		    for(int i=0;i<3;i++)
		    {
		        cin>>v[i];
		    }
		    cout<<endl<<"The first number ("<<v[0]<<") is ";
		    if(v[0]!=1)
		    {
		     for(int i=2;i<v[0];i++)
		     {
		      if(v[0]%i==0)
		        {
		            cout<<"Not Prime";
		             break;
		        }
		        else
		        cout<<"Prime";
		        break;
		       }
		    }
		    else if(v[0]==1)
		    {
		        cout<<"1 can be divided by itself so its a prime number.";
		    }
		    cout<<endl<<"The 2nd number ("<<v[1]<<") is ";
		     if(v[1]!=1)
		    {
		    for(int i=2;i<v[1];i++)
		    {
		    if(v[1]%i==0)
		        {
		            cout<<"Not Prime";
		             break;
		        }
		        else
		        cout<<"Prime";
		        break;
		       }
		    }
		        else if(v[1]==1)
		    {
		        cout<<"1 can be divided by itself so its a prime number.";
		    }
		       cout<<endl<<"The 3rd number ("<<v[2]<<") is ";
		        if(v[2]!=1)
		    {
		        for(int i=2;i<v[2];i++)
		        {
		     if(v[2]%i==0)
		        {
		            cout<<"Not Prime";
		             break;
		        }
		        else
		        cout<<"Prime";
		        break;
		       }
	    	}
		        else if(v[2]==1)
		    {
		        cout<<"1 can be divided by itself so its a prime number.";
		    }
		    for(int i=0;i<3;i++)
		    {
			cout<<endl;
			if ( v[i] % 2 == 0)
		    cout << v[i] << " is even.";
		    else
		    cout << v[i] << " is odd.";
		    }
		    cout<<endl;
		    if(v[1]%v[0]==0&&v[1]%v[2]==0)
		    {
		        cout<<"1st and 3rd number are multiple of 2nd number.";
		    }
		    else if(v[0]%v[1]==0&&v[0]%v[2]==0)
		    {
		        cout<<"2nd and 3rd number are multiple of 1st number.";
		    }
		    else if(v[2]%v[0]==0&&v[2]%v[1]==0)
		    {
		        cout<<"1st and 2nd number are multiple of 3rd number.";
		    }
		    else
		    {
		        cout<<"These 3 numbers are not multiple of each other.";
		    }
		    pendinask1(sec1,sec);
            ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
        }
        else if(sec1==6)
        {
			p6s1:
        	system("cls");
			intro();intro1();
			sp6();
			char ch;
			cout<<"Program :\n\n";
			cout<<"Enter any Alphabet :\n";
			cin>>ch;
			if(ch>='a'&&ch<='z')
			{
			   cout<<"\nYou Entered A Lowercase Alphabet\n";
			   ch=ch-32;
			   cout<<"\nThe uppercase alphabet is "<<ch;
			}
			else
			{
			   cout<<"\nYou Entered An Uppercase Alphabet\n";
			   ch=ch+32;
			   cout<<"\nTe Lowercase Alphabet Is "<<ch;
			}
			pendinask1(sec1,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
        }
        else if(sec1==7)
        {
			p7s1:
        	system("cls");
			intro();intro1();
			sp7();
			float inc,x,t,y,u;
			cout<<"Program :\n\n";
		    cout<<"Enter income to calculate total tax : "<<endl;
		    cin>>inc;
		    if(inc<25000)
		    {
		        x=(4.86/100)*inc;
		        cout<<"Tax is 4.86% of income i.e. "<<x<<endl;
		        cout<<"Total income = "<<inc-x;
		    }
		    else if(inc==25000)
		    {
		        cout<<"Tax is Rs.1500"<<endl;
		        cout<<"Total Income = "<<25000-1500;
		    }
		    else if(inc>25000)
		    {
		        cout<<"Tax is Rs.1575 + 17% of the income exceeding 25000."<<endl;
		        t=inc-25000;
		        t=(t/100)*17;
		        cout<<"17% of the income exceeding 25000 is "<<t<<endl;
		        u=1575+t;
		        cout<<"Total tax = "<<u<<endl;
		        cout<<"Total Income = "<<inc-u;
		    }
		    pendinask1(sec1,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s1;
			}
			else if(proask==2)
			{
				goto p2s1;
			}
			else if(proask==3)
			{
				goto p3s1;
			}
			else if(proask==4)
			{
				goto p4s1;
			}
			else if(proask==5)
			{
				goto p5s1;
			}
			else if(proask==6)
			{
				goto p6s1;
			}
			else if(proask==7)
			{
				goto p7s1;
			}
		}

	}
	else if(sec==2)
	{
		sec2again:
		system("cls");
        intro();
	    intro2();
		cout<<"This section contains nine (9) Array Programs.\n\n";
		ap1(); ap2(); ap3(); ap4(); ap5(); ap6(); ap7(); ap8(); ap9();
		s2again:
		cout<<"\n\nPlease enter your selection : ";
		cin>>sec2;
		if(sec2!=1&&sec2!=2&&sec2!=3&&sec2!=4&&sec2!=5&&sec2!=6&&sec2!=7&&sec2!=8&&sec2!=9)
		{
			cout<<"Invalid Selection ! Please select from 1-9 ! Press any button to Try again."<<endl;
			getch();
			system("cls");
			intro(); intro2();
			goto s2again;
		}
		else if(sec2==1)
		{
			p1s2:
			system("cls");
		    intro();intro2();
		    ap1();
			cout<<"Program :\n\n";
			int c[999],n,i;
		    cout<<" Enter your array size (0-999): ";
		    cin>>n;
		        for(int i=0;i<n;i++)
		    {
		        cout<<"Value "<<i+1<<" = ";
		        cin>>c[i];
		    }
		     for(int i=1;i<n;i++) 
		    {
		       if(c[0]<c[i])
		       {
		          c[0]=c[i];
		       }
		    }
		    cout << endl << "Largest element = "<<c[0];
		    pendinask2(sec2,sec);
		    ask(sec);
		    if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
			
        }
        else if(sec2==2)
        {
			p2s2:
        	system("cls");
		    intro();intro2();
		    ap2();
			cout<<"Program :\n\n";
			int array[5],large,slarge;
			cout<<"Array limit is 5."<<endl;
			for(int i=0;i<5;i++)
			{
			    cout<<"Enter "<<i+1<<" value\n";
			    cin>>array[i];
			}
			large=array[0];
			for(int i=0;i<5;i++)
			{
			if(large<array[i])
			{
			    large=array[i];
			}
			}
			for(int i=0;i<5;i++)
			{
			        if(array[0]<array[i]&&array[i]!=large)
			        {
			            slarge=array[i];
			        }   
			}
			    cout<<" 2nd largest element is : "<<slarge;
			    pendinask2(sec2,sec);
			    ask(sec);
				if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
		}
		else if(sec2==3)
		{
			p3s2:
			system("cls");
		    intro();intro2();
		    ap3();
			cout<<"Program :\n\n";
			int arr[50], n;
		    start1:
		    cout<<"Enter the size of array (>=1) : ";
		    cin>>n;
		    if(n <= 1)
			{
		        cout<<"Please enter value equal or greater than 1 (>=1) !!"<<endl;
		        goto start1;
		    }
		    cout<<"Input in the array :"<<endl;
		    for(int i = 0; i < n; i++)
			{
		    	cin>>arr[i];
			}
		    int previous = arr[0]; 
		    arr[0] = arr[0] * arr[1]; 
		    for (int i = 1; i < n - 1; i++)
			{
		        int current = arr[i];
		        arr[i] = previous * arr[i + 1]; 
		        previous = current;
		    } 
		    arr[n-1] = previous * arr[n-1]; 
		    cout<<"Modified array : ";
		    for (int i=0; i<n; i++) 
		    {
		    	cout << arr[i] << " "; 
			}
			pendinask2(sec2,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
		}
		else if(sec2==4)
		{
			p4s2:
			system("cls");
		    intro();intro2();
		    ap4();
			cout<<"Program :\n\n";
			int arr[999],m;
		    cout<<"Enter the number of values(Please enter atleast one 0 or one 1) of array : ";
		    cin>>m;
		    cout<<"Enter values of array : ";
		    for(int j=0;j<m;j++)
		    {
		        cin>>arr[j];
		    }
		    for(int i=0;i<m;i++)
		    {
		       if(arr[i]==0)
		       {
		          cout<<arr[i]<<" ";
		       }
		    }
		    for(int z=0;z<m;z++)
		    {
		       if(arr[z]==1)
		       {
		          cout<<arr[z]<<" ";
		       }
		    }
		    pendinask2(sec2,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
        }
        else if(sec2==5)
        {
			p5s2:
        	system("cls");
		    intro();intro2();
		    ap5();
			cout<<"Program :\n\n";
			int arr[999],m,t,num=0;
		    cout<<"Enter the number of values of array : ";
		    cin>>m;
		    cout<<"Enter values of array : ";
		    for(int j=0;j<m;j++)
		    {
		        cin>>arr[j];
		    }
		    cout<<"Enter the number of which you want to find the occurence : ";
		    cin>>t;
		    for(int i=0;i<m;i++)
		    {
		        if(arr[i]==t)
		        {
		            num=num+1;
		        }
		    }
		    cout<<t<<" occurred "<<num<<" time(s).";
		    pendinask2(sec2,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
		}
		else if(sec2==6)
		{
			p6s2:
			system("cls");
		    intro();intro2();
		    ap6();
			cout<<"Program :\n\n";
			int arr[999],m,t,num=0;
		    cout<<"Enter the number of values of array : ";
		    cin>>m;
		    cout<<"Enter values of array : "<<endl;
		    for(int j=0;j<m;j++)
		    {
		        cin>>arr[j];
		    }
		    cout<<endl<<"Array you have entered : {";
		     for(int j=0;j<m;j++)
		    {
		        cout<<arr[j]<<", ";
		    }
		    cout<<"}"<<endl;
		    cout<<"\nReversed array is : {";
		     for(int j=m-1;j>=0;j--)
		    {
		        cout<<arr[j]<<", ";
		    }
		    cout<<"}";
		    pendinask2(sec2,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
        }
        else if(sec2==7)
        {
			p7s2:
        	system("cls");
		    intro();intro2();
		    ap7();
			cout<<"Program :\n\n";
			int num[15];
		    cout<<"Enter any 15 positive integers: "<<endl;;
		    for (int i=1;i<=15;i++) 
		    {
		        cin>>num[i];
		    }
		    cout<<"Histogram : "<<endl;
		    cout<<"Element\t Value";
		    for(int i=1;i<=15;i++) 
		    {
		        cout<<endl<<"|"<<i<<"\t| "<<num[i]<<"\t|";
		        for(int k=0;k<num[i];k++)
		        {
		            cout<<"*  ";
		        }
		    }
		    pendinask2(sec2,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}

		}
		else if(sec2==8)
		{
			p8s2:
			system("cls");
		    intro();intro2();
		    ap8();
			cout<<"Program :\n\n";
			int c[999],n,i,loc=0;
		    cout<<"Enter your array size (0-999): ";
		    cin>>n;
		        for(int i=0;i<n;i++)
		    {
		        cout<<"Value "<<i<<" = ";
		        cin>>c[i];
		    }
		     for(int i=0;i<n;i++) 
		   {
		       if(c[0]<c[i])
		       {
		          c[0]=c[i];
		          loc=i;
		       }
		   }
		    cout << endl << "Largest element = "<<c[0]<<endl;
		    cout<<"Its location in the array = "<<"arr["<<loc<<"] .i.e. "<<loc;
		    pendinask2(sec2,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
			
		}
		else if(sec2==9)
		{
			p9s2:
			system("cls");
		    intro();intro2();
		    ap9();
			cout<<"Program :\n\n";
			int a[999],n,temp,temp1;
			char bbs;
			cout<<"Enter the size of array : ";
			cin>>n;
			cout<<"Enter the array elements : "<<endl; 
			for(int i=0;i<n;++i)
			cin>>a[i];
			cout<<"\nOrignally entered array by the user is: "<<endl;	 
			cout<<"{";
			for(int i=0;i<n;++i)
			{
				if(i==n-1)
				{
					cout<<a[i];
				}
				else
				{
					cout<<a[i]<<", ";
				}
			}
			cout<<"}\n\n";
			againent:
			cout<<"\nDo you want to Bubble Sort in ascending or descending order ?  (Enter 'a' for Ascending) (Enter 'd' for Descending)"<<endl;
			cin>>bbs;
			if(bbs!='a'&&bbs!='d')
			{
				cout<<"Please enter either 'a' or 'd' ! Enter again :\n\n";
				goto againent;
			}
			else if(bbs=='a')
			{   
			    for(int i=1;i<n;++i)
			{
			for(int j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}
			}
		    cout<<"Array after bubble sort :\n\nAscending :\n";
			cout<<"{";
			for(int i=0;i<n;++i)
			{
				if(i==n-1)
				{
					cout<<a[i];
				}
				else
				{
					cout<<a[i]<<", ";
				}
			}
			cout<<"}\n\n";		 
			}
			else if(bbs=='d')
			{
	        for(int i=0;i<n;i++) //1 2 4 5 43 62
		    {
			for(int j=0;j<=i;j++)
			{
				if(a[i]>a[j])
				{
				temp1=a[i];
				a[i]=a[j];
				a[j]=temp1;
				}
			}
		    }
		    cout<<"Descending :\n";
			cout<<"{";
			for(int i=0;i<n;++i)
			{
				if(i==n-1)
				{
					cout<<a[i];
				}
				else
				{
					cout<<a[i]<<", ";
				}
			}
			cout<<"}\n\n";
			}
			pendinask2(sec2,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s2;
			}
			else if(proask==2)
			{
				goto p2s2;
			}
			else if(proask==3)
			{
				goto p3s2;
			}
			else if(proask==4)
			{
				goto p4s2;
			}
			else if(proask==5)
			{
				goto p5s2;
			}
			else if(proask==6)
			{
				goto p6s2;
			}
			else if(proask==7)
			{
				goto p7s2;
			}
			else if(proask==8)
			{
				goto p8s2;
			}
			else if(proask==9)
			{
				goto p9s2;
			}
		}

	}
	else if(sec==3)
	{
		sec3again:
		system("cls");
        intro();
	    intro3();
		cout<<"This section contains thirteen (13) Function Programs.\n\n";
		fp1(); fp2(); fp3(); fp4(); fp5(); fp6(); fp7(); fp8(); fp9(); fp10(); fp11(); fp12(); fp13();
		s3again:
		cout<<"\n\nPlease enter your selection : ";
		cin>>sec3;
		if(sec3!=1&&sec3!=2&&sec3!=3&&sec3!=4&&sec3!=5&&sec3!=6&&sec3!=7&&sec3!=8&&sec3!=9&&sec3!=10&&sec3!=11&&sec3!=12&&sec3!=13)
		{
			cout<<"Invalid Selection ! Please select from 1-13 ! Press any button to Try again."<<endl;
			getch();
			system("cls");
			intro(); intro3();
			goto s3again;
		}
		else if(sec3==1)
		{ 
			p1s3:  
		    system("cls");
		    intro();intro3();
		    fp1();
			cout<<"Program :\n\n";
		    int num,sum;
		    cout<<"Enter a 6 digit number : ";
		    cin>>num;
		    findsum(num);
		    pendinask3(sec3,sec);
		    ask(sec);
		    if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
			
	    }
	    else if(sec3==2)
	    {
			p2s3:
	    	system("cls");
		    intro();intro3();
		    fp2();
			cout<<"Program :\n\n";
			beginfp2:
			wnttrs=wrtrt(pqpq,tetet);
			switch(wnttrs)
			{
				case 0:
				{
					cout<<endl<<"$$ Draw $$\n"<<endl;
					trtr++;
					plpl++;
					cout<<"Press any key to try again !\n";
					getch();
					system("cls");
					goto beginfp2;
				}
				case 1:
				{
					cout<<endl<<"$$ Winner is Player 1 $$"<<endl;
					pypypi++;
					plpl++;
					cout<<"Press any key to play again :)\n";
					getch();
					system("cls");
					goto beginfp2;
				}
				case 2:
				{
					cout<<endl<<"$$ Winner is Player 2 $$"<<endl;
					pzpzpy++;
					plpl++;
					cout<<"Press any key to play again :)\n";
					getch();
					system("cls");
					goto beginfp2;
				}
				
			}
			pendinask3(sec3,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}
		else if(sec3==3)
		{
			p3s3:
			system("cls");
		    intro();intro3();
		    fp3();
			cout<<"Program :\n\n";
			cout<<"Array size is 6\n";
		   for(int i12=0 ; i12<6 ;i12++)
		   {
		   	 cout<<"Enter element "<<i12+1<<" : ";
		     cin>>abx[i12];
		   }
		   mxmnsmnsmx();
		   cout<<"\nMaximum Number = "<<fmaxnum;
		   cout<<"\nSecond maximum Number = "<<smaxnum;
		   cout<<"\nMinimum Number = "<<fminnum;
		   cout<<"\nSecond minimum Number = "<<sminnum;
		   pendinask3(sec3,sec);
		   ask(sec);
		   if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}
		else if(sec3==4)
		{
			p4s3:
			system("cls");
		    intro();intro3();
		    fp4();
			cout<<"Program :\n\n";
			int a,b;
		    cout<<"Enter integer A : ";
		    cin>>a;
		    cout<<"\nEnter integer B : ";
		    cin>>b;
		    multiple(a,b);
		    pendinask3(sec3,sec);
		    ask(sec);
		    if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}
		else if(sec3==5)
		{
			p5s3:
			system("cls");
		    intro();intro3();
		    fp5();
			cout<<"Program :\n\n";
			float num1,num2;
		    cout<<"Enter an operator (+, -, *, /): ";
		    cin>>opertt;
		
		    cout<<"Enter two numbers : "<<endl;
		    cin>>num1>>num2;
		    calce(num1,num2);
		    pendinask3(sec3,sec);
		    ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}	
		}
		else if(sec3==6)
		{
			p6s3:
			system("cls");
		    intro();intro3();
		    fp6();
			cout<<"Program :\n\n";
			char name6[6];
		    int avg6[6];
		    cout<<"Enter names of Sections : \n";
		    cout<<"Section : ";
		    cin>>name6[0];
			cout<<"Section : ";
			cin>>name6[1];
			cout<<"Section : ";
			cin>>name6[2];
			cout<<"Section : ";
			cin>>name6[3];
			cout<<"Section : ";
			cin>>name6[4];
			cout<<"Section : ";
			cin>>name6[5];
		    cout<<"\nEnter Average of Section "<<name6[0]<<" : ";
		    cin>>avg6[0];
		        cout<<"\nEnter Average of Section "<<name6[1]<<" : ";
		    cin>>avg6[1];
		        cout<<"\nEnter Average of Section "<<name6[2]<<" : ";
		    cin>>avg6[2];
		        cout<<"\nEnter Average of Section "<<name6[3]<<" : ";
		    cin>>avg6[3];
		        cout<<"\nEnter Average of Section "<<name6[4]<<" : ";
		    cin>>avg6[4];
		    cout<<"\nEnter Average of Section "<<name6[5]<<" : ";
		    cin>>avg6[5];
		    winnersection(name6,avg6);
			pendinask3(sec3,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}
		else if(sec3==7)
		{
			p7s3:
			system("cls");
		    intro();intro3();
		    fp7();
			cout<<"Program :\n\n";
			cout<<"Enter Marks of Courses :\nRoll No. 1: "<<endl;
		    cin>>atr>>bbt>>c>>ddrt>>eer;                             
		    cout<<"Enter Marks of Courses :\nRoll No. 2: "<<endl;
		    cin>>ggt>>hht>>iit>>jjt>>kkt;                           
		    cout<<"Enter Marks of Courses :\nRoll No. 3: "<<endl;
		    cin>>mmt>>nnt>>oot>>ppt>>qqt;                            
		    cout<<"Enter Marks of Courses :\nRoll No. 4: "<<endl;
		    cin>>sst>>ttl>>uut>>vvt>>wwt;                           
		    cout<<"Enter Marks of Courses :\nRoll No. 5: "<<endl;
		    cin>>yyt>>zzt>>xxt>>rrt>>llt; 
		    cout<<endl<<"|--Roll No.-|"<<"  |---------------Marks---------------|"<<endl;
		    cout<<"|Roll No. 1:|  |"<<atr<<"|\t|"<<bbt<<"|\t|"<<c<<"|\t|"<<ddrt<<"|\t|"<<eer<<"|"<<endl;
		    cout<<"|Roll No. 2:|  |"<<ggt<<"|\t|"<<hht<<"|\t|"<<iit<<"|\t|"<<jjt<<"|\t|"<<kkt<<"|"<<endl;
		    cout<<"|Roll No. 3:|  |"<<mmt<<"|\t|"<<nnt<<"|\t|"<<oot<<"|\t|"<<ppt<<"|\t|"<<qqt<<"|"<<endl;
		    cout<<"|Roll No. 4:|  |"<<sst<<"|\t|"<<ttl<<"|\t|"<<uut<<"|\t|"<<vvt<<"|\t|"<<wwt<<"|"<<endl;
		    cout<<"|Roll No. 5:|  |"<<xxt<<"|\t|"<<yyt<<"|\t|"<<zzt<<"|\t|"<<rrt<<"|\t|"<<llt<<"|"<<endl;
		    cout<<endl<<"Sum = "<<endl;
		    sum(atr,bbt,c,ddrt,eer,frt,ggt,hht,iit,jjt,kkt,llt,mmt,nnt,oot,ppt,qqt,rrt,sst,ttl,uut,vvt,wwt,xxt,yyt,zzt,abt,act,addrt,aet,imt,bbr,tyt,rtt,eet);
		    cout<<high(atr,bbt,c,ddrt,eer,frt,ggt,hht,iit,jjt,kkt,llt,mmt,nnt,oot,ppt,qqt,rrt,sst,ttl,uut,vvt,wwt,xxt,yyt,zzt,abt,act,addrt,aet,imt,bbr,tyt,rtt,eet); 
			pendinask3(sec3,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
					
		}
		else if(sec3==8)
		{
			p8s3:
			system("cls");
		    intro();intro3();
		    fp8();
			cout<<"Program :\n\n";
			x:
		    string  number;
		    cout << "Please Enter a Six Digit Number :" << endl;
		    cin >> number;
		    if (number.length()>6)
		    {
		        cout << "Length of number must be 6 !!" << endl;
		        goto x;
		    }
		    cout<<endl;
		    numty(number);
			pendinask3(sec3,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
			
		}
		else if(sec3==9)
		{
			p9s3:
			system("cls");
		    intro();intro3();
		    fp9();
			cout<<"Program :\n\n";
			Pt pnt1,pnt2,pnt3,pnt4;
			cout <<"Enter x,y co-ordinates of point 1 : "<<endl;
			cin >>pnt1.x;
			cin >>pnt1.y;
			cout <<"Enter x,y co-ordinates of point 2 : "<<endl;
			cin >>pnt2.x;
			cin >>pnt2.y;
			cout <<"Enter x,y co-ordinates of point 3 : "<<endl;
			cin >>pnt3.x;
			cin >>pnt3.y;
			cout <<"Enter x,y co-ordinates of point 4 : "<<endl;
			cin >>pnt4.x;
			cin >>pnt4.y;
			cout<<endl;
			if (Square(pnt1, pnt2, pnt3, pnt4)) 
			{
				cout << "It is a Square."<<endl;
			}
			else if (Rectangle(pnt1, pnt2, pnt3, pnt4)) 
			{
				cout << "It is a Rectangle."<<endl;
			}
			else if (Rhombus(pnt1, pnt2, pnt3, pnt4)) 
			{
				cout << "It is a Rhombus."<<endl;
			}
			else if (Parallelogram(pnt1, pnt2, pnt3, pnt4)) 
			{
				cout << "It is a Parallelogram."<<endl;
			}
			else 
			{
				cout << "It is a Quadrilateral."<<endl;
			} 
			pendinask3(sec3,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			} 
		}
		else if(sec3==10)
		{
			p10s3:
			system("cls");
		    intro();intro3();
		    fp10();
			cout<<"Program :\n\n";
			Point p1, p2, p3;
			cout << "Enter x,y co-ordinates of point 1 :"<<endl;
			cin >> p1.x >> p1.y;
			cout << "Enter x,y co-ordinates of point 2 :"<<endl;
			cin >> p2.x >> p2.y;
			cout << "Enter x,y co-ordinates of point 1 :"<<endl;
			cin >> p3.x >> p3.y;
			cout << endl;
     		if (isIsosceles(p1, p2, p3)) 
			{
				cout << "Isosceles Triangle" << endl;
			}
			if (isEquilateral(p1, p2, p3))
			{
				cout << "Equilateral Triangle" << endl;
			}
			if (isRightAngled(p1, p2, p3)) 
			{
				cout << "Right Angled Triangle" << endl;
			}
			pendinask3(sec3,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}

		}
		else if(sec3==11)
		{
			p11s3:
			system("cls");
		    intro();intro3();
		    fp11();
			cout<<"Program :\n\n";
            if (ptr(x11, y11, x22, y22, xttt, yttt))
			{
				cout << "\nLies inside the rectangle.";
			}
			else
			{
				cout << "\nLies outside the rectangle.";
			}
			pendinask3(sec3,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}
		else if(sec3==12)
		{
			p12s3:
			system("cls");
		    intro();intro3();
		    fp12();
			cout<<"Program :\n\n";
            float x;
			int y;
			cout<<"Enter any float number: ";
			cin>>x;
			y=ceil(x);
			cout<<"\nThe ceil function value of entered number is: "<<y;
            pendinask3(sec3,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}

		}
		else if(sec3==13)
		{
			p13s3:
			system("cls");
		    intro();intro3();
		    fp13();
			cout<<"Program :\n\n";
            float x;
			int y;
			cout<<"Enter any float number: ";
			cin>>x;
			y=floor(x);
			cout<<"\nThe floor function value of entered number is: "<<y;
            pendinask3(sec3,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s3;
			}
			else if(proask==2)
			{
				goto p2s3;
			}
			else if(proask==3)
			{
				goto p3s3;
			}
			else if(proask==4)
			{
				goto p4s3;
			}
			else if(proask==5)
			{
				goto p5s3;
			}
			else if(proask==6)
			{
				goto p6s3;
			}
			else if(proask==7)
			{
				goto p7s3;
			}
			else if(proask==8)
			{
				goto p8s3;
			}
			else if(proask==9)
			{
				goto p9s3;
			}
			else if(proask==10)
			{
				goto p10s3;
			}
			else if(proask==11)
			{
                goto p11s3;
			}
			else if(proask==12)
			{
                goto p12s3;
			}
			else if(proask==13)
			{
                goto p13s3;
			}
		}  		    
		    
    }
    else if(sec==4)
	{
		sec4again:
		system("cls");
        intro();
	    intro4();
		cout<<"This section contains four (4) Loop Programs.\n\n";
		lp1(); lp2(); lp3(); lp4();
		s4again:
		cout<<"\n\nPlease enter your selection : ";
		cin>>sec4;
		if(sec4!=1&&sec4!=2&&sec4!=3&&sec4!=4)
		{
			cout<<"Invalid Selection ! Please select from 1-4 ! Press any button to Try again."<<endl;
			getch();
			system("cls");
			intro(); intro4();
			goto s4again;
		}
		else if(sec4==1)
		{  
			p1s4: 
		    system("cls");
		    intro();intro4();
		    lp1();
			cout<<"Program :\n\n";
			for(int i=1;i<=4;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<j<<" ";
				}
				cout<<endl;
			}
			pendinask4(sec4,sec);
			ask(sec);
			if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s4;
			}
			else if(proask==2)
			{
				goto p2s4;
			}
			else if(proask==3)
			{
				goto p3s4;
			}
			else if(proask==4)
			{
				goto p4s4;
			}
			
	    }
	    else if(sec4==2)
	    {
			p2s4:
	    	system("cls");
		    intro();intro4();
		    lp2();
			cout<<"Program :\n\n";
			for(int i=5;i>=1;i--)
		    {
		        for(int j=1;j<=i;j++)
		        {
		            cout<<"* ";      
		        }
		        cout<<endl;
		    }
		    pendinask4(sec4,sec);
		    ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

			if(proask==1)
			{
				goto p1s4;
			}
			else if(proask==2)
			{
				goto p2s4;
			}
			else if(proask==3)
			{
				goto p3s4;
			}
			else if(proask==4)
			{
				goto p4s4;
			}
		}
		else if(sec4==3)
		{
			p3s4:
			system("cls");
		    intro();intro4();
		    lp3();
			cout<<"Program :\n\n";
			for(int i=1;i<=4;i++)
			{
			    for(int j=1;j<=2*4-1;j++)
			    {
			        if(j>=4-(i-1)&&j<=4+(i-1))
			        {
			            cout<<"* ";
			        }
			        else
			        {
			            cout<<"  ";
			        }
			    } 
			  cout<<"\n";
			}
			pendinask4(sec4,sec);
			ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

				if(proask==1)
			{
				goto p1s4;
			}
			else if(proask==2)
			{
				goto p2s4;
			}
			else if(proask==3)
			{
				goto p3s4;
			}
			else if(proask==4)
			{
				goto p4s4;
			}
		}
		else if(sec4==4)
		{
			p4s4:
			system("cls");
		    intro();intro4();
		    lp4();
			cout<<"Program :\n\n";
			for(int i=1;i<=4;i++)
		    {   
		    if(i==1)
		    {
		        for(int j=i;j<=i;j++)
		        {  
		            cout<<j;
		        }
		        cout<<endl;
		     }
		    if(i==2)
		    {
		        for(int j=i;j<=3;j++)
		        {   
		            if(j==3)
		            cout<<j+1;
		            else
		            cout<<j<<" ";
		        }
		        cout<<endl;
		    }
		    if(i==3)
		    {
		        for(int j=5;j<=7;j++)
		        {
		            cout<<j<<" ";
		        }
		        cout<<endl;
		    }
		    if(i==4)
		    {
		        for(int j=9;j<=15;j+=2)
		        {
		            cout<<j<<" ";
		        }
		        cout<<endl;
		    }
		    }
		    pendinask4(sec4,sec);
		    ask(sec);
            if(secask==1)
			{
				goto sec1again;
			}
			else if(secask==2)
			{
				goto sec2again;
			}
			else if(secask==3)
			{
				goto sec3again;
			}
			else if(secask==4)
			{
				goto sec4again;
			}

				if(proask==1)
			{
				goto p1s4;
			}
			else if(proask==2)
			{
				goto p2s4;
			}
			else if(proask==3)
			{
				goto p3s4;
			}
			else if(proask==4)
			{
				goto p4s4;
			}
		}
	} 
}
