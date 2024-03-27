#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_BossStan_Phase3.Cine_BossStan_Phase3_C
// (Actor)

class UClass* ACine_BossStan_Phase3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_BossStan_Phase3_C");

	return Clss;
}


// Cine_BossStan_Phase3_C Cine_BossStan_Phase3.Default__Cine_BossStan_Phase3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_BossStan_Phase3_C* ACine_BossStan_Phase3_C::GetDefaultObj()
{
	static class ACine_BossStan_Phase3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_BossStan_Phase3_C*>(ACine_BossStan_Phase3_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.EndScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_BossStan_Phase3_C::EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_BossStan_Phase3_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_BossStan_Phase3_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_BossStan_Phase3_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_BossStan_Phase3_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_BossStan_Phase3.Cine_BossStan_Phase3_C.ExecuteUbergraph_Cine_BossStan_Phase3
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_BossStan_Phase3_C::ExecuteUbergraph_Cine_BossStan_Phase3(int32 EntryPoint, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_BossStan_Phase3_C", "ExecuteUbergraph_Cine_BossStan_Phase3");

	Params::ACine_BossStan_Phase3_C_ExecuteUbergraph_Cine_BossStan_Phase3_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


