#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimFSMZombieBossSanta
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0xD78814);
	}
	// Methods
	template <typename T = void> T _ctor(void* anims, void* owner) {
		return ((T (*)(AnimFSMZombieBossSanta*, void*, void*))(Il2CppBase() + 0x1AC33C))(this, anims, owner);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(AnimFSMZombieBossSanta*))(Il2CppBase() + 0x1ADE8C))(this);
	}
};