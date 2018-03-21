#include<iostream>
#include<fstream>
using namespace std;
int LCM(int, int);
int gcd(int , int);
int main()
{
    float num[40][5];
    float sum;
    float x,y,z;
    float max=num[1][3];
    float fac[9999];
    ifstream fin("hw1tb.txt");
    if(!fin) { 
        cout << "Can't read file.'\n"; 
        system("pause");
        return 0;
    }
    for(int i=1;i<=39;i++)
      for(int k=1;k<=4;k++)
        fin >> num[i][k];
    fin.close();
	float U[40];
	for(int l=1;l<=39;l++)
	{
		U[l]=(num[l][3]/num[l][2]);
	}
	cout << "Question 2(a)" << endl;
	for(int l=1;l<=39;l++)
	{
		cout << "Task " << l << " utilization= " <<  U[l] << endl;
	}
	cout << "Question 2(b)" << endl;
	for(int i=1;i<=39;i++)
	{
		sum+=U[i];
	}
	cout << "System utilization= " << sum << endl;
	cout << "Question 2(c)" << endl;
	x=LCM(250,500);
	y=LCM(2000,6000);
	z=LCM(x,y);
	cout << "hyperperiod= " << z << endl;
	cout << "Question 2(d)(a)" << endl;
	for(int i=1;i<=39;i++)
	{
		if(max<=num[i][3])
		max=num[i][3];
	}
	cout << "First constraint: f > " << max << endl;
	
	cout << "Second constraint: possible choices for f are " ;
	for(int i=1;i<=z;i++)
	{
		if(6000%i==0)
		fac[i]=i;
		if(fac[i]>=1)
		cout << fac[i] << " ";
	}
	cout << endl;
	cout << "Third constraint: f are " ;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>=1 && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				cout << fac[i] << " ";
	}
	cout << endl;
	cout << "According to these three constraints, f are " ;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>max && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				cout << fac[i] << " ";
	}
	cout << endl;
	cout << "Question 2(d)(b)" << endl;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>=1 && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				cout << fac[i] << " ";
	}
	
	
	
	
	
	ofstream out("HW1-2.txt");
	out << "Question 2(a)" << endl;
	for(int l=1;l<=39;l++)
	{
		out << "Task " << l << " utilization= " <<  U[l] << endl;
	}
	out << "Question 2(b)" << endl;
	out << "System utilization= " << sum << endl;
	out << "Question 2(c)" << endl;
	out << "hyperperiod= " << z << endl;
	out << "Question 2(d)(a)" << endl;
	out << "First constraint: f > " << max << endl;
	out << "Second constraint: possible choices for f are " ;
	for(int i=1;i<=z;i++)
	{
		if(6000%i==0)
		fac[i]=i;
		if(fac[i]>=1)
		out << fac[i] << " ";
	}
	out << endl;
	out << "Third constraint: f are " ;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>=1 && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				out << fac[i] << " ";
	}
	out << endl;
	out << "According to these three constraints, f are " ;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>max && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				out << fac[i] << " ";
	}
	out << endl;
	out << "Question 2(d)(b)" << endl;
	for(int i=1;i<=z;i++)
	{
		if(fac[i]>=1 && (2*fac[i]-gcd(250,fac[i])<=250)&& (2*fac[i]-gcd(500,fac[i])<=500)&& (2*fac[i]-gcd(2000,fac[i])<=2000)&& (2*fac[i]-gcd(6000,fac[i])<=6000))
				out << fac[i] << " ";
	}
	out.close();
	
    return 0;
}
int LCM(int a,int b)
{
 int min, max;
 int r;
 max=a>b?a:b;
 min=a<b?a:b;
 if(max%min==0)
  return max;
 while(max%min!=0)
 {
  r=max%min;
  max=min;
  min=r;
 }
 return a*b/min;
} 
int gcd(int a, int b)
{
    int tmp;
    while(b != 0){
        tmp = a;
        a = b;
        b = tmp%b;
    }
    return a;
}
