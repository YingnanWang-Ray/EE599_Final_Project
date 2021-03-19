#include "iostream"
using namespace std;

int main()
{	
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	char b[15] = "abcdefghijklmn";
	float c[5] = {1.1,2.2,3.3,4.4,5.5}; 

	int *p = a;
	char *q = b;
	//float *r = c;
	int countint, countchar, countfloat;
	countint = countchar = 1;
	countfloat = 0;
	while(*p!='\0')
	{
		countint++;
		p++;
	}	
	while(*q!='\0')
	{
		countchar++;
		q++;
	}
	for(auto i : c)
		countfloat++;
	cout<<"Int array I creadted has a length of "<<countint<<endl;
	cout<<"Char array I creadted has a length of "<<countchar<<endl;
	cout<<"Float array I creadted has a length of "<<countfloat<<endl;
    return 0;
}
