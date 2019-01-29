#ifndef AIC18_CLIENT_CPP_HEROCONSTANTS_H
#define AIC18_CLIENT_CPP_HEROCONSTANTS_H

#include "Enumerations.h"
#include <vector>

class HeroConstants {
public:
    HeroConstants() = default;
    ~HeroConstants();

    HeroConstants(const HeroConstants&) = default;
    HeroConstants& operator=(const HeroConstants&) = default;

    HeroName& name();
    HeroName name() const;

    void set_abilityNames(const std::vector<AbilityName> &abilityName);
    const std::vector<AbilityName> &get_abilityNames() const;


    int& maxHP();
    int maxHP() const;


    int& moveAPCost();
    int moveAPCost() const;

    int& remainingRespawnTime();
    int remainingRespawnTime() const;

private:

    HeroName _name;

    std::vector<AbilityName> _abilityNames;

    int _maxHP;

    int _moveAPCost;

    int _remainingRespawnTime; // TODO "SEKALL"
};


#endif //AIC18_CLIENT_CPP_HEROCONSTANTS_H