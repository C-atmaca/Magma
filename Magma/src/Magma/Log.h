#pragma once

#include <memory>
#include "Core.h"
#include "spdlog/spdlog.h"

namespace Magma {

	class MAGMA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define MG_CORE_TRACE(...)     ::Magma::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MG_CORE_INFO(...)      ::Magma::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MG_CORE_WARN(...)      ::Magma::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MG_CORE_ERROR(...)     ::Magma::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MG_CORE_FATAL(...)     ::Magma::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MG_TRACE(...)          ::Magma::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MG_INFO(...)           ::Magma::Log::GetClientLogger()->info(__VA_ARGS__)
#define MG_WARN(...)           ::Magma::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MG_ERROR(...)          ::Magma::Log::GetClientLogger()->error(__VA_ARGS__)
#define MG_FATAL(...)          ::Magma::Log::GetClientLogger()->fatal(__VA_ARGS__)