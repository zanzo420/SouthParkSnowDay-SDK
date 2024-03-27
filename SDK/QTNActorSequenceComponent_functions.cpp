#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass QTNActorSequenceComponent.QTNActorSequenceComponent_C
// (None)

class UClass* UQTNActorSequenceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QTNActorSequenceComponent_C");

	return Clss;
}


// QTNActorSequenceComponent_C QTNActorSequenceComponent.Default__QTNActorSequenceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQTNActorSequenceComponent_C* UQTNActorSequenceComponent_C::GetDefaultObj()
{
	static class UQTNActorSequenceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQTNActorSequenceComponent_C*>(UQTNActorSequenceComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


