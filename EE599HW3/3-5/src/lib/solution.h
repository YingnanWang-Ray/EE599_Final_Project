#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class AcademicRecord{
public:
  AcademicRecord();
  AcademicRecord(int, int, int);
  ~AcademicRecord(){};
  AcademicRecord operator++(int);
  AcademicRecord operator--(int);
  AcademicRecord operator+=(int in);
  AcademicRecord operator-=(int dec);
  AcademicRecord operator=(AcademicRecord& obj);
  bool operator==(AcademicRecord& obj);
  void print();
  int Maths;
  int Computers;
  int Physics;
};

#endif