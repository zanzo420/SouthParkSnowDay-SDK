#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA08 - 0x9F0)
// BlueprintGeneratedClass Kenny_Splash_Flare_Verb.Kenny_Splash_Flare_Verb_C
class UKenny_Splash_Flare_Verb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AKenny_Splash_Flare_BP_C*              R_lastSplashFlare;                                 // 0x9F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UKenny_Rainbow_Verb_C*                 KennyRainbowVerb;                                  // 0xA00(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKenny_Splash_Flare_Verb_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void InitSplashFlare(class AKenny_Splash_Flare_BP_C*& SplashFlare, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue);
	void OnRep_r_lastSplashFlare();
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_Kenny_Splash_Flare_Verb(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, class AKenny_Splash_Flare_BP_C* CallFunc_SpawnActor_ServerOnly_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_3, class UKenny_Rainbow_Verb_C* CallFunc_GetExistingVerb_ReturnValue);
};

}


