#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Trampoline_Platform.BP_Trampoline_Platform_C
// (Actor)

class UClass* ABP_Trampoline_Platform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Trampoline_Platform_C");

	return Clss;
}


// BP_Trampoline_Platform_C BP_Trampoline_Platform.Default__BP_Trampoline_Platform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Trampoline_Platform_C* ABP_Trampoline_Platform_C::GetDefaultObj()
{
	static class ABP_Trampoline_Platform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Trampoline_Platform_C*>(ABP_Trampoline_Platform_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.LOCAL_UpdateToggleVis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Trampoline_Platform_C::LOCAL_UpdateToggleVis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "LOCAL_UpdateToggleVis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Trampoline_Platform_C::UserConstructionScript(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "UserConstructionScript");

	Params::ABP_Trampoline_Platform_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.BounceAnim__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Trampoline_Platform_C::BounceAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "BounceAnim__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.BounceAnim__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Trampoline_Platform_C::BounceAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "BounceAnim__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.BounceFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Trampoline_Platform_C::BounceFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "BounceFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Trampoline_Platform.BP_Trampoline_Platform_C.ExecuteUbergraph_BP_Trampoline_Platform
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Trampoline_Platform_C::ExecuteUbergraph_BP_Trampoline_Platform(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Trampoline_Platform_C", "ExecuteUbergraph_BP_Trampoline_Platform");

	Params::ABP_Trampoline_Platform_C_ExecuteUbergraph_BP_Trampoline_Platform_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


