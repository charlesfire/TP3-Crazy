#ifndef CRAZY_NONCOPYABLE_H
#define CRAZY_NONCOPYABLE_H

namespace Crazy
{
    class NonCopyable
    {
        protected:
            NonCopyable() = default;
        private:
            NonCopyable(const NonCopyable& other) = delete;
            NonCopyable& operator=(const NonCopyable& other) = delete;
    };
}

#endif // CRAZY_NONCOPYABLE_H
