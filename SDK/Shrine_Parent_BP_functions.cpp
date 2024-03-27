#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shrine_Parent_BP.Shrine_Parent_BP_C
// (Actor)

class UClass* AShrine_Parent_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shrine_Parent_BP_C");

	return Clss;
}


// Shrine_Parent_BP_C Shrine_Parent_BP.Default__Shrine_Parent_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShrine_Parent_BP_C* AShrine_Parent_BP_C::GetDefaultObj()
{
	static class AShrine_Parent_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShrine_Parent_BP_C*>(AShrine_Parent_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.Local Update Collision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               L_Collision                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::Local_Update_Collision(bool Enable, bool L_Collision, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "Local Update Collision");

	Params::AShrine_Parent_BP_C_Local_Update_Collision_Params Parms{};

	Parms.Enable = Enable;
	Parms.L_Collision = L_Collision;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.PassRangedGreetTagsToUpgradeGiver_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::PassRangedGreetTagsToUpgradeGiver_ServerOnly(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "PassRangedGreetTagsToUpgradeGiver_ServerOnly");

	Params::AShrine_Parent_BP_C_PassRangedGreetTagsToUpgradeGiver_ServerOnly_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.SetScriptedRangedGreetID_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                NewScriptedRangedGreetID                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AShrine_Parent_BP_C::SetScriptedRangedGreetID_ServerOnly(const struct FGameplayTag& NewScriptedRangedGreetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "SetScriptedRangedGreetID_ServerOnly");

	Params::AShrine_Parent_BP_C_SetScriptedRangedGreetID_ServerOnly_Params Parms{};

	Parms.NewScriptedRangedGreetID = NewScriptedRangedGreetID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.QueryUpgradeGiver
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseShrine                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::QueryUpgradeGiver(bool* UseShrine, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_MatchesAnyTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "QueryUpgradeGiver");

	Params::AShrine_Parent_BP_C_QueryUpgradeGiver_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UseShrine != nullptr)
		*UseShrine = Parms.UseShrine;

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.Set Can Play Music Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Want_music                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AQtnBodyPawn*>        LOCAL_HoldingArray                                               (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::Set_Can_Play_Music_Server_Only(bool Want_music, const TArray<class AQtnBodyPawn*>& LOCAL_HoldingArray, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "Set Can Play Music Server Only");

	Params::AShrine_Parent_BP_C_Set_Can_Play_Music_Server_Only_Params Parms{};

	Parms.Want_music = Want_music;
	Parms.LOCAL_HoldingArray = LOCAL_HoldingArray;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.OnRep_r_CanPlayMusic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShrine_Parent_BP_C::OnRep_r_CanPlayMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "OnRep_r_CanPlayMusic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.OnRep_r_PlayersWhoInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShrine_Parent_BP_C::OnRep_r_PlayersWhoInteracted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "OnRep_r_PlayersWhoInteracted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.Update Interactors Server Only
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                Player_who_interacted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AQtnBodyPawn*>        LOCAL_HoldingArray                                               (Edit, BlueprintVisible, DisableEditOnTemplate, ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::Update_Interactors_Server_Only(class AQtnBodyPawn* Player_who_interacted, const TArray<class AQtnBodyPawn*>& LOCAL_HoldingArray, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "Update Interactors Server Only");

	Params::AShrine_Parent_BP_C_Update_Interactors_Server_Only_Params Parms{};

	Parms.Player_who_interacted = Player_who_interacted;
	Parms.LOCAL_HoldingArray = LOCAL_HoldingArray;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.Local Update Elements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Exist                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::Local_Update_Elements(bool Exist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "Local Update Elements");

	Params::AShrine_Parent_BP_C_Local_Update_Elements_Params Parms{};

	Parms.Exist = Exist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.OnRep_IExistToday
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShrine_Parent_BP_C::OnRep_IExistToday()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "OnRep_IExistToday");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.Local Update Vis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     L_Children                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               L_Visibility                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::Local_Update_Vis(bool NewVisibility, const TArray<class USceneComponent*>& L_Children, bool L_Visibility, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "Local Update Vis");

	Params::AShrine_Parent_BP_C_Local_Update_Vis_Params Parms{};

	Parms.NewVisibility = NewVisibility;
	Parms.L_Children = L_Children;
	Parms.L_Visibility = L_Visibility;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.CheckforVis
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tags                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void AShrine_Parent_BP_C::CheckforVis(const struct FGameplayTag& Tags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "CheckforVis");

	Params::AShrine_Parent_BP_C_CheckforVis_Params Parms{};

	Parms.Tags = Tags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AShrine_Parent_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.DelayedCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AShrine_Parent_BP_C::DelayedCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "DelayedCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Shrine_Parent_BP.Shrine_Parent_BP_C.ExecuteUbergraph_Shrine_Parent_BP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tags                                          (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameStateArchetype_C*    K2Node_DynamicCast_AsQtn_Game_State_Archetype                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_WaitForReadyForGameplay_readyGameState                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_QueryUpgradeGiver_UseShrine                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Parent_BP_C::ExecuteUbergraph_Shrine_Parent_BP(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_Tags, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class AQtnGameState* CallFunc_WaitForReadyForGameplay_readyGameState, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_QueryUpgradeGiver_UseShrine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Parent_BP_C", "ExecuteUbergraph_Shrine_Parent_BP");

	Params::AShrine_Parent_BP_C_ExecuteUbergraph_Shrine_Parent_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Tags = K2Node_CustomEvent_Tags;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Game_State_Archetype = K2Node_DynamicCast_AsQtn_Game_State_Archetype;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WaitForReadyForGameplay_readyGameState = CallFunc_WaitForReadyForGameplay_readyGameState;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_QueryUpgradeGiver_UseShrine = CallFunc_QueryUpgradeGiver_UseShrine;

	UObject::ProcessEvent(Func, &Parms);

}

}


