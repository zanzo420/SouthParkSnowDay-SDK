#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParticipantTarget.ParticipantTarget_C
// (Actor)

class UClass* AParticipantTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticipantTarget_C");

	return Clss;
}


// ParticipantTarget_C ParticipantTarget.Default__ParticipantTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AParticipantTarget_C* AParticipantTarget_C::GetDefaultObj()
{
	static class AParticipantTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AParticipantTarget_C*>(AParticipantTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


