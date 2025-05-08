#pragma once

#include "Generator.h"
#include "ModelARX.h"
#include "RegulatorPID.h"
#include "SprzezenieZwrotne.h"

enum class tryb_sieciowy{
  serwer,
klient,
    lokalny
};

class UkladRegulacji
{
private:
    ModelARX model;
    RegulatorPID regulator;
    Generator generator;
    SprzezenieZwrotne petla;
    //tryb_sieciowy tryb=tryb_sieciowy::lokalny;
public:
    UkladRegulacji(const std::vector<double> &wspA,
                   const std::vector<double> &wspB,
                   int opoznienie,
                   bool stan,
                   double zakres,
                   double k,
                   double ti,
                   double td,
                   TypSygnalu typSygnalu,
                   double amplituda,
                   double okres,
                   double wypelnienie);
    double symuluj(int liczbaKrokow);
    ModelARX &getModel();
    RegulatorPID &getRegulator();
    Generator &getGenerator();
   // void Set_Tryb(tryb_sieciowy t){tryb =t;}
   // tryb_sieciowy Get_tryb(){return tryb;}
    double symuluj(int krok,double wartość,tryb_sieciowy t);
};
