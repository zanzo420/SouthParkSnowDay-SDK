#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x15E0 - 0x15D0)
// BlueprintGeneratedClass BodyPawn_CartmanBase.BodyPawn_CartmanBase_C
class ABodyPawn_CartmanBase_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawn_CartmanBase_C* GetDefaultObj();

	void CanAcceptEnemyUpgrades(bool* Accept);
	void OnQtnTeleport_Event_0(const struct FVector& OldLocation, const struct FRotator& OldRotation, const struct FVector& NewLocation, const struct FRotator& NewRotation);
	void OnQtnReadyForGameplay();
	void ExecuteUbergraph_BodyPawn_CartmanBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& K2Node_CustomEvent_oldLocation, const struct FRotator& K2Node_CustomEvent_oldRotation, const struct FVector& K2Node_CustomEvent_newLocation, const struct FRotator& K2Node_CustomEvent_newRotation, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


