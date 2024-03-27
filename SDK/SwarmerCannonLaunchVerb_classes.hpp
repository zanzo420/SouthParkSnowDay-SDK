#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xA00 - 0x9F0)
// BlueprintGeneratedClass SwarmerCannonLaunchVerb.SwarmerCannonLaunchVerb_C
class USwarmerCannonLaunchVerb_C : public UQtnVerb_Archetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         VerbDone;                                          // 0x9F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_101E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Launchtimer;                                       // 0x9FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USwarmerCannonLaunchVerb_C* GetDefaultObj();

	bool AllowOtherVerbToInterrupt(class UQtnVerb* OtherVerb);
	bool IsVerbFinished();
	bool CanVerbStart(class UObject* PotentialTarget);
	void OnVerbStart(class UObject* IntendedTarget, bool IsServer);
	void OnActiveVerbTicked(struct FQtnPawnIntentions& PawnIntentions, float DeltaSeconds, float ElapsedTime, bool IsServer);
	void OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer);
	void ExecuteUbergraph_SwarmerCannonLaunchVerb(int32 EntryPoint, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_StartVerbAction_ReturnValue, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer_2, const struct FQtnPawnIntentions& K2Node_Event_pawnIntentions, float K2Node_Event_DeltaSeconds, float K2Node_Event_elapsedTime, bool K2Node_Event_isServer_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


