#include "processing.h"
// You can add additional STL headers needed here, such as <algortithm>
#include <limits>

//3) TASK Implement function according to specification in header file
std::vector<Person> oldestPerson(std::vector<Person> crowd){
std::vector<Person> oldest;
    unsigned int maxAge = 0;
    for (auto& person : crowd) {
        if (person.getAge() > maxAge) {
            maxAge = person.getAge();
            oldest.clear();
        }
        if (person.getAge() == maxAge) {
        oldest.push_back(person);
        }
    }
return oldest;
}


//4) TASK Implement function according to specification in header file
std::vector<Person> eligibleForVaccine(std::vector<Person> crowd, unsigned int ageCutoff){
std::vector<Person> eligible;
for (auto& person : crowd) {
    if (person.getAge() >= ageCutoff && !person.getVaccinatedStatus() ) {
        eligible.push_back(person);
    }
}
return eligible;
}
