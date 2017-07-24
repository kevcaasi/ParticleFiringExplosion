#include "Swarm.h"

Swarm::Swarm(): lastTime(0)
{
    //ctor
    m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm()
{
    //dtor
    delete [] m_pParticles;
}

void Swarm::update(int elapsed){

    int interval = elapsed - lastTime;

    for(int i = 0; i < Swarm::NPARTICLES; i++){
        m_pParticles[i].update(interval);
    }

    lastTime = elapsed;
}
