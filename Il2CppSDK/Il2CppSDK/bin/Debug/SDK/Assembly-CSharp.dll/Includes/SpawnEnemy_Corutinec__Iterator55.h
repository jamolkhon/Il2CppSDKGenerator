#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpawnEnemyCorutinecIterator55
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x2217DC))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x2217F0))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x2217F8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x221800))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x221A08))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SpawnEnemyCorutinecIterator55*))(Il2CppBase() + 0x221A14))(this);
	}
};