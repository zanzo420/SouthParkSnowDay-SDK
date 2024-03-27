#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x128 - 0x120)
// BlueprintGeneratedClass StatusEffect_ShitMeteorDmgImmunity.StatusEffect_ShitMeteorDmgImmunity_C
class UStatusEffect_ShitMeteorDmgImmunity_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusEffect_ShitMeteorDmgImmunity_C* GetDefaultObj();

	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_ShitMeteorDmgImmunity(int32 EntryPoint, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


