#ifndef TEXTUREMANAGER_HPP
#define TEXTUREMANAGER_HPP

#include <map>
#include <string>
#include "Singleton.h"

namespace sf
{
    class Texture;
}

namespace Crazy
{
    class TextureManager final : public Singleton<TextureManager>
    {
        public:
            TextureManager() = default;
            virtual ~TextureManager();
            sf::Texture& GetTexture(const std::string& link);
            bool DeleteTexture(const std::string& link);
            void DeleteAll();
        private:
            std::map<std::string, sf::Texture*> m_textureList;
            inline bool SearchTexture(const std::string& link);
    };
}

#endif // TEXTUREMANAGER_HPP
