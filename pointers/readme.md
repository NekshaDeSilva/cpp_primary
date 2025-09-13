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