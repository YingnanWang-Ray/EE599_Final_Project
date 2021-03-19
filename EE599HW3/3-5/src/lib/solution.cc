#include "solution.h"
#include<iostream>
using namespace std;

AcademicRecord::AcademicRecord(){
	Maths = 0;
	Computers = 0;
	Physics = 0;	
}
AcademicRecord::AcademicRecord(int a, int b, int c){
	Maths = a;
	Computers = b;
	Physics = c;
}
AcademicRecord AcademicRecord::operator=(AcademicRecord& obj){
	Maths = obj.Maths;
	Computers = obj.Computers;
	Physics = obj.Physics;
	return AcademicRecord(Maths,Computers,Physics);
}
void AcademicRecord::print(){
	cout<<"Maths::"<<Maths<<endl;
	cout<<"Computers::"<<Computers<<endl;
	cout<<"Physics::"<<Physics<<endl;
}

AcademicRecord AcademicRecord::operator++(int){
	Maths += 10;
	if ( Maths > 100)
		Maths = 100;
	Computers += 10;
	if ( Computers > 100)
		Computers = 100;
	Physics += 10;
	if ( Physics > 100)
		Physics = 100;
	return AcademicRecord(Maths,Computers,Physics);
}

AcademicRecord AcademicRecord::operator--(int){
	Maths -= 20;
	if ( Maths < 0)
		Maths = 0;
	Computers -= 20;
	if ( Computers < 0)
		Computers = 0;
	Physics -= 20;
	if ( Physics < 0)
		Physics = 0;
	return AcademicRecord(Maths,Computers,Physics);
}

AcademicRecord AcademicRecord::operator+=(int in){
	Maths += in;
	if ( Maths > 100)
		Maths = 100;
	Computers += in;
	if ( Computers > 100)
		Computers = 100;
	Physics += in;
	if ( Physics > 100)
		Physics = 100;
	return AcademicRecord(Maths,Computers,Physics);
}

AcademicRecord AcademicRecord::operator-=(int dec){
	Maths -= dec;
	if ( Maths < 0)
		Maths = 0;
	Computers -= dec;
	if ( Computers < 0)
		Computers = 0;
	Physics -= dec;
	if ( Physics < 0)
		Physics = 0;
	return AcademicRecord(Maths,Computers,Physics);
}

bool AcademicRecord::operator==(AcademicRecord& obj){
	if(Maths == obj.Maths &&	Computers == obj.Computers && Physics == obj.Physics)
		return true;
	return false;
}
