#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7E (0x408 - 0x38A)
// BlueprintGeneratedClass IkeActor_FTUXTied.IkeActor_FTUXTied_C
class AIkeActor_FTUXTied_C : public AIkeActor_FTUX_C
{
public:
	uint8                                        Pad_7537[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x398(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Ropes;                                             // 0x3A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            IkeFartedOn;                                       // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FQtnStruct_VOLine                     VO_FartReacts;                                     // 0x3B8(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7538[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnStruct_VOLine                     VO_MeleeReacts;                                    // 0x3E0(0x25)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7539[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AIkeActor_FTUXTied_C* GetDefaultObj();

	void BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ReceiveBeginPlay();
	void BndEvt__IkeActor_FTUXTied_DamageReceptorSmashable_K2Node_ComponentBoundEvent_1_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer);
	void ExecuteUbergraph_IkeActor_FTUXTied(int32 EntryPoint, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UIkeRopes_RIG_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsIke_Ropes_RIG_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void IkeFartedOn__DelegateSignature();
};

}


