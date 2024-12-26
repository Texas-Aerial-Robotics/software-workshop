# pokedex.py

# Using a match/case, implement a Pokedex that tells the user the name
# (and description, if you'd like!) of the Gen 1 starters and their
# evolutions.

# Research: https://gamerant.com/pokemon-best-starter-trio-ranked/


# NOTE: Now unfortunately, match/case statements are not a thing until Python 3.10 :/,
# so if you are on a version below, do what you have to do.

GenerationOnePokemon = ["Bulbasaur", "Charmander", "Squirtle"]

# Have user select pokemon starter
select  = int(input("Select a Gen 1 Starter Pokemon : \n0 = Bulbasaur \n1 = Charmander \n2 = Squirtle\n"))

match select:
    case 0:
        print(f"Selected Pokemon : {GenerationOnePokemon[select]}!"
              "\nType: Grass"
              "\nEvolutions: Ivysaur (level 16) -> Venusaur (level 32)")
    case 1:
        print(f"Selected Pokemon : {GenerationOnePokemon[select]}!"
              "\nType: Fire"
              "\nEvolutions: Charmeleon (level 16) -> Charizard (level 36)")
    case 2:
        print(f"Selected Pokemon : {GenerationOnePokemon[select]}!"
              "\nType: Water"
              "\nEvolutions: Wartortle (level 16) -> Blastoise (level 36)")
