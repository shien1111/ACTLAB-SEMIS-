#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> dictionary;

    dictionary["apple"] = "A fruit that is round, typically red, green, or yellow.";
    dictionary["banana"] = "A long, curved fruit with a yellow skin.";
    dictionary["cherry"] = "A small, round fruit, typically red or black.";
    dictionary["dog"] = "A domesticated carnivorous mammal.";
    dictionary["elephant"] = "A large herbivorous mammal with a trunk.";
    dictionary["fish"] = "A cold-blooded vertebrate animal that lives in water.";
    dictionary["grape"] = "A small, round fruit that grows in clusters.";
    dictionary["house"] = "A building for human habitation.";
    dictionary["ice"] = "Frozen water, a brittle, transparent crystalline solid.";
    dictionary["jungle"] = "A dense forest in a tropical area.";
    dictionary["kiwi"] = "A small, fuzzy fruit with green flesh.";
    dictionary["lion"] = "A large, carnivorous feline animal.";
    dictionary["moon"] = "The natural satellite of the Earth.";
    dictionary["night"] = "The period of darkness in each 24-hour cycle.";
    dictionary["octopus"] = "A sea creature with eight arms.";
    dictionary["pear"] = "A sweet, juicy fruit with a rounded base and tapering top.";
    dictionary["queen"] = "The female ruler of a country or state.";
    dictionary["river"] = "A large, flowing body of water.";
    dictionary["sun"] = "The star that provides light and warmth to Earth.";
    dictionary["tiger"] = "A large wild cat with orange fur and black stripes.";
    dictionary["umbrella"] = "A device used for protection against rain.";
    dictionary["vampire"] = "A creature that feeds on blood.";
    dictionary["water"] = "A clear, colorless, odorless liquid essential for life.";
    dictionary["xylophone"] = "A musical instrument with wooden bars.";
    dictionary["yellow"] = "The color of ripe bananas or lemons.";
    dictionary["zebra"] = "A wild horse with black and white stripes.";

    std::string word;
    std::cout << "Enter a word to search: ";
    std::cin >> word;

    if (dictionary.find(word) != dictionary.end()) {
        std::cout << word << ": " << dictionary[word] << std::endl;
    } else {
        std::cout << "Word not found!" << std::endl;
    }

    return 0;
}
