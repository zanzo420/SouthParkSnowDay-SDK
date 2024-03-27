#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimWindowHideWeapons.AnimWindowHideWeapons_C
// (None)

class UClass* UAnimWindowHideWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimWindowHideWeapons_C");

	return Clss;
}


// AnimWindowHideWeapons_C AnimWindowHideWeapons.Default__AnimWindowHideWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimWindowHideWeapons_C* UAnimWindowHideWeapons_C::GetDefaultObj()
{
	static class UAnimWindowHideWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimWindowHideWeapons_C*>(UAnimWindowHideWeapons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimWindowHideWeapons.AnimWindowHideWeapons_C.OnVerbWindowEnd
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    EncompassingVerb                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetOwningItem_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimWindowHideWeapons_C::OnVerbWindowEnd(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, bool Interrupted, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimWindowHideWeapons_C", "OnVerbWindowEnd");

	Params::UAnimWindowHideWeapons_C_OnVerbWindowEnd_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;
	Parms.EncompassingVerb = EncompassingVerb;
	Parms.Interrupted = Interrupted;
	Parms.CallFunc_GetOwningItem_ReturnValue = CallFunc_GetOwningItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AnimWindowHideWeapons.AnimWindowHideWeapons_C.OnVerbWindowBegin
// (Event, Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnPawn*                    AffectedPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnVerb*                    EncompassingVerb                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TotalDuration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetActualEquippedItem_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon_1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAnimWindowHideWeapons_C::OnVerbWindowBegin(class AQtnPawn* AffectedPawn, class UQtnVerb* EncompassingVerb, float TotalDuration, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimWindowHideWeapons_C", "OnVerbWindowBegin");

	Params::UAnimWindowHideWeapons_C_OnVerbWindowBegin_Params Parms{};

	Parms.AffectedPawn = AffectedPawn;
	Parms.EncompassingVerb = EncompassingVerb;
	Parms.TotalDuration = TotalDuration;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue = CallFunc_GetActualEquippedItem_ReturnValue;
	Parms.CallFunc_GetActualEquippedItem_ReturnValue_1 = CallFunc_GetActualEquippedItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBase_Weapon_1 = K2Node_DynamicCast_AsBase_Weapon_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


