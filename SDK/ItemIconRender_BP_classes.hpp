#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x298 - 0x250)
// BlueprintGeneratedClass ItemIconRender_BP.ItemIconRender_BP_C
class AItemIconRender_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight1;                                       // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       WeaponPlacement;                                   // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x278(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                Target;                                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ShowActors;                                        // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AItemIconRender_BP_C* GetDefaultObj();

	void CreateIconTexture(class AQtnItem* QtnItem, const struct FQtnItemData& ItemData, class UTextureRenderTarget2D** OutTexture, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FBoxSphereBounds& CallFunc_GenerateWeaponForIcon_bounds);
	void ReceiveBeginPlay();
	void TakeSnapshot();
	void ExecuteUbergraph_ItemIconRender_BP(int32 EntryPoint, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


