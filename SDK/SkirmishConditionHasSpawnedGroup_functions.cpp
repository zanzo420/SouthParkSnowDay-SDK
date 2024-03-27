#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishConditionHasSpawnedGroup.SkirmishConditionHasSpawnedGroup_C
// (None)

class UClass* USkirmishConditionHasSpawnedGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishConditionHasSpawnedGroup_C");

	return Clss;
}


// SkirmishConditionHasSpawnedGroup_C SkirmishConditionHasSpawnedGroup.Default__SkirmishConditionHasSpawnedGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishConditionHasSpawnedGroup_C* USkirmishConditionHasSpawnedGroup_C::GetDefaultObj()
{
	static class USkirmishConditionHasSpawnedGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishConditionHasSpawnedGroup_C*>(USkirmishConditionHasSpawnedGroup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishConditionHasSpawnedGroup.SkirmishConditionHasSpawnedGroup_C.IsSkirmishConditionSatisfied
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSkirmishTrigger*         OwningTrigger                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue             (ConstParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool USkirmishConditionHasSpawnedGroup_C::IsSkirmishConditionSatisfied(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, TArray<class FName>& CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishConditionHasSpawnedGroup_C", "IsSkirmishConditionSatisfied");

	Params::USkirmishConditionHasSpawnedGroup_C_IsSkirmishConditionSatisfied_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.OwningTrigger = OwningTrigger;
	Parms.CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue = CallFunc_GetSpawnGroupHistory_ServerOnly_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


