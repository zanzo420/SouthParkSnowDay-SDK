#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtersIntroScene_VO.ButtersIntroScene_VO_C
// (None)

class UClass* UButtersIntroScene_VO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtersIntroScene_VO_C");

	return Clss;
}


// ButtersIntroScene_VO_C ButtersIntroScene_VO.Default__ButtersIntroScene_VO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtersIntroScene_VO_C* UButtersIntroScene_VO_C::GetDefaultObj()
{
	static class UButtersIntroScene_VO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtersIntroScene_VO_C*>(UButtersIntroScene_VO_C::StaticClass()->DefaultObject);

	return Default;
}

}


