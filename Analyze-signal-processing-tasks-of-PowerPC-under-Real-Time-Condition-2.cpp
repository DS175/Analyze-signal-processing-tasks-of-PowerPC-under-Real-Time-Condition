#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	float num[40][5];
	float frame[30]={1,2,3,4,5,6,8,10,12,15,16,20,24,25,30,40,48,50,60,75,80,100,120,125,150,250 }; //Possible Frames size
	float H=6000; // Hyperiod
	float F[30];
	int i;
	int f=250;
	int minor=24;
	float g1t,g2t,g3t,g4t; //g1=Task 1~27, g2=Task 28~32, g3=Task 33~36, g4=Task 37~39
	ifstream fin("hw1tb2.txt");
    if(!fin) { 
        cout << "Can't read file.'\n"; 
        system("pause");
        return 0;
    }
    for(int i=1;i<=39;i++)
      for(int k=1;k<=4;k++)
        fin >> num[i][k];
    fin.close();
    
    for(i=0;i<27;i++)
    {
    	F[i]=(H/frame[i]);}
	
	for(int i=0;i<=26;i++)
	{
		g1t+=num[i][3];
	}
	g1t=24*g1t;
	for(int i=27;i<=31;i++)
	{
		g2t+=num[i][3];
	}
	g2t=12*g2t;
	for(int i=32;i<=35;i++)
	{
		g3t+=num[i][3];
	}
	g3t=3*g3t;
	for(int i=36;i<=39;i++)
	{
		g4t+=num[i][3];
	}
	cout << "Group 1 (Task 1~27) exec time= " << g1t<< endl;
	cout << "Group 2 (Task 28~32) exec time= " << g2t<< endl;
    cout << "Group 3 (Task 33~36) exec time= " << g3t<< endl;
	cout << "Group 4 (Task 37~39) exec time= " << g4t<< endl;	
	
    for(int i=1;i<=24;i++)
	{
		cout << "Frame " << i << endl;
		for(int k=1;k<=27;k++)
		{
			cout << "Task " << k << endl;
		}
	
		}
	for(int i=0;i<=12;i++)
	{
		cout << "Frame " << (2*i+1) << endl;
		for(int k=28;k<=32;k++)
		{
			cout << "Task " << k << endl;
		}
	for(int i=0;i<=3;i++)
	{
		cout << "Frame " << (8*i+1) << endl;
		for(int k=33;k<=36;k++)
		{
			cout << "Task " << k << endl;
		}
		
	}
	for(int i=0;i<=1;i++)
	{
		cout << "Frame " << (24*i+1) << endl;
		for(int k=37;k<=39;k++)
		{
			cout << "Task " << k << endl;
		}
		
	}
	
		ofstream out("HW1-2efg.txt");
	out << "Question 2(e)" << endl;
    out << "Group 1 (Task 1~27) exec time= " << g1t<< endl;
	out << "Group 2 (Task 28~32) exec time= " << g2t<< endl;
    out << "Group 3 (Task 33~36) exec time= " << g3t<< endl;
	out << "Group 4 (Task 37~39) exec time= " << g4t<< endl;	
	
    for(int i=1;i<=24;i++)
	{
		out << "Frame " << i << endl;
		for(int k=1;k<=27;k++)
		{
			out << "Task " << k << endl;
		}
	
		}
	for(int i=0;i<=12;i++)
	{
		out << "Frame " << (2*i+1) << endl;
		for(int k=28;k<=32;k++)
		{
			out << "Task " << k << endl;
		}
	for(int i=0;i<=3;i++)
	{
		out << "Frame " << (8*i+1) << endl;
		for(int k=33;k<=36;k++)
		{
			out << "Task " << k << endl;
		}
		
	}
	for(int i=0;i<=1;i++)
	{
		out << "Frame " << (24*i+1) << endl;
		for(int k=37;k<=39;k++)
		{
			out << "Task " << k << endl;
		}
		
	}
	out << "Question 2(f)" << endl;
	out << "My frame size is 250" << endl; 
	out << "Question 2(g)" << endl;
	out << "There are " << (6000/250) << " minor cycles" << endl;
	
	

    
    return 0;
}}} 
