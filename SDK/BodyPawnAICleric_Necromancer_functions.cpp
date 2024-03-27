#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAICleric_Necromancer.BodyPawnAICleric_Necromancer_C
// (Actor, Pawn)

class UClass* ABodyPawnAICleric_Necromancer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAICleric_Necromancer_C");

	return Clss;
}


// BodyPawnAICleric_Necromancer_C BodyPawnAICleric_Necromancer.Default__BodyPawnAICleric_Necromancer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAICleric_Necromancer_C* ABodyPawnAICleric_Necromancer_C::GetDefaultObj()
{
	static class ABodyPawnAICleric_Necromancer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAICleric_Necromancer_C*>(ABodyPawnAICleric_Necromancer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAICleric_Necromancer.BodyPawnAICleric_Necromancer_C.HandleDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawnAICleric_Necromancer_C::HandleDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAICleric_Necromancer_C", "HandleDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAICleric_Necromancer.BodyPawnAICleric_Necromancer_C.ExecuteUbergraph_BodyPawnAICleric_Necromancer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAICleric_Necromancer_C::ExecuteUbergraph_BodyPawnAICleric_Necromancer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAICleric_Necromancer_C", "ExecuteUbergraph_BodyPawnAICleric_Necromancer");

	Params::ABodyPawnAICleric_Necromancer_C_ExecuteUbergraph_BodyPawnAICleric_Necromancer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


