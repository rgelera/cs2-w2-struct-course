#include <iostream>
#include <string>

using namespace std;

struct course {
  string code;
  int number;
  string title;
};

int numCoursesInDepartment(course courseArray[], int numCourses, string department) {
  int count = 0;
  for (int i=0; i<numCourses; i++) {
    if (courseArray[i].code.compare(department) == 0 ) {
      count++;
    }
  }  
  return count;
}


int main(int argc, char** argv) {
  const int ARRAY_SIZE = 10;
  course courseArray[ARRAY_SIZE] = {
    {"CSC", 110, "Fundamental Programming: I"},
    {"MATH", 100, "Calculus: I"},
    {"PHYS", 120, "Physics: I"},
    {"CSC", 115, "Fundamental Programming: II"},
    {"ENGL", 135, "Acaedemic Reading and Writing"},
    {"MATH", 101, "Calculus: I"},
    {"MATH", 122, "Logic and Foundations"},
    {"CSC", 225, "Algorithms and Data Structures: I"},
    {"MATH", 211, "Matrix Algebra: I"},
    {"MATH", 222, "Discrete and Combinatorics Math"}
  };

  string testDept = "SENG";
  cout << "There are " << numCoursesInDepartment(courseArray, ARRAY_SIZE, testDept) << " courses in the " << testDept << " department.";
}