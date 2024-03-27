#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x140 - 0x134)
// BlueprintGeneratedClass StatusEffect_Hover_Vampire.StatusEffect_Hover_Vampire_C
class UStatusEffect_Hover_Vampire_C : public UStatusEffect_Hover_C
{
public:
	uint8                                        Pad_4795[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x138(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusEffect_Hover_Vampire_C* GetDefaultObj();

	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void ExecuteUbergraph_StatusEffect_Hover_Vampire(int32 EntryPoint, float CallFunc_GetRandomValue_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool CallFunc_IsServer_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue);
};

}


