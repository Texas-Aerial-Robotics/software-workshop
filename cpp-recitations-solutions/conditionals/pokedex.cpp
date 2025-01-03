#include <iostream>
#include <vector>
using namespace std;

int main() {
  

  // Using a case/switch, implement a Pokedex that tells the user the name
  // (and description, if you'd like!) of the Gen 1 starters and their
  // evolutions.

  vector<string> Gen1Pokemon = {"Bulbasaur!", "Charmander!", "Squirtle!"};

  int select;

  cout << "Select a Gen 1 Starter Pokemon\n" << "0 = Bulbasaur\n1 = Charmander\n2 = Squirtle\n : ";
  cin >> select;

  string output;

  switch (select)
  {
  case 0:
    output = "Selected Pokemon : " + Gen1Pokemon[0] + "\nType : Grass" + "\nEvolutions: Ivysaur (level 16) -> Venusaur (level 32)";
    break;
  case 1:
    output = "Selected Pokemon : " + Gen1Pokemon[1] + "\nType : Fire" + "\nEvolutions: Charmeleon (level 16) -> Charizard (level 36)";
    break;
  case 2:
    output = "Selected Pokemon : " + Gen1Pokemon[2] + "\nType : Water" + "\nEvolutions: Wartortle (level 16) -> Blastoise (level 36)";
    break;
  default:
    cout << "Seems you've made an erroneous input";
    break;
  }  

  cout << endl <<output;
  return 0;
}