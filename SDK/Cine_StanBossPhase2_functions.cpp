#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_StanBossPhase2.Cine_StanBossPhase2_C
// (Actor)

class UClass* ACine_StanBossPhase2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_StanBossPhase2_C");

	return Clss;
}


// Cine_StanBossPhase2_C Cine_StanBossPhase2.Default__Cine_StanBossPhase2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_StanBossPhase2_C* ACine_StanBossPhase2_C::GetDefaultObj()
{
	static class ACine_StanBossPhase2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_StanBossPhase2_C*>(ACine_StanBossPhase2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.EndScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossPhase2_C::EndScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "EndScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.CleanUpCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossPhase2_C::CleanUpCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "CleanUpCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossPhase2_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACine_StanBossPhase2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_StanBossPhase2_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_StanBossPhase2.Cine_StanBossPhase2_C.ExecuteUbergraph_Cine_StanBossPhase2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AStan_Actor_Axe_BP_C*        K2Node_DynamicCast_AsStan_Actor_Axe_BP                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AStan_Actor_Axe_BP_C*        K2Node_DynamicCast_AsStan_Actor_Axe_BP_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACine_StanBossPhase2_C::ExecuteUbergraph_Cine_StanBossPhase2(int32 EntryPoint, class UClass* Temp_class_Variable, bool K2Node_SwitchInteger_CmpSuccess, class UClass* Temp_class_Variable_1, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AStan_Actor_Axe_BP_C* K2Node_DynamicCast_AsStan_Actor_Axe_BP, bool K2Node_DynamicCast_bSuccess, class AStan_Actor_Axe_BP_C* K2Node_DynamicCast_AsStan_Actor_Axe_BP_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_StanBossPhase2_C", "ExecuteUbergraph_Cine_StanBossPhase2");

	Params::ACine_StanBossPhase2_C_ExecuteUbergraph_Cine_StanBossPhase2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStan_Actor_Axe_BP = K2Node_DynamicCast_AsStan_Actor_Axe_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStan_Actor_Axe_BP_1 = K2Node_DynamicCast_AsStan_Actor_Axe_BP_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


