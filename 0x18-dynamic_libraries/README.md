cc -FPIC -shared -o 100-operations.so 100-operations.c # to solve the task 3
   
gcc -c -fPIC *.c   # Compile the source files into position-independent code (PIC) # to solve the first Task
gcc -shared -o libyourlibrary.so *.o   # Create the dynamic library  # to solve the first Task
