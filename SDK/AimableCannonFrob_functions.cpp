#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AimableCannonFrob.AimableCannonFrob_C
// (SceneComponent)

class UClass* UAimableCannonFrob_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AimableCannonFrob_C");

	return Clss;
}


// AimableCannonFrob_C AimableCannonFrob.Default__AimableCannonFrob_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAimableCannonFrob_C* UAimableCannonFrob_C::GetDefaultObj()
{
	static class UAimableCannonFrob_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAimableCannonFrob_C*>(UAimableCannonFrob_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AimableCannonFrob.AimableCannonFrob_C.CanBeInteractedWith
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EQtnTargetInteractionEnumTargetInteraction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPawn*                    InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        AffordancePrompt                                                 (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                bodyPawn                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDriving                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               HasCannonAmmo                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_DynamicCast_AsQtn_Body_Pawn                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCombatInhibited_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnFullBodyState*           CallFunc_GetCurrentFullBodyState_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFullBodyStateEngaged*    K2Node_DynamicCast_AsQtn_Full_Body_State_Engaged                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_GoalPickup_C*            CallFunc_Get_Carried_Cannon_Ammo_ammoPickupActor                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCarryComponent*          CallFunc_Get_Carried_Cannon_Ammo_ammoCarryComponent              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Needs_Ammo_Load_yes                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InfiniteCannonsEnabled_infiniteCannons                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UAimableCannonFrob_C::CanBeInteractedWith(enum class EQtnTargetInteractionEnum TargetInteraction, class AQtnPawn* InteractingPawn, class FText* AffordancePrompt, class AQtnBodyPawn* bodyPawn, bool IsDriving, bool HasCannonAmmo, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsCombatInhibited_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnFullBodyState* CallFunc_GetCurrentFullBodyState_ReturnValue, class UQtnFullBodyStateEngaged* K2Node_DynamicCast_AsQtn_Full_Body_State_Engaged, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class ABP_GoalPickup_C* CallFunc_Get_Carried_Cannon_Ammo_ammoPickupActor, class UQtnCarryComponent* CallFunc_Get_Carried_Cannon_Ammo_ammoCarryComponent, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Needs_Ammo_Load_yes, bool CallFunc_InfiniteCannonsEnabled_infiniteCannons, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AimableCannonFrob_C", "CanBeInteractedWith");

	Params::UAimableCannonFrob_C_CanBeInteractedWith_Params Parms{};

	Parms.TargetInteraction = TargetInteraction;
	Parms.InteractingPawn = InteractingPawn;
	Parms.bodyPawn = bodyPawn;
	Parms.IsDriving = IsDriving;
	Parms.HasCannonAmmo = HasCannonAmmo;
	Parms.K2Node_DynamicCast_AsQtn_Body_Pawn = K2Node_DynamicCast_AsQtn_Body_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_IsCombatInhibited_ReturnValue = CallFunc_IsCombatInhibited_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentFullBodyState_ReturnValue = CallFunc_GetCurrentFullBodyState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Full_Body_State_Engaged = K2Node_DynamicCast_AsQtn_Full_Body_State_Engaged;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Get_Carried_Cannon_Ammo_ammoPickupActor = CallFunc_Get_Carried_Cannon_Ammo_ammoPickupActor;
	Parms.CallFunc_Get_Carried_Cannon_Ammo_ammoCarryComponent = CallFunc_Get_Carried_Cannon_Ammo_ammoCarryComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Needs_Ammo_Load_yes = CallFunc_Needs_Ammo_Load_yes;
	Parms.CallFunc_InfiniteCannonsEnabled_infiniteCannons = CallFunc_InfiniteCannonsEnabled_infiniteCannons;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AffordancePrompt != nullptr)
		*AffordancePrompt = Parms.AffordancePrompt;

	return Parms.ReturnValue;

}


// Function AimableCannonFrob.AimableCannonFrob_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UAimableCannonFrob_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AimableCannonFrob_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AimableCannonFrob.AimableCannonFrob_C.ExecuteUbergraph_AimableCannonFrob
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAimableCannonPawn_C*        K2Node_DynamicCast_AsAimable_Cannon_Pawn                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAimableCannonFrob_C::ExecuteUbergraph_AimableCannonFrob(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AAimableCannonPawn_C* K2Node_DynamicCast_AsAimable_Cannon_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AimableCannonFrob_C", "ExecuteUbergraph_AimableCannonFrob");

	Params::UAimableCannonFrob_C_ExecuteUbergraph_AimableCannonFrob_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsAimable_Cannon_Pawn = K2Node_DynamicCast_AsAimable_Cannon_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


