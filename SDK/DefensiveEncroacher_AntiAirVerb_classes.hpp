#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x9F9 - 0x9F0)
// BlueprintGeneratedClass DefensiveEncroacher_AntiAirVerb.DefensiveEncroacher_AntiAirVerb_C
class UDefensiveEncroacher_AntiAirVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Verb_Done;                                         // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDefensiveEncroacher_AntiAirVerb_C* GetDefaultObj();

	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void ExecuteUbergraph_DefensiveEncroacher_AntiAirVerb(int32 EntryPoint, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_2, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_1, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer);
};

}


