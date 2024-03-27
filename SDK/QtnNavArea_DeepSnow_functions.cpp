#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QtnNavArea_DeepSnow.QtnNavArea_DeepSnow_C
// (None)

class UClass* UQtnNavArea_DeepSnow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QtnNavArea_DeepSnow_C");

	return Clss;
}


// QtnNavArea_DeepSnow_C QtnNavArea_DeepSnow.Default__QtnNavArea_DeepSnow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQtnNavArea_DeepSnow_C* UQtnNavArea_DeepSnow_C::GetDefaultObj()
{
	static class UQtnNavArea_DeepSnow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQtnNavArea_DeepSnow_C*>(UQtnNavArea_DeepSnow_C::StaticClass()->DefaultObject);

	return Default;
}

}


