#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

enum PkNature {
    ADAMANT,
    BASHFUL,
    BOLD,
    BRAVE,
    CALM,
    CAREFUL,
    DOCILE,
    GENTLE,
    HARDY,
    HASTY,
    IMPISH,
    JOLLY,
    LAX,
    LONELY,
    MILD,
    MODEST,
    NAIVE,
    NAUGHTY,
    QUIET,
    QUIRKY,
    RASH,
    RELAXED,
    SASSY,
    SERIOUS,
    TIMID
};

enum PkStatus {
    FINE,
    SLEEP,
    POISON,
    TOXIC,
    PARALYSIS,
    FROZEN,
    BURN
};

class Pokemon {
public:
    Pokemon();

private:
    PkNature nature;
    PkStatus status;
    std::string name;
    std::string nickname;
    

};

#endif // POKEMON_HPP
