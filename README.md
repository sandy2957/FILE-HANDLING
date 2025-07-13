# FILE-HANDLING                             

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: T.SANTHIYADEVI

*INTERN ID*: CT04DH427

*DOMAIN*: C LANGUAGE

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTHOSH

As part of my internship with CodTech, I worked on Task 1, which involved demonstrating file handling operations in the C programming language. The objective of this task was to develop a single C program that can create, read, write, and append data to a file. I found this task particularly engaging because file handling is an essential concept in C programming and is used in almost all real-world applications that require data storage and retrieval.

To begin, I studied the basic file operations supported by C, including the fopen(), fclose(), fprintf(), fscanf(), fgets(), and fputs() functions. Understanding the various file modes such as "r" (read), "w" (write), "a" (append), and their combinations like "r+", "w+", and "a+" helped me decide how to perform different operations based on the task requirements.

I wrote a program that performs the following operations step-by-step:

1. Creating and Writing to a File:
I used fopen() with the "w" mode to create a new file named myfile.txt. If the file already exists, this mode replaces its contents. Using fprintf(), I wrote a sample message into the file. This simulated data entry from a user or another system component.


2. Appending to the File:
To demonstrate the append functionality, I reopened the file in "a" mode and added another line using fprintf(). This operation confirmed that I could add data to an existing file without deleting the previous contents.


3. Reading from the File:
I then opened the file in "r" mode to read its contents. Using fgets(), I read and printed each line to the console. This verified that both the initial write and subsequent append were successful.



I added appropriate error handling using if(file == NULL) to ensure the program doesn't crash in case the file cannot be opened or created. This is a good programming practice and ensures robustness.

The most interesting part of this task was testing the changes and actually seeing the file contents update in real-time after each operation. It helped me understand how data is stored persistently on disk and how a C program can interact with the file system.

To make the program more user-friendly, I added simple printf() statements to indicate the success or failure of each operation. I also ensured that the code was properly commented to make it easy to understand for others or for me to revisit later.

Overall, this task greatly improved my understanding of file handling in C. It gave me hands-on experience in writing practical code that can store and retrieve data efficiently. I now feel more confident in working with file I/O operations and look forward to implementing similar features in more complex projects in the future.
