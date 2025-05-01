
📚 Book Shop Management System - C++ Project
📌 Project Description
This is a simple console-based Book Shop Msanagement System written in C++. It allows the user to perform various book-related operations such as inserting, searching, updating, deleting, and displaying book records. All data is saved to a file for persistence.

💻 Features
Insert Book – Add new book records.

Search Book – Find a book by its ID.

Update Book – Modify details of an existing book.

Delete Book – Remove a book record using its ID.

Show All Books – Display all stored books.

Save to File – Automatically saves data to a file (Ali.txt or books.txt).

🧾 Data Storage
Books are stored in a structure BookShop with fields:

id (Integer)

name (String)

aut_name (String) – Author Name

pub_name (String) – Publisher Name

price (Float)

All records are temporarily stored in an array and saved to:

Ali.txt (used in saveData() function)

books.txt (used in Delete function for overwrite)

🛠️ How to Run
Requirements:

C++ compiler (e.g., g++, Dev C++, Code::Blocks)

Windows (uses <conio.h> and system("cls"))

Steps:

Copy the code into a file named main.cpp.

Compile and run the file using your preferred IDE or command line.

Use the number options in the menu to perform operations.

📂 File Descriptions
File Name	Description
main.cpp	Main source code file
Ali.txt	Saves book details after each insert
books.txt	Used during deletion to overwrite updated list

📝 Notes
The program uses a simple array b[25] to store up to 25 books.

Book ID is the key for searching, updating, and deleting records.

Data is not loaded from file on startup (only saved). Future improvement can be adding a load function to read data from the file when the program starts.

📌 Sample Menu Output
sql
Copy
Edit
▓▓1. INSERT BOOK
▓▓2. SEARCH BOOK
▓▓3. UPDATE BOOK
▓▓4. DELETE BOOK
▓▓5. SHOW BOOK
▓▓6. EXIT
▓▓ ENTER YOUR CHOICE .....>>>
✅ Author
Developed by: Muhammad Umar

Course: BS CS – PMAS UIIT,Rawalpindi

Semester: 4th

Project: Console-Based Book Management System (C++)