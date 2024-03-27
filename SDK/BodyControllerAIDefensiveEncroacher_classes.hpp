#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB (0x688 - 0x67D)
// BlueprintGeneratedClass BodyControllerAIDefensiveEncroacher.BodyControllerAIDefensiveEncroacher_C
class ABodyControllerAIDefensiveEncroacher_C : public ABodyControllerAI_C
{
public:
	uint8                                        Pad_4E72[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x680(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABodyControllerAIDefensiveEncroacher_C* GetDefaultObj();

	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAIDefensiveEncroacher(int32 EntryPoint, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, class UQtnAIJobRole* CallFunc_GetAIJobRole_ReturnValue, bool CallFunc_CanInterruptPathFollowing_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, float K2Node_Event_timeSinceLastThought, bool CallFunc_Array_Contains_ReturnValue, class AQtnPawn* CallFunc_GetRelevantEnemy_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, bool CallFunc_IsValid_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, class AQtnItem* CallFunc_GetActualEquippedItem_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


