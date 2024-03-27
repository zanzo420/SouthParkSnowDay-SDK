#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x330 - 0x31C)
// BlueprintGeneratedClass TotemDamageReceptor.TotemDamageReceptor_C
class UTotemDamageReceptor_C : public UDamageReceptorArchetype_C
{
public:
	uint8                                        Pad_50F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ATotemBase_C*                          OwningTotem;                                       // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTotemDamageReceptor_C* GetDefaultObj();

	bool ShouldAttractAimAssist(class AQtnPawn* AttackingPawn, bool FromCollateralDamage, bool CallFunc_CanHarmThisTotem_canHarm);
	void CanHarmThisTotem(class AQtnPawn*& Culprit, bool* CanHarm, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsAlly_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanHarmThisTotem_canHarm, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TotemDamageReceptor(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ATotemBase_C* K2Node_DynamicCast_AsTotem_Base, bool K2Node_DynamicCast_bSuccess);
};

}


