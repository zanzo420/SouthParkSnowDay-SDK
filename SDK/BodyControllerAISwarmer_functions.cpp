#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyControllerAISwarmer.BodyControllerAISwarmer_C
// (Actor)

class UClass* ABodyControllerAISwarmer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyControllerAISwarmer_C");

	return Clss;
}


// BodyControllerAISwarmer_C BodyControllerAISwarmer.Default__BodyControllerAISwarmer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyControllerAISwarmer_C* ABodyControllerAISwarmer_C::GetDefaultObj()
{
	static class ABodyControllerAISwarmer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyControllerAISwarmer_C*>(ABodyControllerAISwarmer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyControllerAISwarmer.BodyControllerAISwarmer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAIPerceptionComponent*      CallFunc_GetAIPerceptionComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPathFollowingComponent*     CallFunc_GetPathFollowingComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnUtilitiesSwitchQualityCallFunc_BranchUseSwitchQuality_Branch                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyControllerAISwarmer_C::UserConstructionScript(class UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue, class UPathFollowingComponent* CallFunc_GetPathFollowingComponent_ReturnValue, enum class EQtnUtilitiesSwitchQuality CallFunc_BranchUseSwitchQuality_Branch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyControllerAISwarmer_C", "UserConstructionScript");

	Params::ABodyControllerAISwarmer_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetAIPerceptionComponent_ReturnValue = CallFunc_GetAIPerceptionComponent_ReturnValue;
	Parms.CallFunc_GetPathFollowingComponent_ReturnValue = CallFunc_GetPathFollowingComponent_ReturnValue;
	Parms.CallFunc_BranchUseSwitchQuality_Branch = CallFunc_BranchUseSwitchQuality_Branch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


