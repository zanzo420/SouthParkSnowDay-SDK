#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x284 - 0x260)
// BlueprintGeneratedClass QtnNitroSunlight.QtnNitroSunlight_C
class AQtnNitroSunlight_C : public ADirectionalLight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDirectionalLightComponent*            BackdropLight;                                     // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          StartingLightColor;                                // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartingIntensity;                                 // 0x280(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AQtnNitroSunlight_C* GetDefaultObj();

	void UserConstructionScript(const struct FLinearColor& CallFunc_GetLightColor_ReturnValue);
	void SetColor(const struct FLinearColor& Color);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_QtnNitroSunlight(int32 EntryPoint, bool CallFunc_UseSwitchQuality_ReturnValue, const struct FLinearColor& K2Node_CustomEvent_Color, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UDirectionalLightComponent* K2Node_DynamicCast_AsDirectional_Light_Component, bool K2Node_DynamicCast_bSuccess_1);
};

}


