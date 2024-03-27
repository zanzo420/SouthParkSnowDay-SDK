#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_LianeIntro_Church.Cine_LianeIntro_Church_C
// (Actor)

class UClass* ACine_LianeIntro_Church_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_LianeIntro_Church_C");

	return Clss;
}


// Cine_LianeIntro_Church_C Cine_LianeIntro_Church.Default__Cine_LianeIntro_Church_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_LianeIntro_Church_C* ACine_LianeIntro_Church_C::GetDefaultObj()
{
	static class ACine_LianeIntro_Church_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_LianeIntro_Church_C*>(ACine_LianeIntro_Church_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_LianeIntro_Church.Cine_LianeIntro_Church_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_LianeIntro_Church_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_LianeIntro_Church_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_LianeIntro_Church.Cine_LianeIntro_Church_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_LianeIntro_Church_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_LianeIntro_Church_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_LianeIntro_Church.Cine_LianeIntro_Church_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_LianeIntro_Church_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_LianeIntro_Church_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_LianeIntro_Church.Cine_LianeIntro_Church_C.ExecuteUbergraph_Cine_LianeIntro_Church
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACartman_Actor_BP_C*         K2Node_DynamicCast_AsCartman_Actor_BP                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_LianeIntro_Church_C::ExecuteUbergraph_Cine_LianeIntro_Church(int32 EntryPoint, class UClass* Temp_class_Variable, const struct FTransform& Temp_struct_Variable, class UClass* Temp_class_Variable_1, bool K2Node_SwitchInteger_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNiagaraComponent* CallFunc_AddComponent_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class ACartman_Actor_BP_C* K2Node_DynamicCast_AsCartman_Actor_BP, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_LianeIntro_Church_C", "ExecuteUbergraph_Cine_LianeIntro_Church");

	Params::ACine_LianeIntro_Church_C_ExecuteUbergraph_Cine_LianeIntro_Church_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCartman_Actor_BP = K2Node_DynamicCast_AsCartman_Actor_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


