
STUDENT RECORD MANAGEMENT SYSTEM USING LINKED LISTS (C)

OVERVIEW
The Student Record Management System is a menu-driven application developed in the C programming language using the Linked List data structure. It provides an efficient and dynamic way to store, update, and manage student information. This project demonstrates the practical use of data structures, dynamic memory allocation, file handling, and the Makefile build system. It is suitable for academic and portfolio use.

FEATURES
1. Add New Record – Insert a new student record dynamically.
2. Delete a Record – Remove a student record using roll number.
3. Show All Records – Display all stored records clearly.
4. Modify Existing Record – Update student details without deleting.
5. Save Records to File – Store records permanently in a file.
6. Sort Records – Sort by roll number, name, or marks.
7. Reverse List – Reverse the linked list order.
8. Delete All Records – Clear all records in one operation.
9. Exit – Safely terminate the application.

TECHNOLOGIES USED
- C Programming Language
- Linked List Data Structure
- Dynamic Memory Allocation (malloc, free)
- File Handling (fopen, fprintf, fread)
- Makefile (Build Automation)

PROJECT STRUCTURE
header.h
main.c
stud_add.c
stud_delete.c
stud_modify.c
stud_show.c
stud_sort.c
stud_reverse.c
stud_save.c
stud_exit.c
makefile
student (Executable)
student.dat (Data File)
README.txt

WORKING PRINCIPLE
Each student is stored as a node in a linked list.
Each node contains student details (roll number, name, marks, etc.) and a pointer to the next node.
All operations such as insert, delete, modify, sort, reverse, and file save are implemented using linked list concepts, ensuring efficient memory usage and dynamic data handling.

HOW TO COMPILE AND RUN (USING MAKEFILE)
Step 1: Compile the project
make

Step 2: Run the program
./student

Step 3: Clean build files (optional)
make clean

USE CASES
- Student data organization
- Data structures mini-project
- CRUD application practice in C
- Learning linked lists and dynamic memory
- Academic and portfolio demonstration

FUTURE ENHANCEMENTS
- Add search functionality
- Export records to CSV or Excel
- Password-protected login
- GUI-based version

