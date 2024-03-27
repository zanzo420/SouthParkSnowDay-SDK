#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x2EC - 0x2E0)
// BlueprintGeneratedClass BasicDoor.BasicDoor_C
class ABasicDoor_C : public AQtnDoor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DoorAnimationRatio;                                // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABasicDoor_C* GetDefaultObj();

	void AnimateDoorState(bool IsOpen, float Ratio);
	void HandleDoorStateChange(bool CallFunc_IsDoorClosed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetEnabledForNPCs(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue);
	void SetEnabledForPlayers(bool Enabled, bool CallFunc_Not_PreBool_ReturnValue);
	void OnLogicalDoorStateChange(enum class EQtnDoorState PreviousLogicalState, enum class EQtnDoorState NewLogicalState, class AQtnPawn* UsingPawn);
	void QtnToggleDoor();
	void ExecuteUbergraph_BasicDoor(int32 EntryPoint, bool Temp_bool_Variable, enum class EQtnDoorState Temp_byte_Variable, enum class EQtnDoorState Temp_byte_Variable_1, enum class EQtnDoorState K2Node_Event_previousLogicalState, enum class EQtnDoorState K2Node_Event_newLogicalState, class AQtnPawn* K2Node_Event_usingPawn, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_RandomBool_ReturnValue, enum class EQtnDoorState K2Node_Select_Default);
};

}


