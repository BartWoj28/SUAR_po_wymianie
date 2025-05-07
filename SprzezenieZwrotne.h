#pragma once

#include "Generator.h"
#include "ModelARX.h"
#include "RegulatorPID.h"

class SprzezenieZwrotne
{
private:
    ModelARX *model;
    RegulatorPID *regulator;
    Generator *generator;
    double poprzedniaWartosc;

public:
    SprzezenieZwrotne(ModelARX *model, RegulatorPID *regulator, Generator *generator);
    double symuluj(int krok);
    double symuluj_klient(double regulacja);
    double symuluj_serwer(int krok, double wyjście);
};
