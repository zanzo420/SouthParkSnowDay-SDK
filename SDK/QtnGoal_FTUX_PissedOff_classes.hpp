#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x3C8 - 0x2E0)
// BlueprintGeneratedClass QtnGoal_FTUX_PissedOff.QtnGoal_FTUX_PissedOff_C
class UQtnGoal_FTUX_PissedOff_C : public UGoalBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FQtnStruct_VOLine>             VO_ElvesAppear;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_PissedOff;                                  // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Detail_Fight;                                      // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  POTutorial_Heading;                                // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  POTutorial_Prompt;                                 // 0x340(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_POExplain;                                      // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_POReact;                                        // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ListenForPissedOff;                                // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_74CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartingRage;                                      // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnAttributeComponent*                PlayerAttributes;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Tutorial;                                          // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFTUX_PissedOff_ModalWidget_C*         ModalWidget;                                       // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQtnStruct_VOLine>             VO_POKill;                                         // 0x398(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FQtnStruct_VOLine>             VO_ButtersRespawn;                                 // 0x3A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnAttribute*                         RageAttribute;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABodyPawnAIButters_C*                  Butters;                                           // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnGoal_FTUX_PissedOff_C* GetDefaultObj();

	void GetButtersReference(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ABodyPawnAIButters_C* K2Node_DynamicCast_AsBody_Pawn_AIButters, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void EnablePissedOffBar(enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UCombatHUDScreen_C* CallFunc_GetSubScreen_ReturnValue, class UCombatHUD_C* CallFunc_GetUserWidget_ReturnValue);
	void GetNewButters(TArray<class AActor*>& CallFunc_Find_Marked_Actors_Server_Only_foundActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item);
	void EndSequence(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQtnGoal*>& CallFunc_GetChildGoals_ReturnValue, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, class UQtnGoal* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Receive_Skirmish_Notify(class AQtnSkirmish* Skirmish_Sending_Event, bool Final_skirmish_action, class FName Action_Tag, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void PissedOffTutorial(class AQtnBodyPawn* MyBodyPawn, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UFTUX_PissedOff_Screen_C* CallFunc_GetScreen_ReturnValue, class UFTUX_PissedOff_ModalWidget_C* CallFunc_GetUserWidget_ReturnValue);
	void Post_VOConversation_Server_Only();
	void OnGoalSpawned_ServerOnly();
	void OnGoalStart(bool WillEndImmediatelyFromLateJoin);
	void GetRage();
	void bindModalEndEvent();
	void PlayerLeftModal();
	void OnRageChangedEvent(class UQtnAttribute* Attribute, float Value);
	void ExecuteUbergraph_QtnGoal_FTUX_PissedOff(int32 EntryPoint, class UQtnAttribute* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, bool K2Node_Event_willEndImmediatelyFromLateJoin, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, float Temp_float_Variable, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetAttributeValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item, const struct FQtnStruct_VOLine& CallFunc_Array_Get_Item_1, enum class EQtnGoalStatus CallFunc_GetGoalStatus_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UQtnAttribute* K2Node_CustomEvent_Attribute, float K2Node_CustomEvent_Value, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_4);
};

}


