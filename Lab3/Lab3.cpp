#include <iostream>
#include <string>

using namespace std;

class GradeBook{
public:
    GradeBook(string C_name, string I_name)
		: courseName(C_name), insturctorName(I_name)
	{
		// empty
	}

	void setCourseName(string C_name){
		courseName = C_name;
	}

	string getCourseName(){
		return courseName;
	}

	void setInstructorName(string I_name){
		insturctorName = I_name;
	}

	string getInstructorName(){
		return insturctorName;
	}

	void displayMessage(){
		cout << "\nWelcome to the grade book for " << getCourseName() <<
		"! \nThis course is presented by: " << getInstructorName();
	}

private:
    string courseName;
	string insturctorName;
};

int main(){
	GradeBook gradeBook1("Course Name", "Instructor Name");
	GradeBook gradeBook2();
	string C_name, I_name;

	getline(cin, C_name);
	gradeBook2.setCourseName("C_name");
	getline(cin, I_name);
	gradeBook2.setInstructorName("I_name");

	gradeBook1.displayMessage();
	gradeBook2.displayMessage();
	
	return 0;
}