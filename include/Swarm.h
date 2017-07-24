#ifndef SWARM_H
#define SWARM_H
#include "Particle.h"

class Swarm
{
    public:
        Swarm();
        virtual ~Swarm();
        void update(int elapsed);
        const static int NPARTICLES = 5000;
        const Particle * const getParticles(){ return m_pParticles; };

    protected:

    private:
        Particle * m_pParticles;
        int lastTime;
};

#endif // SWARM_H
