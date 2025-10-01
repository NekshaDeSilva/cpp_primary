### I have seen this piece of code just now, please note it down.
```cpp
int main(){
    int *somevalue_address, somevalue = 4;
    somevalue_address = &somevalue;
    
    cout << somevalue_address; //Points out the memory address.

    cout << *somevalue_address; // Prints out the value located in that address.

}
```

### point this out:

#### int *somevalue_address, somevalue = 4; 
### THIS MEANS WE HAVE DONE TWO WORKS AT ONCE. THAT MEANS we have initialized the *somevalue* and also created the pointer *somevalue_address* without initializing which makes it's value *0* untill value or a memory address is assigned.