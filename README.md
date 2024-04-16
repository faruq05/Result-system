# Result-system
Simple result system using C language

Project: Simple Result System
Our project was on a Simple result System where you can see your updated marks by teachers. This system also stores your academic information like roll no etc. The data is stored in a text file using the file handling concept. 

The project has 2 main parts. In main we have Student Portal and Teacher Portal. The Exit is used for exiting the code.
We used ten functions for this result system. Which are:
•	Calculating CGPA
1.	double cgpa();
2.	double Total_Cgpa();
•	Student Portal
1.	SignUp_Student();
2.	LogIn_Student();
•	Teacher Portal
1.	logingTeacher();
2.	SFR1(); [For CSE marks]
3.	AMK(); [For MAT marks]
4.	FHS(); [For ENG marks]
5.	view_student();
6.	search_student();
In the student Portal, The student can sign up and import their information such as name, id, department, username, and password by the SignUp_Student function. The information is taken by structure using struct info student and to store the information in a file we used the FILE *Student pointer. The file name is Userinfo.txt. By using the Login_Student function student can log in after signing up to view their profile and CGPA after the teacher provides their marks.
In the Teacher Portal, the teacher can add student marks by logging into their specific account using the login_teacher function. In this code, we took 4 subjects, CSE115, CSE115L, MAT116, and ENG102. The teacher can’t give marks if they are not logged in. Here in the login teacher part, we used the SFR1 function for CSE115 and CSE115L, the AMK function for MAT116, and FHS function for ENG102. After providing marks to students the marks will be updated and the CGPA will be calculated by the cgpa and Total_Cgpa functions. The students then can view their CGPA in their profile. The teacher can also view all students and search for an individual student using the view_student and search_student functions.
In Main () a switch case has been used to create a menu. Users can choose options between 1 to 3. If the option is outside of 1 to 3 program won’t be continued by printing an invalid message and redirected to the main() function.
By pressing 1 the student portal is activated and we will see 3 more options for
1.	Sign Up for Student
2.	Student Log In
3.	Back
By pressing 2 the teacher portal is activated and we will see 4 more options for
1.	Add student’s marks
2.	View Students
3.	Search Exact Students
4.	Back
By pressing 3 the program will terminate and exit.

We have more plans for this result system project further in the future as the code isn’t that perfect. We are planning to create a signup system for the teachers. The code doesn’t have any edit or delete options. The student’s records are also limited we are planning to expand the code as well. That’s all from group 7 in this Simple result System Project.

Thank YOU

