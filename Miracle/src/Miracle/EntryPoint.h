#pragma once

extern Miracle::Application* Miracle::CreateApplication();

int main(int argc, char** argv)
{
    auto app = Miracle::CreateApplication();
    app->Run();
    delete app;
}
