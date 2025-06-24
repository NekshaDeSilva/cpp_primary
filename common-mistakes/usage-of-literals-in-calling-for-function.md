# Literals? What are they?
### Literals are values that stand alone in a computer program.
### Examples for literals

#### String literals: ```"white" , "snowy", "7387328", "the paradox"```
#### Integer literals: ```8, 839, 72, -292, -991```
#### Floating point literals: ```93.339, 38338.83, -8343.8389```
#### Character literals: ```'A', 'b', '8', '-'```
##### NOTE: THINGS LIKE ```'-2', '-3', '+4'``` ARE NOT CONSIDERED AS LITERALS BECAUSE THEY HOLD MINUS/POSITIVE SIGN AND A NUMBER, so they must be away from a single quotea and MUST be declared as an integer.

#### Boolean literals: ```true, false```

## And there are some very imporant things to consider when showing literals.
### RULE: NEVER USE LITERALS WHEN CALLING FOR NON-CONST REFERENCE FUNCTIONS

```cpp
    void func(int &somevalue = 1){
        cout << somevalue*10/2 << endl;
    }
    int main(){
        func(45); //THIS IS WRONG
    }

   
```

### THE ABOVE IS NOT WORKING.
## WORKING METHOD: USE THE VALUE IN A VARIABLE.
```cpp
 int main(){
        int valuetobetransferred = 100;
        func(valuetobetranferred); //WORKING BECUASE THE FUNCTION ONLY ACCEPTS VARIABLES WHEN  IT'S A NON-CONST REFERENCE FUNCTION
    }
```