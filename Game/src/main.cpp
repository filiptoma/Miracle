#include <Miracle.h>

class Sandbox : public Miracle::Application
{
public:
    Sandbox() {}
    ~Sandbox() {}
};

Miracle::Application* Miracle::CreateApplication()
{
    return new Sandbox();
}
