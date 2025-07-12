# 💳 Payment App - EasyPesa

This is a basic console-based C++ project that simulates a mobile payment system.

## 🔧 Features / Functions

- **Sign Up** a new user
- **Login** with options menu
- **Send Money** to a friend
- **View Friend List**
- **Check Account Details**
- **Pay Bills** (Electricity, Gas, Internet)
- **Pay Police Challan** (Traffic, Dolphin)
- **Exit Program**

## 🧱 Object-Oriented Concepts Used

- **Classes & Objects** – Menu, Account, Signup, Users, Easypesa
- **Inheritance** – `Signup` and `Users` inherit from `Account`
- **Friend Class** – `Easypesa` is a friend of `Account` and `Users`
- **Operator Overloading** – `<<` operator to display user account details
- **Function Overloading** – Constructors with different parameters
- **Encapsulation** – User data and operations organized inside classes

## ▶️ How to Run

1. Compile:
   ```bash
   g++ Driver.cpp Implementation.cpp -o PaymentApp
