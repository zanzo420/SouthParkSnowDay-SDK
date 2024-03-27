#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x1C4 - 0x194)
// BlueprintGeneratedClass FullBodyDead_Player.FullBodyDead_Player_C
class UFullBodyDead_Player_C : public UFullBodyDead_C
{
public:
	uint8                                        Pad_4EAF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                CameraBehavior;                                    // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  TootMontages;                                      // 0x1A8(0x10)(Edit, BlueprintVisible)
	bool                                         WaitingForTootRelease;                             // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnRangedFloat                       TootRange;                                         // 0x1BC(0x8)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass();
	static class UFullBodyDead_Player_C* GetDefaultObj();

	void OnEnterBodyState(class UQtnBodyState* PreviousBodyState);
	void OnExitBodyState(TSubclassOf<class UQtnBodyState> NextBodyStateClass);
	void OnTickBodyState(float DeltaSeconds);
	void ExecuteUbergraph_FullBodyDead_Player(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnBodyState* K2Node_Event_previousBodyState, TSubclassOf<class UQtnBodyState> K2Node_Event_nextBodyStateClass, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnCameraBehavior* CallFunc_RequestCameraBehavior_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_3, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, bool CallFunc_IsBodyActionPressed_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayDeathMontage_ReturnValue, bool CallFunc_IsPlayingDeathMontage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_4, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_5, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue);
};

}


