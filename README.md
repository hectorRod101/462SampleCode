Make sure to read to compile code.

All #include's of .hpps have to match where you have placed the files in your computer.
Example: #include "/Users/hecthor/Desktop/fall_2019/462/sampleCode/TechnicalServices/Persistence/SimpleDB.hpp"

Make sure to compile every cpp file seperately creating .o files.
Example: g++ -std=c++17 -c main.cpp

Once all .o files have been created, compile all .o files into an executable file. Include the path if some .o files are not at the root.
Example:g++ main.o UI/SimpleUI.o  TechnicalServices/Persistence/SimpleDB.o Domain/AccountManagement/U
serAccounts.o Domain/Library/Session.o -o main

Run the executable file ./main
