#include <iostream>
#include <string>

using namespace std;

class Person{
  public:
  string name;
  int age;
  string favoriteHobby;
  string job;
  int happinessLevel;
  string friends;
  string hairColor;

};

void print(Person person){
  cout <<  person.name << " is " << person.age << " years old" << endl;

  cout << person.name << " likes to " << person.favoriteHobby << " and they are currently working as a " << person.job << endl;

  cout << person.name << " is " << person.happinessLevel << "/10 in terms of happiness" << endl;

  cout << person.name << " is friends with " << person.friends << endl;

  cout << person.name << " has " << person.hairColor << " hair" << endl;
}

int main() {
  Person myPerson;
  myPerson.name = "Harry";
  myPerson.age = 23;
  myPerson.favoriteHobby = "duck collecting";
  myPerson.job = "professional defenestrater";
  myPerson.happinessLevel = 10;
  myPerson.friends = "Daniel";
  myPerson.hairColor = "red";
  cout << "Meet " << myPerson.name << " " << endl;
  print(myPerson);
}