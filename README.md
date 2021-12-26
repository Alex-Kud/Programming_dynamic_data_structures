# Programming_dynamic_data_structures
Laboratory work on an academic subject: "Programming dynamic data structures"
____
## Content
1. [Laboratory work 1](#l1)
1.1. [Creating an empty set](#l11)
1.2. [Checking for an empty set](#l12)
1.3. [Checking whether an element belongs to a set](#l13)
1.4. [Adding a new element to the set](#l14)
1.5. [The power of the set](#l15)
1.6. [Creating a set](#l16)
1.7. [Output of elements of the set](#l17)
1.8. [Deleting a set (clearing the memory occupied by the list)](#l18)
____
## Laboratory work 1. Creating functions that implement operations for creating work with sets
<a name="l1"></a> 
A singly connected list of integer values is used to represent the set. OOP is not applied due to restrictions on the terms of reference

| File name               | File Contents |
| ------------------------|----------------------|
| Lab1_12_Kudashov.cpp    | Main program |
| SetLab1_12_Kudashov.h   | Function set header file |
| SetLab1_12_Kudashov.cpp | Function set implementation file |

### Creating an empty set - `Node* creatingAnEmptySet()`
<a name="l11"></a> 
*Input parameters:* None. 
*Output parameters:* a pointer to the first element of the list, equal to NULL.
### Checking for an empty set - `bool emptySet(Node* first)`
<a name="l12"></a> 
*Input parameters:* a pointer to the first item in the list.
*Output parameters:* Boolean value.
### Checking whether an element belongs to a set - `bool checkingOfExistence(Node* first, int checking_value)`
<a name="l13"></a> 
*Input parameters:* a pointer to the first element of the list, the value of the element.
*Output parameters:* Boolean value.
### Adding a new element to the set - `Node* add(Node*& first, int adding_value)`
<a name="l14"></a> 
*Input parameters:* a pointer to the first element of the list, a value to be added to the list. 
*Output parameters:* a pointer to the first element of the result list.
*Restriction:* Adding an item to the top of the list.
### The power of the set - `int powerOfTheSet (Node* first)`
<a name="l15"></a> 
*Input parameters:* a pointer to the first item in the list. 
*Output parameters:* integer value.
### Creating a set - `Node* creatingSet(int quantity, int min, int max, int k)`
<a name="l16"></a> 
*Input parameters:* the number of elements, the range of acceptable values (from min to max). k is the multiplicity coefficient for checking the satisfaction of the condition.
*Output parameters:* a pointer to the first element of the result list. Generation of values by a random number sensor. 
*Requirement:* check the possibility of creating a set with the specified parameters.
### Output of elements of the set - `string printSet(Node* first, string separator)`
<a name="l17"></a> 
*Input parameters:* a pointer to the first element of the list, a separator character. 
*Output parameters:* a string containing elements of a set separated by a separator character. 
*Requirements:* there should not be a separator at the end of the result line
### Deleting a set (clearing the memory occupied by the list) - `Node* deleteSet(Node*& first)`
<a name="l18"></a> 
*Input parameters:* a pointer to the first item in the list.
*Output parameters:* a pointer to the first element of the list, equal to NULL.
____
[:arrow_up:Content](#Content)
____
