//Create anew handle type for the string type 
typedef void* MY_STRING; // MY_STRING will become the type for any handle

//Precondition: None
//Postcondition: Allocate space for a string object that reepresents the empty
// string. The string will have cpacity 7 and size 0 by default. A copy of 
// the address of the opaque object will be returned on success and NULL on 
// failure. 

MY_STRING my_string_init_default(void); 

//Precondition: phMy_string holds the address of a vaild handle to a MY_STRING
//object
//Postcondition: The memory used for the MY_STRING object has be reclaimed by 
// the system and the handle referred to by the pointer phMy_string has been 
// set to NULL.
void my_string_destroy(MY_STRING* phMy_string); 

//Precondition: c_string is a valid null terminated c-string 
//Postcondition: Allocate space for a string object that represents a string
// with the same value as the given c-string. The cpacity of the string 
// object will be set to be one greater than is required to hold the string.
// As an example, the string "The" would set capacity at 4 instead of 3. A
// copy of the address of the opaque object will be returned on success and 
// NULL on failure
MY_STRING my_string_init_c_string(const char* c_string); 

//Precondition: hMy_string is the handle of a valid My_string object
//Postcondition: Returns a copy of the integer value of the objects capacity 
int my_string_get_capacity(My_STRING hMy_string); 

//Precondition: hMy_string is the handle of a valid My_string object
//Postcondition: Returns a copy of the integer value of the objects size
int my_string_get_size(MY_STRING hMy_string); 

//Preconditon: hLeft_string and hRight_string are valid My_string objects. 
//Postcondition: returns as integer less than zero if the string represented
// by hLeft_string is lexicographically smaller than hRight string. If
// one string is a prefix of the other string then the shorter string is
// considered to be smaller one. (app is less than apple). Returns 
// 0 if the strings are the same and returns a number greater than zero
// if the string represented by hLeft_string is bigger than hRight_string. 
int my_string_compare(MY_STRING hLeft_string, MY_STRING hRight_string); 
