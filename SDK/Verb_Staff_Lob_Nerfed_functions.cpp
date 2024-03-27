#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C
// (None)

class UClass* UVerb_Staff_Lob_Nerfed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Verb_Staff_Lob_Nerfed_C");

	return Clss;
}


// Verb_Staff_Lob_Nerfed_C Verb_Staff_Lob_Nerfed.Default__Verb_Staff_Lob_Nerfed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerb_Staff_Lob_Nerfed_C* UVerb_Staff_Lob_Nerfed_C::GetDefaultObj()
{
	static class UVerb_Staff_Lob_Nerfed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerb_Staff_Lob_Nerfed_C*>(UVerb_Staff_Lob_Nerfed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassNameWithoutSuffix_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UVerb_Staff_Lob_Nerfed_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetClassNameWithoutSuffix_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_Staff_Lob_Nerfed_C", "OnDebugDisplay");

	Params::UVerb_Staff_Lob_Nerfed_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetClassNameWithoutSuffix_ReturnValue = CallFunc_GetClassNameWithoutSuffix_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C.Spawn Projectile from Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Get_Projectile_Aim_Return_Value_Start_Position          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Projectile_Aim_Return_Value_Velocity                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerb_Staff_Lob_Nerfed_C::Spawn_Projectile_from_Local(const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Start_Position, const struct FVector& CallFunc_Get_Projectile_Aim_Return_Value_Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_Staff_Lob_Nerfed_C", "Spawn Projectile from Local");

	Params::UVerb_Staff_Lob_Nerfed_C_Spawn_Projectile_from_Local_Params Parms{};

	Parms.CallFunc_Get_Projectile_Aim_Return_Value_Start_Position = CallFunc_Get_Projectile_Aim_Return_Value_Start_Position;
	Parms.CallFunc_Get_Projectile_Aim_Return_Value_Velocity = CallFunc_Get_Projectile_Aim_Return_Value_Velocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C.Spawn Nerfed Projectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Velocity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerb_Staff_Lob_Nerfed_C::Spawn_Nerfed_Projectile(const struct FVector& StartPosition, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_Staff_Lob_Nerfed_C", "Spawn Nerfed Projectile");

	Params::UVerb_Staff_Lob_Nerfed_C_Spawn_Nerfed_Projectile_Params Parms{};

	Parms.StartPosition = StartPosition;
	Parms.Velocity = Velocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Verb_Staff_Lob_Nerfed.Verb_Staff_Lob_Nerfed_C.ExecuteUbergraph_Verb_Staff_Lob_Nerfed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_startPosition                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_velocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANerfedProjectile_Base_C*    CallFunc_SpawnActor_ServerOnly_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerb_Staff_Lob_Nerfed_C::ExecuteUbergraph_Verb_Staff_Lob_Nerfed(int32 EntryPoint, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& K2Node_CustomEvent_startPosition, const struct FVector& K2Node_CustomEvent_velocity, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UClass* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class ANerfedProjectile_Base_C* CallFunc_SpawnActor_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Verb_Staff_Lob_Nerfed_C", "ExecuteUbergraph_Verb_Staff_Lob_Nerfed");

	Params::UVerb_Staff_Lob_Nerfed_C_ExecuteUbergraph_Verb_Staff_Lob_Nerfed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_CustomEvent_startPosition = K2Node_CustomEvent_startPosition;
	Parms.K2Node_CustomEvent_velocity = K2Node_CustomEvent_velocity;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_SpawnActor_ServerOnly_ReturnValue = CallFunc_SpawnActor_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


