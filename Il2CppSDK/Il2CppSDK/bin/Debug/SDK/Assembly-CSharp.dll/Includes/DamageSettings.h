#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DamageSettings
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = bool> T& Invulnerable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& DontAttackTimer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(DamageSettings*))(Il2CppBase() + 0x1DB320))(this);
	}
};