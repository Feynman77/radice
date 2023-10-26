#ifndef PARTICLETYPE_H
#define PARTICLETYPE_H
class ParticleType
{
private:
    const char* fName_;
    const double fMass_;
    const int fCharge_;

public:
    const char* GetName() ;
    const double GetMass() ;
    const int GetCharge() ;
    void print();
    ParticleType(char *fName, double fMass, int fCharge);
} ;

#endif