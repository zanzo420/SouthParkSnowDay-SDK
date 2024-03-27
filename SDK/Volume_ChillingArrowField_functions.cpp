#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Volume_ChillingArrowField.Volume_ChillingArrowField_C
// (Actor)

class UClass* AVolume_ChillingArrowField_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Volume_ChillingArrowField_C");

	return Clss;
}


// Volume_ChillingArrowField_C Volume_ChillingArrowField.Default__Volume_ChillingArrowField_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVolume_ChillingArrowField_C* AVolume_ChillingArrowField_C::GetDefaultObj()
{
	static class AVolume_ChillingArrowField_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVolume_ChillingArrowField_C*>(AVolume_ChillingArrowField_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Volume_ChillingArrowField.Volume_ChillingArrowField_C.UnaffectEnemy_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVolume_ChillingArrowField_C::UnaffectEnemy_ServerOnly(class ABodyPawnBase_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Volume_ChillingArrowField_C", "UnaffectEnemy_ServerOnly");

	Params::AVolume_ChillingArrowField_C_UnaffectEnemy_ServerOnly_Params Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Volume_ChillingArrowField.Volume_ChillingArrowField_C.AffectEnemy_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawnBase_C*             Enemy                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVolume_ChillingArrowField_C::AffectEnemy_ServerOnly(class ABodyPawnBase_C* Enemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Volume_ChillingArrowField_C", "AffectEnemy_ServerOnly");

	Params::AVolume_ChillingArrowField_C_AffectEnemy_ServerOnly_Params Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Volume_ChillingArrowField.Volume_ChillingArrowField_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScaledSphereRadius_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVolume_ChillingArrowField_C::UserConstructionScript(float CallFunc_GetScaledSphereRadius_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Volume_ChillingArrowField_C", "UserConstructionScript");

	Params::AVolume_ChillingArrowField_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetScaledSphereRadius_ReturnValue = CallFunc_GetScaledSphereRadius_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


