#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x924 - 0x914)
// BlueprintGeneratedClass EnemyDoOverActivationVerb.EnemyDoOverActivationVerb_C
class UEnemyDoOverActivationVerb_C : public UEnemyCheatActivationVerbBase_C
{
public:
	uint8                                        Pad_69C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x918(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Max_Resurrection_Distance;                         // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyDoOverActivationVerb_C* GetDefaultObj();

	void GetEnemiesToRevive(class AQtnGameState* GameState, class AQtnBodyPawn* Bullshitter, TArray<class AQtnBodyPawn*>* EnemiesToRevive, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void ApplyBullshitToBodyPawn_ServerOnly(class AQtnGameState* ActiveGameState, class AQtnBodyPawn* Bullshitter, const TArray<class ASkirmishBase_C*>& LOCAL_SkirmishesFound, int32 Temp_int_Array_Index_Variable, TArray<class AQtnBodyPawn*>& CallFunc_GetEnemiesToRevive_EnemiesToRevive, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AQtnPawn* CallFunc_Array_Get_Item, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AQtnSkirmish* CallFunc_GetOwningSkirmish_ReturnValue, class ASkirmishBase_C* K2Node_DynamicCast_AsSkirmish_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ASkirmishBase_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void GatherValidBullshitCamTargets_ServerOnly(class AQtnGameState* ActiveGameState, TArray<class AQtnBodyPawn*>* ValidCamTargets, const TArray<class AQtnBodyPawn*>& PotentialTargets, int32 Temp_int_Array_Index_Variable, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class ABodyPawnAI_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AQtnPawn*>& CallFunc_GatherPawnsWithinRadius_pawns, int32 CallFunc_Array_Length_ReturnValue, class AQtnPawn* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsPawnOnNavMesh_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue);
	void ReviveDeadEnemy_ServerOnly(class AQtnBodyPawn* PawnToRevive, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDamageReceptorBodyPawn_C* K2Node_DynamicCast_AsDamage_Receptor_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_EnemyDoOverActivationVerb(int32 EntryPoint, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer);
};

}


