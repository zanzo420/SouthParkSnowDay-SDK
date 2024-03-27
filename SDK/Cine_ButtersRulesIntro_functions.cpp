#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_ButtersRulesIntro.Cine_ButtersRulesIntro_C
// (Actor)

class UClass* ACine_ButtersRulesIntro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_ButtersRulesIntro_C");

	return Clss;
}


// Cine_ButtersRulesIntro_C Cine_ButtersRulesIntro.Default__Cine_ButtersRulesIntro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_ButtersRulesIntro_C* ACine_ButtersRulesIntro_C::GetDefaultObj()
{
	static class ACine_ButtersRulesIntro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_ButtersRulesIntro_C*>(ACine_ButtersRulesIntro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_ButtersRulesIntro.Cine_ButtersRulesIntro_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_ButtersRulesIntro_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ButtersRulesIntro_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_ButtersRulesIntro.Cine_ButtersRulesIntro_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_ButtersRulesIntro_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ButtersRulesIntro_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_ButtersRulesIntro.Cine_ButtersRulesIntro_C.ExecuteUbergraph_Cine_ButtersRulesIntro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACine_ButtersRulesIntro_C::ExecuteUbergraph_Cine_ButtersRulesIntro(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ButtersRulesIntro_C", "ExecuteUbergraph_Cine_ButtersRulesIntro");

	Params::ACine_ButtersRulesIntro_C_ExecuteUbergraph_Cine_ButtersRulesIntro_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


