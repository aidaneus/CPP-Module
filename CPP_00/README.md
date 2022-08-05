![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.001.png)

C++ - Module 00

Namespace, class, member functions, stdio stream, initialization lists, static, const, and lots of basic stuff

*Summary: This document contains the subject for Module 00 of the C++ modules.*

**Chapter II**

**Chapter I General rules**

- Any function implemented in a header (except in the case of templates), and any unprotected header, means 0 to the exercise.
- Every output goes to the standard output, and will be ended by a newline, unless specified otherwise.
- The imposed filenames must be followed to the letter, as well as class names, func- tion names and method names.
- Remember: You are coding in C++now, not in Canymore. Therefore:
- The following functions are FORBIDDEN, and their use will be punished by a 0, no questions asked: \*alloc, \*printf and free.
- You are allowed to use basically everything in the standard library. HOW- EVER, it would be smart to try and use the C++-ish versions of the functions you are used to in C, instead of just keeping to what you know, this is a new language after all. And NO, you are not allowed to use the STL until you actually are supposed to (that is, until module 08). That means no vec- tors/lists/maps/etc... or anything that requires an include <algorithm> until then.
- Actually, the use of any explicitly forbidden function or mechanic will be punished by a 0, no questions asked.
- Also note that unless otherwise stated, the C++keywords "using namespace" and "friend" are forbidden. Their use will be punished by a -42, no questions asked.
- Files associated with a class will always be ClassName.hpp and ClassName.cpp, unless specified otherwise.
- Turn-in directories are ex00/, ex01/, ..., exn/.
- You must read the examples thoroughly. They can contain requirements that are not obvious in the exercise’s description. If something seems ambiguous, you don’t understand C++enough.
- Since you are allowed to use the C++tools you learned about since the beginning, you are not allowed to use any external library. And before you ask, that also means

Namespace, class, member functions, stdio stream, initialization lists, static, const, and C++ - Module 00 lots of basic stuff![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.002.png)

no C++11and derivates, nor Boost or anything your awesomely skilled friend told you C++can’t exist without.

- You may be required to turn in an important number of classes. This can seem tedious, unless you’re able to script your favorite text editor.
- Read each exercise FULLY before starting it! Really, do it.
- The compiler to use is clang++.
- Your code has to be compiled with the following flags : -Wall -Wextra -Werror.
- Each of your includes must be able to be included independently from others. Includes must contains every other includes they are depending on, obviously.
- In case you’re wondering, no coding style is enforced during in C++. You can use any style you like, no restrictions. But remember that a code your peer-evaluator can’t read is a code she or he can’t grade.
- Important stuff now : You will NOT be graded by a program, unless explictly stated in the subject. Therefore, you are afforded a certain amount of freedom in how you choose to do the exercises. However, be mindful of the constraints of each exercise, and DO NOT be lazy, you would miss a LOT of what they have to offer !
- It’s not a problem to have some extraneous files in what you turn in, you may choose to separate your code in more files than what’s asked of you. Feel free, as long as the result is not graded by a program.
- Even if the subject of an exercise is short, it’s worth spending some time on it to be absolutely sure you understand what’s expected of you, and that you did it in the best possible way.
- By Odin, by Thor! Use your brain!!!

**Contents**

[**I General rules](#_page1_x72.00_y72.00) **1 [II Exercise 00: Megaphone](#_page4_x72.00_y87.06) 4 [III Exercise 01: My Awesome PhoneBook](#_page5_x72.00_y87.06) 5**

[**IV Exercise 02: The Job Of Your Dreams](#_page7_x72.00_y87.06) **7**

**Exercise 00: Megaphone**



|![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.003.png)|Exercise : 00|
| - | - |
|Exercise 00: Megaphone|
|Turn-in directory : *ex*00*/*|
|Files to turn in : Makefile, megaphone.cpp|
|Forbidden functions : None|
Just to be sure that everybody is awake, write a program that has the following behavior:![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.004.png)

(Use C++ style to interact with stdin!)



|$>./megaphone "shhhhh... I think the students are asleep..."|
| - |
|SHHHHH... I THINK THE STUDENTS ARE ASLEEP...|
|$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."|
|DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.|
|$>./megaphone|
|* LOUD AND UNBEARABLE FEEDBACK NOISE \*|
|$>|

4
**Chapter III**

**Exercise 01: My Awesome PhoneBook**



|![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.005.png)|Exercise : 01|
| - | - |
|Exercise 01: My Awesome PhoneBook|
|Turn-in directory : *ex*01*/*|
|Files to turn in : Makefile, \*.cpp, \*.{h, hpp}|
|Forbidden functions : None|
Welcome to the 80s and its unbelievable technology! Write a program that behaves like a crappy awesome phonebook software. Please take some time to give your exe- cutable a relevant name. When the program starts, the user is prompted for input: you should accept the ADDcommand, the SEARCHcommand or the EXITcommand. Any other input is discarded.

The program starts empty (no contacts), doesn’t use any dynamic allocation, and can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact.

[http://www.cplusplus.com/reference/string/string/ and of course ](http://www.cplusplus.com/reference/string/string/)![](Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.006.png)<http://www.cplusplus.com/reference/iomanip/>

5

Namespace, class, member functions, stdio stream, initialization lists, static, const, and C++ - Module 00 lots of basic stuff![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.002.png)

- If the command is EXIT:
  - The program quits and the contacts are lost forever.
- Else if the command is ADD:
- The program will prompt the user to input a new contact’s information, one field at a time, until every field is accounted for.
- A contact is definedby the following fields: first name, last name, nickname, phone number,darkest secret.
- The PhoneBook must be represented as as an instance of a class in your code it must contain an array of contact.
- A contact MUST be represented as an instance of a class in your code. You’re free to design the class as you like, but the peer evaluation will check the consistency of your choices. Go look at today’s videos again if you don’t understand what I mean (and I don’t mean "use everything" before you ask).
- Else if the command is SEARCH:
- The program will display a list of the available non-empty contacts in 4 columns: index, first name, last name and nickname.
- Each column must be 10 chars wide, right aligned and separated by a ’|’ character. Any output longer than the columns’ width is truncated and the last displayable character is replaced by a dot (’.’).
- Then the program will prompt again for the index of the desired entry and displays the contact’s information, one field per line. If the input makes no sense, define a relevant behavior.
- Else the input is discarded.

When a command has been correctly executed, the program waits for another ADDor SEARCHcommand until an EXITcommand.

6
**Chapter vii****

**Exercise 02: The Job Of Your Dreams**



|![](img/Aspose.Words.e5708197-5c5e-417e-aa26-0f1eafd7c043.005.png)|Exercise : 02|
| - | - |
|Exercise 02: The Job Of Your Dreams|
|Turn-in directory : *ex*02*/*|
|Files to turn in : Makefile, Account.cpp, Account.hpp, tests.cpp|
|Forbidden functions : None|
It’s your first day of work at GlobalBanksters United. You successfully passed the hiring tests for the programmers’ team thanks to a few tricks with Microsoft Office

a friend showed you. But you know that it was your swift installation of Adobe Reader that blew your recruiter’s mind. This gave you the little edge needed to beat your oppo- nents for this job.

Anyway, you made it and your boss gave you your first task. You need to recode one missing source file because something went wrong. Account.cpp is missing and they use USB file sharing and not git.

At this point, it will be legitimate to quit this place however for the sake of this exercise, you will stay.

The Account.hpp file is present and a quick compilation of tests.cpp confirms that an Account.cpp file is missing. There’s also an old output log that seems to contain the matching output.

So you need to create a Account.cpp fileand quickly write some lines of pure awesome C++and after a couple of failed compilations, your program will compiles and passes the tests with a perfect output, except for the timestamps differences. Damn you’re good!
7
