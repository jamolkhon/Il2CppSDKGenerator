#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AuthenticateUserCorutinecIterator46
{
public: 
	static Il2CppClass *StaticClass() {
		return *(Il2CppClass **)(Il2CppBase() + 0x0);
	}
	// Fields
	template <typename T = void*> T& userID__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& action__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = void*> T& f__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	// Methods
	template <typename T = void> T _ctor() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D4D84))(this);
	}
	template <typename T = void*> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D517C))(this);
	}
	template <typename T = void*> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D5184))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D518C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D54A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AuthenticateUserCorutinecIterator46*))(Il2CppBase() + 0x2D54B4))(this);
	}
};