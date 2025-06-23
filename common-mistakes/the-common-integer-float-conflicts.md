# This is about the common thing most of the people dont know much,
#### Let's take a value like this,
```cpp 
    float somevalue = 56.92;
    float someFavNum = 8574.389;
```
#### so, if i feed this value to another function as a float like this:
```cpp
    int someFunction(int age, int favouriteNumber){
        int luckynumber = age/4878 * favoriteNumber / age;
        cout << "Yourt lucky number is" << luckynumber << endl;
        return;
    }
    //So this function is required to provide an integer value for both of their params.
    int main(){
        someFunction(somevalue,someFavNum );
    }
```
#### Boom! you'll expect a value like an integer(ex:47.5433) but it will give you a integer not a floating point number!

### RULE: When you explicity assign a floating value for a integer, it will treatr it like an integer by ommiting the decimal part of it. 

## So, then > 47.5433 becomes > 47. 

# IMPORTANT! 
## Did you think that 47.5433 was rounded? Nipe! it was simply truncated
## Exactly what ```<cmath>``` library does when used with ```somevalue.trunc() ```