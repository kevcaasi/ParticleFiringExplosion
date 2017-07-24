#ifndef SCREEN_H
#define SCREEN_H
#include <SDL.h>
#include <string.h> //used for memset function

    class Screen
    {
        public:
            Screen();
            virtual ~Screen();
            bool init();
            void update();
            void boxBlur();
            void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
            void close();
            bool processEvents();
            const static int SCREEN_WIDTH = 800;
            const static int SCREEN_HEIGHT = 600;

        protected:

        private:
            SDL_Window *m_window;
            SDL_Renderer *m_renderer;
            SDL_Texture *m_texture;
            Uint32 *m_buffer1;
            Uint32 *m_buffer2;
    };

#endif // SCREEN_H
