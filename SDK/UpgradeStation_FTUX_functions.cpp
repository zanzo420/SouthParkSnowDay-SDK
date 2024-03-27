#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UpgradeStation_FTUX.UpgradeStation_FTUX_C
// (Actor)

class UClass* AUpgradeStation_FTUX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UpgradeStation_FTUX_C");

	return Clss;
}


// UpgradeStation_FTUX_C UpgradeStation_FTUX.Default__UpgradeStation_FTUX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUpgradeStation_FTUX_C* AUpgradeStation_FTUX_C::GetDefaultObj()
{
	static class AUpgradeStation_FTUX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUpgradeStation_FTUX_C*>(AUpgradeStation_FTUX_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.HideUpgrader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_FTUX_C::HideUpgrader(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "HideUpgrader");

	Params::AUpgradeStation_FTUX_C_HideUpgrader_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.BndEvt__UpgradeStation_FTUX_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UQtnFrobbableComponent*      ThisFrobbable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                FrobbingPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUpgradeStation_FTUX_C::BndEvt__UpgradeStation_FTUX_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "BndEvt__UpgradeStation_FTUX_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature");

	Params::AUpgradeStation_FTUX_C_BndEvt__UpgradeStation_FTUX_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature_Params Parms{};

	Parms.ThisFrobbable = ThisFrobbable;
	Parms.FrobbingPawn = FrobbingPawn;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.BndEvt__UpgradeStation_FTUX_UpgradeStationComponent_K2Node_ComponentBoundEvent_0_OnUpgradeProcessComplete__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPlayerUpgradeSessionState_C*UpgradeSession                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_FTUX_C::BndEvt__UpgradeStation_FTUX_UpgradeStationComponent_K2Node_ComponentBoundEvent_0_OnUpgradeProcessComplete__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "BndEvt__UpgradeStation_FTUX_UpgradeStationComponent_K2Node_ComponentBoundEvent_0_OnUpgradeProcessComplete__DelegateSignature");

	Params::AUpgradeStation_FTUX_C_BndEvt__UpgradeStation_FTUX_UpgradeStationComponent_K2Node_ComponentBoundEvent_0_OnUpgradeProcessComplete__DelegateSignature_Params Parms{};

	Parms.UpgradeSession = UpgradeSession;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.ExecuteUbergraph_UpgradeStation_FTUX
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnFrobbableComponent*      K2Node_ComponentBoundEvent_ThisFrobbable                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_ComponentBoundEvent_FrobbingPawn                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_isServer                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerUpgradeSessionState_C*K2Node_ComponentBoundEvent_UpgradeSession                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUpgradeStation_FTUX_C::ExecuteUbergraph_UpgradeStation_FTUX(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, bool CallFunc_FindPlayerData____FoundPlayer_1, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_1, int32 CallFunc_FindPlayerData____PlayerIndex_1, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item_1, class UPlayerUpgradeSessionState_C* K2Node_ComponentBoundEvent_UpgradeSession, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "ExecuteUbergraph_UpgradeStation_FTUX");

	Params::AUpgradeStation_FTUX_C_ExecuteUbergraph_UpgradeStation_FTUX_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_ThisFrobbable = K2Node_ComponentBoundEvent_ThisFrobbable;
	Parms.K2Node_ComponentBoundEvent_FrobbingPawn = K2Node_ComponentBoundEvent_FrobbingPawn;
	Parms.K2Node_ComponentBoundEvent_isServer = K2Node_ComponentBoundEvent_isServer;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;
	Parms.CallFunc_FindPlayerData____FoundPlayer_1 = CallFunc_FindPlayerData____FoundPlayer_1;
	Parms.CallFunc_FindPlayerData____PlayerSession_1 = CallFunc_FindPlayerData____PlayerSession_1;
	Parms.CallFunc_FindPlayerData____PlayerIndex_1 = CallFunc_FindPlayerData____PlayerIndex_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_ComponentBoundEvent_UpgradeSession = K2Node_ComponentBoundEvent_UpgradeSession;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.PlayerLeftUpgradeFTUX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_FTUX_C::PlayerLeftUpgradeFTUX__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "PlayerLeftUpgradeFTUX__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.PlayerEnteredUpgradeFTUX__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_FTUX_C::PlayerEnteredUpgradeFTUX__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "PlayerEnteredUpgradeFTUX__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UpgradeStation_FTUX.UpgradeStation_FTUX_C.Approached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUpgradeStation_FTUX_C::Approached__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UpgradeStation_FTUX_C", "Approached__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


