#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x160 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionBase.BodyDamageReactionBase_C
class UBodyDamageReactionBase_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnBase_C*                       VictimBodyPawnBase;                                // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBodyDamageReactionBase_C* GetDefaultObj();

	void AdjustFillDurationFromEscapePerk(class UPerk_Escape_C* EscapePerk, float CallFunc_Get_Calculated_Grab_Duration_Multiplier_multiplier, bool CallFunc_IsValid_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class UPerk_Escape_C* CallFunc_FindPerk_ReturnValue);
	void RefreshLocalUIFillRatio(float FillRatio, float FadeDuration, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class AQtnPlayerUI* CallFunc_GetOccupyingPlayerUI_ReturnValue, class AQtnPlayerUIArchetype_C* K2Node_DynamicCast_AsQtn_Player_UIArchetype, bool K2Node_DynamicCast_bSuccess);
	void OnInitReaction(class UQtnFullBodyStateHitReaction* HitReactionBodyState);
	void ExecuteUbergraph_BodyDamageReactionBase(int32 EntryPoint, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, class UQtnFullBodyStateHitReaction* K2Node_Event_hitReactionBodyState);
};

}


