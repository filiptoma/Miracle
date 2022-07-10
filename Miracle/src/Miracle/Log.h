#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Miracle {

    class Log
    {
    public:
        static void Init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
            return _coreLogger;
        }
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
            return _clientLogger;
        }
    private:
        static std::shared_ptr<spdlog::logger> _coreLogger;
        static std::shared_ptr<spdlog::logger> _clientLogger;
    };

}

#define MI_CORE_TRACE(...)    ::Miracle::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MI_CORE_INFO(...)     ::Miracle::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MI_CORE_WARN(...)     ::Miracle::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MI_CORE_ERROR(...)    ::Miracle::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MI_CORE_CRITICAL(...) ::Miracle::Log::GetCoreLogger()->critical(__VA_ARGS__)

#define MI_INFO(...)          ::Miracle::Log::GetClientLogger()->info(__VA_ARGS__)
#define MI_TRACE(...)         ::Miracle::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MI_WARN(...)          ::Miracle::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MI_ERROR(...)         ::Miracle::Log::GetClientLogger()->error(__VA_ARGS__)
#define MI_CRITICAL(...)      ::Miracle::Log::GetClientLogger()->critical(__VA_ARGS__)
