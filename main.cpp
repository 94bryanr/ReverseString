#include<iostream>

using std::endl;
using std::cout;

void reverse(char* string){
    // Get a pointer to the first and last characters.
    char* end = string;
    while(*(end+1) != '\0')
        end++;
    char* start = string;
    
    // Switch characters in the string starting from the outside and moving in.
    while(end > start){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(int argc, char* argv[]){
    char* testString = new char[6];
    memcpy(testString, "Hello", 5);
    reverse(testString);
    cout << testString << endl;
    delete(testString);
}