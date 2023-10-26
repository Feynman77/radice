#include "particletype.h"
#include "iostream"

const char* ParticleType::GetName() { return fName_; };
const double ParticleType::GetMass() { return fMass_; };
const int ParticleType::GetCharge() { return fCharge_; };
void ParticleType::print()
{
    std::cout << "The name is: " << fName_ << '\n';
    std::cout << "The mass is: " << fMass_ << '\n';
    std::cout << "The charge is: " << fCharge_ << '\n';
}
ParticleType::ParticleType(char *fName, double fMass, int fCharge) : fName_(fName),
                                                                     fMass_(fMass),
                                                                     fCharge_(fCharge) {}