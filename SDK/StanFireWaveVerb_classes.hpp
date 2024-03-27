#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xA28 - 0x9F0)
// BlueprintGeneratedClass StanFireWaveVerb.StanFireWaveVerb_C
class UStanFireWaveVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ADragon_BP_C*                          Dragon;                                            // 0x9F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnPawnMontage                       Verb_Action;                                       // 0xA00(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Verb_Done;                                         // 0xA10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63E4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       Verb_Action_Randy;                                 // 0xA18(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UStanFireWaveVerb_C* GetDefaultObj();

	bool CanVerbStart(class UObject* PotentialTarget, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, bool CallFunc_CanVerbStart_ReturnValue, class ABodypawnAIStanBoss_C* K2Node_DynamicCast_AsBodypawn_AIStan_Boss, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsVerbFinished();
	void GetDragon(bool* Found_dragon, bool CallFunc_IsValid_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class ADragon_BP_C* K2Node_DynamicCast_AsDragon_BP, bool K2Node_DynamicCast_bSuccess_1);
	void OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_StanFireWaveVerb(int32 EntryPoint, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_4, float CallFunc_StartVerbAction_ReturnValue, class UAnimNotify_FireProjectile_C* K2Node_DynamicCast_AsAnim_Notify_Fire_Projectile, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_3, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnAIRandyBoss_C* K2Node_DynamicCast_AsBody_Pawn_AIRandy_Boss, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_StartVerbAction_ReturnValue_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class ABodypawnAIStanBoss_C* K2Node_DynamicCast_AsBodypawn_AIStan_Boss, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer);
};

}


