#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cine_ElvesVsHumans.Cine_ElvesVsHumans_C
// (Actor)

class UClass* ACine_ElvesVsHumans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cine_ElvesVsHumans_C");

	return Clss;
}


// Cine_ElvesVsHumans_C Cine_ElvesVsHumans.Default__Cine_ElvesVsHumans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACine_ElvesVsHumans_C* ACine_ElvesVsHumans_C::GetDefaultObj()
{
	static class ACine_ElvesVsHumans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACine_ElvesVsHumans_C*>(ACine_ElvesVsHumans_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cine_ElvesVsHumans.Cine_ElvesVsHumans_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACine_ElvesVsHumans_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ElvesVsHumans_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cine_ElvesVsHumans.Cine_ElvesVsHumans_C.ExecuteUbergraph_Cine_ElvesVsHumans
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACine_ElvesVsHumans_C::ExecuteUbergraph_Cine_ElvesVsHumans(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cine_ElvesVsHumans_C", "ExecuteUbergraph_Cine_ElvesVsHumans");

	Params::ACine_ElvesVsHumans_C_ExecuteUbergraph_Cine_ElvesVsHumans_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


