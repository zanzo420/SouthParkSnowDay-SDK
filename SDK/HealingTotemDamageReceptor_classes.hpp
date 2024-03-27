#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x330 - 0x31C)
// BlueprintGeneratedClass HealingTotemDamageReceptor.HealingTotemDamageReceptor_C
class UHealingTotemDamageReceptor_C : public UDamageReceptorArchetype_C
{
public:
	uint8                                        Pad_3BE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AHealingTotem_C*                       OwningHealingTotem;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHealingTotemDamageReceptor_C* GetDefaultObj();

	bool ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, bool CallFunc_CanHarmThisTotem_canHarm);
	void CanHarmThisTotem(class AQtnPawn*& Culprit, bool* CanHarm, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, bool CallFunc_IsServer_ReturnValue, bool CallFunc_CanHarmThisTotem_canHarm, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_HealingTotemDamageReceptor(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AHealingTotem_C* K2Node_DynamicCast_AsHealing_Totem, bool K2Node_DynamicCast_bSuccess);
};

}


