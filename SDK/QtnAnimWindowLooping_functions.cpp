#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnAnimWindowLooping.QtnAnimWindowLooping_C
// (None)

class UClass* UQtnAnimWindowLooping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnAnimWindowLooping_C");

	return Clss;
}


// QtnAnimWindowLooping_C QtnAnimWindowLooping.Default__QtnAnimWindowLooping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnAnimWindowLooping_C* UQtnAnimWindowLooping_C::GetDefaultObj()
{
	static class UQtnAnimWindowLooping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnAnimWindowLooping_C*>(UQtnAnimWindowLooping_C::StaticClass()->DefaultObject);

	return Default;
}

}


