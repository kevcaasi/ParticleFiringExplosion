#ifndef PARTICLE_H
#define PARTICLE_H


class Particle
{
    public:
        Particle();
        virtual ~Particle();
        void update(int interval);
        double m_x;
        double m_y;

    protected:

    private:
        double m_speed;
        double m_direction;
        void init();

};

#endif // PARTICLE_H
