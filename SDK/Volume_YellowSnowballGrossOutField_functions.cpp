#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Volume_YellowSnowballGrossOutField.Volume_YellowSnowballGrossOutField_C
// (Actor)

class UClass* AVolume_YellowSnowballGrossOutField_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Volume_YellowSnowballGrossOutField_C");

	return Clss;
}


// Volume_YellowSnowballGrossOutField_C Volume_YellowSnowballGrossOutField.Default__Volume_YellowSnowballGrossOutField_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVolume_YellowSnowballGrossOutField_C* AVolume_YellowSnowballGrossOutField_C::GetDefaultObj()
{
	static class AVolume_YellowSnowballGrossOutField_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolume_YellowSnowballGrossOutField_C*>(AVolume_YellowSnowballGrossOutField_C::StaticClass()->DefaultObject);

	return Default;
}

}


