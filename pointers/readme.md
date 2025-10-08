# Pointers

Cpp pointers are a some sort of variable that remebers the memory adddresses of another data types.

## C++ language Memory allocation for each data type.

### Here's the list:

1. Integers (int) : typically this uses 4 bytes
2. Long long : 8 bytes
3. Double: 8 Bytes
4. long double: 8, 16 bytes
5. Char: 1 Byte
6. Bool: 1 or 0, 1 Byteb
A pointer is an address to a a variabe and it shows not the value of the varaible but the address where it as saved or located in.


Prerequisities : 
# In programming, especialyu in C++,  you must know that the SIZE is not equal to the word LENGTH is any tems. 
## Hence, BeCAUSE, IN PROGRAMMING,
```c++
int main(){
    int somevalue = 998;
    int *pointer = &somevalue; // Added the * mark because it was thje first-declare of that pointer.
    

}
```
### In the above code snippet. the length of the ```somevalue``` is 9. But the size of the integer can be far more big.
### In the above example, the length of the pointer ```pointer``` can depend on the size of the pointer address and it is not an absolute or a fixed value. BUT, the SIZE of the pointer is always 8 Bit on 64-bit operating systems and 4-bits on 32 bit operating systems.

## What is ```dereferencing```
Dereferencing in opinters is like when pointers are lke the map; the pathway, dereferencing is like asking the map to go to the location and "tell me the value of that thing where the actual location is in."


# There are twqo types of memory in a CPP program  they arwe


##   Heap memeory 
##   Stack Mmeory

Heap memory is the memory which is managed automatically by the cpu and it automatically deletes and adsds values as necessory, and it usualy changes its own addresssses when not in use or when the value changes.

The heap memory can bve expressed via this particular connection.
```cpp
int functionh(){
    int somevalue = 12;
    int* ptr  =&somevalue;

    somevalue++;
    return somevalue;
   // AFTER THE THE RETURN IS SUCCESSFUL, the cpu already immideatly deletes or replaces that memory address where that partticular variable was located, it automatically deletes, when the function is retuned.
   
   //Hence, the memory address becomes useless or invalid when the function returns or becomes over.

}
```


HEAP MEMROY, is kinda different.
it is something that we can allocate in our own demand. and this operates with the syntax ```new and malloc``` and the speciallity of this is, we can allocate a memory space for a variable and keep it ads is, even when the function or the program stops execting, that means it keeps the stored memory in the RAM for util computer turns off. That means it carries with certain circumancetances than the **stack memory**

1. thre heap memory consumes more stroage data than an average, cpu controlled, variable./
2. And it cxaries with a risk of slowing down th prgram if the variables newly created are not handledd properly. and also
3. The varibsales or memory created by that should be either changed or maintained with full clarity that means it should be deleted or modified in order to get use of it.



