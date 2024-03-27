#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x190 - 0x188)
// BlueprintGeneratedClass CheatSuperSize.CheatSuperSize_C
class UCheatSuperSize_C : public UQtnCheatBPBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x188(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCheatSuperSize_C* GetDefaultObj();

	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_CheatSuperSize(int32 EntryPoint, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue_1, float K2Node_Event_DeltaSeconds, class UFTUXDataBag_C* CallFunc_GetLocalProgressDataBag_ReturnValue, const struct FQtnReplicatedSaveData& CallFunc_GetReplicatedEnemyBSSaveData_ServerOnly_combinedReplicatedSaveData);
};

}


