#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KyleBossTeleportMarker.KyleBossTeleportMarker_C
// (Actor)

class UClass* AKyleBossTeleportMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KyleBossTeleportMarker_C");

	return Clss;
}


// KyleBossTeleportMarker_C KyleBossTeleportMarker.Default__KyleBossTeleportMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKyleBossTeleportMarker_C* AKyleBossTeleportMarker_C::GetDefaultObj()
{
	static class AKyleBossTeleportMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKyleBossTeleportMarker_C*>(AKyleBossTeleportMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKyleBossTeleportMarker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKyleBossTeleportMarker_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "ReceiveEndPlay");

	Params::AKyleBossTeleportMarker_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.Activate_Tether
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKyleBossTeleportMarker_C::Activate_Tether()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "Activate_Tether");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKyleBossTeleportMarker_C::BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature");

	Params::AKyleBossTeleportMarker_C_BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_0_QtnAIEmployEvent__DelegateSignature_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnAIJobRole*               AiJobRole                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ClusterID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RoleID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          AIController                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        BlackboardComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsCombatJob                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKyleBossTeleportMarker_C::BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature(class UQtnAIJobRole* AiJobRole, class FName ClusterID, class FName RoleID, class AQtnBodyController* AIController, class UBlackboardComponent* BlackboardComponent, bool IsCombatJob)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature");

	Params::AKyleBossTeleportMarker_C_BndEvt__KyleBossTeleportMarker_QtnAIJob_KyleBoss_Tether_K2Node_ComponentBoundEvent_1_QtnAIEmployEvent__DelegateSignature_Params Parms{};

	Parms.AiJobRole = AiJobRole;
	Parms.ClusterID = ClusterID;
	Parms.RoleID = RoleID;
	Parms.AIController = AIController;
	Parms.BlackboardComponent = BlackboardComponent;
	Parms.IsCombatJob = IsCombatJob;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.DeActivate_Tether
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKyleBossTeleportMarker_C::DeActivate_Tether()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "DeActivate_Tether");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KyleBossTeleportMarker.KyleBossTeleportMarker_C.ExecuteUbergraph_KyleBossTeleportMarker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKyleBossTeleportMarker_C*   Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKyleBossTeleportMarker_C*   Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobRole*               K2Node_ComponentBoundEvent_aiJobRole_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_clusterID_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_roleID_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_ComponentBoundEvent_aiController_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_ComponentBoundEvent_blackboardComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isCombatJob_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAIJobRole*               K2Node_ComponentBoundEvent_aiJobRole                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_clusterID                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_roleID                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          K2Node_ComponentBoundEvent_aiController                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        K2Node_ComponentBoundEvent_blackboardComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isCombatJob                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKyleBossTeleportMarker_C::ExecuteUbergraph_KyleBossTeleportMarker(int32 EntryPoint, class AKyleBossTeleportMarker_C* Temp_object_Variable, class AKyleBossTeleportMarker_C* Temp_object_Variable_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole_1, class FName K2Node_ComponentBoundEvent_clusterID_1, class FName K2Node_ComponentBoundEvent_roleID_1, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController_1, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent_1, bool K2Node_ComponentBoundEvent_isCombatJob_1, class UQtnAIJobRole* K2Node_ComponentBoundEvent_aiJobRole, class FName K2Node_ComponentBoundEvent_clusterID, class FName K2Node_ComponentBoundEvent_roleID, class AQtnBodyController* K2Node_ComponentBoundEvent_aiController, class UBlackboardComponent* K2Node_ComponentBoundEvent_blackboardComponent, bool K2Node_ComponentBoundEvent_isCombatJob, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KyleBossTeleportMarker_C", "ExecuteUbergraph_KyleBossTeleportMarker");

	Params::AKyleBossTeleportMarker_C_ExecuteUbergraph_KyleBossTeleportMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQtnGameState_ReturnValue_1 = CallFunc_GetQtnGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype_1 = K2Node_DynamicCast_AsQtn_Game_State_Archetype_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_aiJobRole_1 = K2Node_ComponentBoundEvent_aiJobRole_1;
	Parms.K2Node_ComponentBoundEvent_clusterID_1 = K2Node_ComponentBoundEvent_clusterID_1;
	Parms.K2Node_ComponentBoundEvent_roleID_1 = K2Node_ComponentBoundEvent_roleID_1;
	Parms.K2Node_ComponentBoundEvent_aiController_1 = K2Node_ComponentBoundEvent_aiController_1;
	Parms.K2Node_ComponentBoundEvent_blackboardComponent_1 = K2Node_ComponentBoundEvent_blackboardComponent_1;
	Parms.K2Node_ComponentBoundEvent_isCombatJob_1 = K2Node_ComponentBoundEvent_isCombatJob_1;
	Parms.K2Node_ComponentBoundEvent_aiJobRole = K2Node_ComponentBoundEvent_aiJobRole;
	Parms.K2Node_ComponentBoundEvent_clusterID = K2Node_ComponentBoundEvent_clusterID;
	Parms.K2Node_ComponentBoundEvent_roleID = K2Node_ComponentBoundEvent_roleID;
	Parms.K2Node_ComponentBoundEvent_aiController = K2Node_ComponentBoundEvent_aiController;
	Parms.K2Node_ComponentBoundEvent_blackboardComponent = K2Node_ComponentBoundEvent_blackboardComponent;
	Parms.K2Node_ComponentBoundEvent_isCombatJob = K2Node_ComponentBoundEvent_isCombatJob;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


