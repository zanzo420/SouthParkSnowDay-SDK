#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hair_Emo_02.Hair_Emo_02_C
// (None)

class UClass* UHair_Emo_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hair_Emo_02_C");

	return Clss;
}


// Hair_Emo_02_C Hair_Emo_02.Default__Hair_Emo_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHair_Emo_02_C* UHair_Emo_02_C::GetDefaultObj()
{
	static class UHair_Emo_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHair_Emo_02_C*>(UHair_Emo_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


