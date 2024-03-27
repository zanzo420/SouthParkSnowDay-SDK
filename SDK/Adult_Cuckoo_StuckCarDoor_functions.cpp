#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Adult_Cuckoo_StuckCarDoor.Adult_Cuckoo_StuckCarDoor_C
// (Actor)

class UClass* AAdult_Cuckoo_StuckCarDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Adult_Cuckoo_StuckCarDoor_C");

	return Clss;
}


// Adult_Cuckoo_StuckCarDoor_C Adult_Cuckoo_StuckCarDoor.Default__Adult_Cuckoo_StuckCarDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAdult_Cuckoo_StuckCarDoor_C* AAdult_Cuckoo_StuckCarDoor_C::GetDefaultObj()
{
	static class AAdult_Cuckoo_StuckCarDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAdult_Cuckoo_StuckCarDoor_C*>(AAdult_Cuckoo_StuckCarDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


