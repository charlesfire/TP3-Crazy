#ifndef CRAZY_SINGLETON_H
#define CRAZY_SINGLETON_H

#include "NonCopyable.h"

namespace Crazy
{
    template<class T>
    class Singleton : private NonCopyable
    {
        public:
            static T& GetInstance()
            {
                static T instance;
                return instance;
            }
        protected:
            Singleton() = default;
    };
} /* End of namespace Crazy */

#endif // CRAZY_SINGLETON_H
