#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x148 - 0x138)
// BlueprintGeneratedClass ChillingAuraComponent.ChillingAuraComponent_C
class UChillingAuraComponent_C : public UBaseAuraComponent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBattlefieldTrackingComponent_C*       CachedBattlefieldTrackingComponent;                // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChillingAuraComponent_C* GetDefaultObj();

	void ApplyEffectToRelevantActors(const TArray<class AActor*>& LOCAL_RelevantActors, TArray<class AQtnPawn*>& CallFunc_GetPlayerAndAllyPawns_PlayerAndAllyPawns, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void RemoveAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody);
	void ApplyAuraEffect_ServerOnly(class ABodyPawnBase_C*& VictimBody);
	void Setup_Aura_ServerOnly();
	void ReceiveTick(float DeltaSeconds);
	void ApplyEffectToRelevantActors_ServerOnly();
	void ApplyEffect(class AQtnPawn* Target);
	void RemoveEffect(class AQtnPawn* Target);
	void ExecuteUbergraph_ChillingAuraComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Square_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class AQtnPawn* K2Node_Event_Target_1, class AQtnPawn* K2Node_Event_Target);
};

}


