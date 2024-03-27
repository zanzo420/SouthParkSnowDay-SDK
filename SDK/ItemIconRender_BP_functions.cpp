#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemIconRender_BP.ItemIconRender_BP_C
// (Actor)

class UClass* AItemIconRender_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemIconRender_BP_C");

	return Clss;
}


// ItemIconRender_BP_C ItemIconRender_BP.Default__ItemIconRender_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AItemIconRender_BP_C* AItemIconRender_BP_C::GetDefaultObj()
{
	static class AItemIconRender_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AItemIconRender_BP_C*>(AItemIconRender_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemIconRender_BP.ItemIconRender_BP_C.CreateIconTexture
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    QtnItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTextureRenderTarget2D*      OutTexture                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBoxSphereBounds            CallFunc_GenerateWeaponForIcon_bounds                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AItemIconRender_BP_C::CreateIconTexture(class AQtnItem* QtnItem, const struct FQtnItemData& ItemData, class UTextureRenderTarget2D** OutTexture, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, const struct FBoxSphereBounds& CallFunc_GenerateWeaponForIcon_bounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemIconRender_BP_C", "CreateIconTexture");

	Params::AItemIconRender_BP_C_CreateIconTexture_Params Parms{};

	Parms.QtnItem = QtnItem;
	Parms.ItemData = ItemData;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_GenerateWeaponForIcon_bounds = CallFunc_GenerateWeaponForIcon_bounds;

	UObject::ProcessEvent(Func, &Parms);

	if (OutTexture != nullptr)
		*OutTexture = Parms.OutTexture;

}


// Function ItemIconRender_BP.ItemIconRender_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemIconRender_BP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemIconRender_BP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemIconRender_BP.ItemIconRender_BP_C.TakeSnapshot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AItemIconRender_BP_C::TakeSnapshot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemIconRender_BP_C", "TakeSnapshot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemIconRender_BP.ItemIconRender_BP_C.ExecuteUbergraph_ItemIconRender_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemIconRender_BP_C::ExecuteUbergraph_ItemIconRender_BP(int32 EntryPoint, class UTextureRenderTarget2D* CallFunc_CreateRenderTarget2D_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemIconRender_BP_C", "ExecuteUbergraph_ItemIconRender_BP");

	Params::AItemIconRender_BP_C_ExecuteUbergraph_ItemIconRender_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateRenderTarget2D_ReturnValue = CallFunc_CreateRenderTarget2D_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


