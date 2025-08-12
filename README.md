# Book-Management-System

Overview
The Book Management System is a C++ console-based application designed to manage a library's book inventory and user activities digitally. It allows users to register, borrow, return, and donate books. The system maintains a record of available books, borrowed books, and user information using Object-Oriented Programming principles.

This project demonstrates fundamental C++ concepts such as classes, inheritance, encapsulation, static data members, and virtual functions, along with usage of Standard Template Library (vector, string) for data handling.

Features
User Registration – New users can register with their name and mobile number, receiving a unique user ID.

View Available Books – Displays all books along with their availability status.

Borrow Books – Borrow any available book by entering its ID.

Return Books – Return borrowed books to make them available again.

Donate Books – Add new books to the library collection.

Persistent Session – Maintains user and book information during runtime.

Technical Details
Language: C++

Paradigm: Object-Oriented Programming

Key Classes:

Book – Represents individual books with attributes like ID, title, author, and availability.

Library – Base class containing book list and related operations.

User – Inherits from Library, manages user-specific details and borrowing/returning actions.

Core Concepts Used:

Inheritance and Polymorphism

Encapsulation

Static Data Members

Virtual Functions

Libraries Used:

<iostream> for input/output

<string> for handling text

<vector> for dynamic storage of books and users

📂 BookManagementSystem
 ├── book.h          # Class definitions for Book, Library, and User
 ├── Bookimp.cpp     # Implementation of class member functions
 ├── Bookapp.cpp     # Main application logic and menu handling
 └── README.md       # Project documentation

