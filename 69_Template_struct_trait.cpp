/*

let's say we want to associate animal names (Dog, Cat, Bird) with their sounds. We can use specialization with Traits<T>.

*/

#include <iostream>
#include <string>

using namespace std;

// Forward declaration
template <typename T>
struct Traits;

// Class definitions
class Dog {};
class Cat {};
class Bird {};

// Specializing Traits for different classes
template <>
struct Traits<Dog> 
{
    static string sound() { return "Bark"; }
};

template <>
struct Traits<Cat> 
{
    static string sound() { return "Meow"; }
};

template <>
struct Traits<Bird> 
{
    static string sound() { return "Chirp"; }
};

int main() 
{
    cout << "Dog: " << Traits<Dog>::sound() << endl;
    cout << "Cat: " << Traits<Cat>::sound() << endl;
    cout << "Bird: " << Traits<Bird>::sound() << endl;
    return 0;
}
