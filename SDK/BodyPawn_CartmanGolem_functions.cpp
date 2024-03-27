#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C
// (Actor, Pawn)

class UClass* ABodyPawn_CartmanGolem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawn_CartmanGolem_C");

	return Clss;
}


// BodyPawn_CartmanGolem_C BodyPawn_CartmanGolem.Default__BodyPawn_CartmanGolem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawn_CartmanGolem_C* ABodyPawn_CartmanGolem_C::GetDefaultObj()
{
	static class ABodyPawn_CartmanGolem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawn_CartmanGolem_C*>(ABodyPawn_CartmanGolem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.AcknowledgeCartmanBoss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABodyPawn_CartmanBoss_C*     CartmanBoss                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanGolem_C::AcknowledgeCartmanBoss(class ABodyPawn_CartmanBoss_C* CartmanBoss, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "AcknowledgeCartmanBoss");

	Params::ABodyPawn_CartmanGolem_C_AcknowledgeCartmanBoss_Params Parms{};

	Parms.CartmanBoss = CartmanBoss;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.CanAcceptEnemyUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Accept                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanGolem_C::CanAcceptEnemyUpgrades(bool* Accept)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "CanAcceptEnemyUpgrades");

	Params::ABodyPawn_CartmanGolem_C_CanAcceptEnemyUpgrades_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Accept != nullptr)
		*Accept = Parms.Accept;

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Teleport__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Teleport__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Teleport__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Teleport__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Teleport__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Teleport__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Burst__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Burst__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Burst__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Burst__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Burst__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Burst__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Burst__SpawnBurst__EventFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Burst__SpawnBurst__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Burst__SpawnBurst__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Vibrate__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Vibrate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Vibrate__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.Vibrate__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::Vibrate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "Vibrate__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.TeleportPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Vanishing                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawn_CartmanGolem_C::TeleportPresentation(bool Vanishing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "TeleportPresentation");

	Params::ABodyPawn_CartmanGolem_C_TeleportPresentation_Params Parms{};

	Parms.Vanishing = Vanishing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.OnQtnReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::OnQtnReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "OnQtnReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.BurstPresentation
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::BurstPresentation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "BurstPresentation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.HandImpactFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABodyPawn_CartmanGolem_C::HandImpactFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "HandImpactFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawn_CartmanGolem_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "ReceiveEndPlay");

	Params::ABodyPawn_CartmanGolem_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawn_CartmanGolem.BodyPawn_CartmanGolem_C.ExecuteUbergraph_BodyPawn_CartmanGolem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_vanishing                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABodyPawn_CartmanGolem_C::ExecuteUbergraph_BodyPawn_CartmanGolem(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_vanishing, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess_2, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawn_CartmanGolem_C", "ExecuteUbergraph_BodyPawn_CartmanGolem");

	Params::ABodyPawn_CartmanGolem_C_ExecuteUbergraph_BodyPawn_CartmanGolem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_vanishing = K2Node_CustomEvent_vanishing;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_BP_BeginEffect_ReturnValue_1 = CallFunc_BP_BeginEffect_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}


