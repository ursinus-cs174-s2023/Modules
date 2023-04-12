#include <iterator>
#include <vector>
#include <map>
#include <string>
#include <stdio.h>

using namespace std;

class Location {
    public:
        string lore;
        vector<string> arrows;

        Location(string lore, vector<string> arrows) {
            this->lore = lore;
            this->arrows = arrows;
        }
};


map<string, Location> makeAdventure() {
    map<string, Location> adventure;

    adventure.insert(pair<string, Location>(
    // Key
    "Office (START)", 
    
    // Value
    Location(
        "The place where you frantically try to get everything ready for class.",  
        vector<string>{"Bathroom", "Kitchen"}))
    );

    // TODO: Fill this in
    adventure.insert(pair<string, Location>(
    // Key
    "Kitchen", 
    
    // Value
    Location(
        "The place where you heat up frozen food.",  
        vector<string>{"Office (START)", "Upstairs Bedroom"}))
    );

    return adventure;
}

int main() {
    // Keys: String names of the rooms
    // Values: vector<string> {Information about place, arrow 1, arrow 2, ...}
    
    map<string, Location> adventure = makeAdventure();

    map<string, Location>::iterator it;
    for (it = adventure.begin(); it != adventure.end(); it++) {
        printf("%s:", it->first.c_str());
        Location location = it->second;
        printf("%s,", location.lore.c_str());
        for (size_t i = 0; i < location.arrows.size(); i++) {
            printf("%s|", location.arrows[i].c_str());
        }
    }
}