#pragma once

extern Miracle::Application* Miracle::CreateApplication();

int main(int argc, char** argv)
{
    Miracle::Log::Init();
    MI_CORE_TRACE("This is a trace level message.");
    int a = 5;
    MI_INFO("This is a info level message with variable = {0}.", a);
    MI_CORE_WARN("This is a warning!");
    MI_ERROR("Oh no! The client is dying!");
    MI_CORE_CRITICAL("rip. client ded.");

    auto app = Miracle::CreateApplication();
    app->Run();
    delete app;
}
