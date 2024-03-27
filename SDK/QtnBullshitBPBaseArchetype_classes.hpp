#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass QtnBullshitBPBaseArchetype.QtnBullshitBPBaseArchetype_C
class UQtnBullshitBPBaseArchetype_C : public UQtnBullshit
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            CardArt;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          VOContextTag;                                      // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BSVerb;                                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                SummonActor;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSummon;                                      // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          CallingBodyPawn;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UQtnBullshitBPBaseArchetype_C* GetDefaultObj();

	void CheckForDuplicateSummoner(bool* No_duplicate_exists, bool CallFunc_IsValidClass_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UQtnGoalManager* CallFunc_GetGoalManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnGoalManagerBase_C* K2Node_DynamicCast_AsQtn_Goal_Manager_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesThisCharacterExist_yes, bool CallFunc_Not_PreBool_ReturnValue);
	void Get_Description_Text(class FText* DescriptionText);
	void Make_Default_Target_List(bool Add_Players, bool Add_Enemies, TArray<class AQtnBodyPawn*>* List_Of_Targets, bool LOCAL_Add_Enemies, bool LOCAL_Add_Players, const TArray<class AQtnBodyPawn*>& List_To_Return, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllBodyPawns_foundBodyPawns, class AQtnBodyPawn* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, class AQtnBodyPawn* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class ADirector_C* CallFunc_Get_Director_Of_Current_Tribunal_Current_Tribunal_s_Director, bool CallFunc_Get_Director_Of_Current_Tribunal_Director_Found_, bool CallFunc_Get_Director_Of_Current_Tribunal_Tribunal_Active_, TArray<class AQtnBodyPawn*>& CallFunc_Get_Active_Player_Bodies_List_Of_Player_Bodies, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_Get_Active_Enemies_List_Of_Enemies, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1);
	void CallSummoner();
	void LocationPicked(const struct FVector& WorldLocation, const struct FRotator& Rotation, class UClass* SummonClass);
	void OnBullshitStart();
	void ExecuteUbergraph_QtnBullshitBPBaseArchetype(int32 EntryPoint, bool CallFunc_CheckForDuplicateSummoner_no_duplicate_exists, class UQtnBullshitManagerComponent* CallFunc_GetOwningBullshitManager_ReturnValue, class UWorldBullshitManager_C* K2Node_DynamicCast_AsWorld_Bullshit_Manager, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_WorldLocation, const struct FRotator& K2Node_CustomEvent_Rotation, class UClass* K2Node_CustomEvent_SummonClass, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UQtnBullshitManagerComponent* CallFunc_GetOwningBullshitManager_ReturnValue_1, class AActor* CallFunc_SpawnActor_ServerOnly_ReturnValue, class UWorldBullshitManager_C* K2Node_DynamicCast_AsWorld_Bullshit_Manager_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnPlayerPawnArchetype_C* K2Node_DynamicCast_AsQtn_Player_Pawn_Archetype, bool K2Node_DynamicCast_bSuccess_2);
};

}


