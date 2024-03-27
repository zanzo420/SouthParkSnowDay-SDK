#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xA64 - 0xA58)
// BlueprintGeneratedClass EnemyCheat_LaserSwordSwipe.EnemyCheat_LaserSwordSwipe_C
class UEnemyCheat_LaserSwordSwipe_C : public UMeleeVerbSwarmerDaggerSwipe_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Damage_Multiplier_for_Cheat;                       // 0xA60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyCheat_LaserSwordSwipe_C* GetDefaultObj();

	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	float GetDamageValue(class AActor* VictimActor, float* BaseDamage, float DamageMultiplier, float CallFunc_GetDamageValue_baseDamage, float CallFunc_GetDamageValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void ExecuteUbergraph_EnemyCheat_LaserSwordSwipe(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess);
};

}


