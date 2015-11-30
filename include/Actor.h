#ifndef CRAZY_ACTOR_H
#define CRAZY_ACTOR_H

#include <SFML/Graphics/Drawable.hpp>

namespace Crazy
{
    class Actor : public sf::Drawable
    {
        public:
            Actor();
            ~Actor();
        protected:
            sf::Vector2f position;
    };
} /* End of namespace Crazy */

#endif // CRAZY_ACTOR_H
