#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std; // this line of code will keep the namespace as std for in/outputs

int main()
{
  // printf("hello world\n");
  // std::cout << "Hello World!\n";
  // cout << "Hello World!\n";
  // cout << "Hello my name is Hung and I am " << 32 << " years old.\n";

  /*string input;
    cout << "Please enter your name: ";
    cin >> input;
    cout << input;*/

  // string name, age;
  // cout << "Please enter a name: ";
  // printf("Please enter your name: ");
  // cin >> name;
  // cout << "Please enter an age: ";
  // printf("Please enter your age: ");
  // cin >> age;
  // cout << "Hi my name is " << name << " and I am " << age << " years old.";

  // bool isCoding = true;
  // cout << "Am I coding? " << isCoding;

  // program to calculate the temperature from F -> C
  // double tempf;
  // double tempc;

  // // Ask the user
  // std::cout << "Enter the temperature in Fahrenheit.";
  // std::cin >> tempf;

  // tempc = (tempf - 32) / 1.8;

  // std::cout << "The temp is " << tempc << " degrees Celsius.\n";

  /*
    * Dog - Human year calculator
    int dog_age = 4;
    int early_years = 21;
    int later_years;
    int human_years;

    later_years = (dog_age - 2) * 4;

    human_years = early_years + later_years;

    std::cout << "My name is Arya. Ruff ruff, I am " << human_years << " years old in human years.\n";
    */

  /*
    * Quadratic calcuation
    double a;
    double b;
    double c;

    std::cout << "Enter a: \n";
    std::cin >> a;

    std::cout << "Enter b: \n";
    std::cin >> b;

    std::cout << "Enter c: \n";
    std::cin >> c;

    double root1;
    double root2;

    // std::cout << pow(2, 2);
    root1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
    root2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);

    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
    */

  /*
    *Calculating exchange rate
    double pesos;
    double reais;
    double soles;

    double dollars;

    cout << "Enter number of Colombian Pesos: \n";
    cin >> pesos;

    cout << "Enter the number of Brazilian Reais: \n";
    cin >> reais;

    cout << "Enter the number of Peruvian Soles: \n";
    cin >> soles;

    dollars = (.046 * pesos) + (.2 * reais) + (.3 * soles);

    cout << "US Dollars = $" << dollars << "\n"; */

  /*
    * Variable Test
    std::string message = "Game Over";
    cout << message;

    const double ssn = 556555111;

    double five = 5.5532;
    int convertedDouble = (int) five;

    cout << convertedDouble;*/

  /*
    * Conditionals
    *   double ph = 4.6;
  
    // Write the if, else if, else here:
    
    if (ph > 7) {
        std::cout << "Basic\n";
    } else if (ph < 7) {
        std::cout << "Acidic\n";
    }
    else {
        std::cout << "Neutral\n";
    }
    
    
      int number = 9;
  
  switch(number) {
    
    case 1 :
      std::cout << "Bulbusaur\n";
      break;
    case 2 :
      std::cout << "Ivysaur\n";
      break;
    case 3 :
      std::cout << "Venusaur\n";
      break;
    case 4 :
      std::cout << "Charmander\n";
      break;
    case 5 :
      std::cout << "Charmeleon\n";
      break;
    case 6 :
      std::cout << "Charizard\n";
      break;
    case 7 :
      std::cout << "Squirtle\n";
      break;
    case 8 :
      std::cout << "Wartortle\n";
      break;
    case 9 :
      std::cout << "Blastoise\n";
      break;
    default :
      std::cout << "Unknown\n";
      break;
    
    
    double weight;
    int planet;

    std::cout << "Please enter Mac's weight as an int.\n";
    std::cin >> weight;

    std::cout << "Enter the planet number (1 - 5) you are fighting on\n";
    std::cin >> planet;

    switch (planet) {
        case 1:
        std::cout << "Venus: " << weight * .78 << "!\n";
        break;
        case 2:
        std::cout << "Mars: " << weight * .39 << "!\n";
        break;
        case 3:
        std::cout << "Jupiter: " << weight * 2.65 << "!\n";
        break;
        case 4:
        std::cout << "Saturn: " << weight * 1.17 << "!\n";
        break;
        case 5:
        std::cout << "Uranus: " << weight * 1.05 << "!\n";
        break;
    }
    */

  /*
   *
   * Leap Year calculator
   * int year;
  int yearSize;

  std::cout << "Enter the year\n";
  std::cin >> year;


  yearSize = std::to_string(year).size();

  if (yearSize == 4) {
    if (year % 4 == 0) {
       if ((year % 100 == 0) && (year % 400 != 0)) {
         std::cout << "Not a leap year\n";
       }
       else if (year % 400 == 0) {
        std::cout << "It is a leap year\n";
      }
      else {
        std::cout << "It is a leap year\n";
      }
    } else {
        std::cout << "Not a leap year\n";
    }
  }
  */

  /*
    cout << "MAGIC 8-BALL GAME\n";
    srandom(time(NULL));

    int answer = std::rand() % 10;

    cout << "Answer is: " << answer << "\n";

    switch (answer) {
        case 0:
        cout << "It is very certain\n";
        break;
        case 1:
        cout << "It is decidedly so\n";
        break;
        case 2:
        cout << "Without a doubt\n";
        break;
        case 3:
        cout << "Yes - definitely\n";
        break;
        case 4:
        cout << "You may rely on it\n";
        break;
        case 5:
        cout << "Don't count on it\n";
        break;
        case 6:
        cout << "My reply is no\n";
        break;
        case 7:
        cout << "My sources say no\n";
        break;
        case 8:
        cout << "Signs point to yes\n";
        break;
        case 9:
        cout << "Very doubtful\n";
        break;
    }
    */

  /*
  // The magic starts here
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1;
    int answer2;
    int answer3;
    int answer4;

    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "Q1) When I'm dead, I want people to remember me as: \n";
    std::cout << "1) The Good \n";
    std::cout << "2) The Great \n";
    std::cout << "3) The Wise \n";
    std::cout << "4) The Bold \n";
    std::cout << "Your choice: ";
    std::cin >> answer1;

    switch (answer1) {
      case 1:
        hufflepuff++;
        break;
      case 2:
        slytherin++;
        break;
      case 3:
        ravenclaw++;
        break;
      case 4:
        gryffindor++;
        break;
      default:
        std::cout << "Invalid Input\n";
        break;
    }

    std::cout << "Q2) Dawn or Dusk?\n1) Dawn\n2) Dusk\n";
    std::cout << "Your choice: ";
    std::cin >> answer2;

    switch (answer2) {
      case 1:
        gryffindor++;
        ravenclaw++;
        break;
      case 2:
        hufflepuff++;
        slytherin++;
        break;
      default:
        std::cout << "Invalid Input\n";
    }

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
    std::cout << "1) The violin\n2) The trumpet\n3) The piano\n4) The drum\n";
    std::cout << "Your choice: ";
    std::cin >> answer3;

    switch (answer3) {
      case 1:
        slytherin++;
        break;
      case 2:
        hufflepuff++;
        break;
      case 3:
        ravenclaw++;
        break;
      case 4:
        gryffindor++;
        break;
      default:
        std::cout << "Invalid Input\n";
    } 

    std::cout << "Q4) Which road tempts you most?\n1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n";
    std::cout << "Your choice: ";
    std::cin >> answer4;

    switch (answer4) {
      case 1:
        hufflepuff++;
        break;
      case 2:
        slytherin++;
        break;
      case 3:
        gryffindor++;
        break;
      case 4:
        ravenclaw++;
        break;
      default:
        std::cout << "Invalid Input\n";
    }

    int max = 0;

    std::string house;

    if (gryffindor > max) {
      max = gryffindor;
      house = "Gryffindor";

    }
    if (hufflepuff > max) {
      max = hufflepuff;
      house = "Hufflepuff";
    }
    if (ravenclaw > max) {
      max = ravenclaw;
      house = "Ravenclaw";
    }
    if (slytherin > max) {

      max = slytherin;
      house = "Slytherin";
    }

    std::cout << house << "!\n";
  */
}

int dogYears()
{
  std::cout << "woof";
  return 0;
}