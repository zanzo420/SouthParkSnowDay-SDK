#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtersOutroScene_VO.ButtersOutroScene_VO_C
// (None)

class UClass* UButtersOutroScene_VO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtersOutroScene_VO_C");

	return Clss;
}


// ButtersOutroScene_VO_C ButtersOutroScene_VO.Default__ButtersOutroScene_VO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtersOutroScene_VO_C* UButtersOutroScene_VO_C::GetDefaultObj()
{
	static class UButtersOutroScene_VO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtersOutroScene_VO_C*>(UButtersOutroScene_VO_C::StaticClass()->DefaultObject);

	return Default;
}

}


