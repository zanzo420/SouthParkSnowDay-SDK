#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xE4 - 0xD0)
// BlueprintGeneratedClass FullBodyLocomotion.FullBodyLocomotion_C
class UFullBodyLocomotion_C : public UQtnFullBodyStateLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        boredTimer;                                        // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       BoredInterval;                                     // 0xDC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UFullBodyLocomotion_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void OnEnterBodyState(class UQtnBodyState* PreviousBodyState);
	void OnTickBodyState(float DeltaSeconds);
	void ExecuteUbergraph_FullBodyLocomotion(int32 EntryPoint, float CallFunc_GetRandomValue_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UQtnBodyState* K2Node_Event_previousBodyState, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetLastMovementInputVector_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Vector_IsNearlyZero_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_GetRandomValue_ReturnValue_1, float CallFunc_GetRandomValue_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1);
};

}


