#pragma once

#include "Core.h"

namespace Miracle {

    class Application
    {
    public:
        Application();
        ~Application();

        void Run();
    };

    // this will define the client (library consumer)
    Application* CreateApplication();

}
