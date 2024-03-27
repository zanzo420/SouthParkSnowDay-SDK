#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x14C - 0x130)
// BlueprintGeneratedClass BowModalCam.BowModalCam_C
class UBowModalCam_C : public UQtnCameraBehaviorAim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CurrentFOV;                                        // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntendedFOV;                                       // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Charging_FOV;                                      // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ZoomFOV;                                           // 0x144(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NonZoomFOV;                                        // 0x148(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBowModalCam_C* GetDefaultObj();

	void OnCameraBehaviorTick(float DeltaSeconds);
	void OnCameraBehaviorInit();
	void ExecuteUbergraph_BowModalCam(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_Event_DeltaSeconds, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, class UVerb_Bow_Sniper_C* CallFunc_GetExistingVerb_ReturnValue, float CallFunc_GetTotalHoldTime_OutHoldTimeSeconds, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_Ease_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess);
};

}


