#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Cinematic_ShizaIntro.Cinematic_ShizaIntro_C
// (Actor)

class UClass* ACinematic_ShizaIntro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cinematic_ShizaIntro_C");

	return Clss;
}


// Cinematic_ShizaIntro_C Cinematic_ShizaIntro.Default__Cinematic_ShizaIntro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACinematic_ShizaIntro_C* ACinematic_ShizaIntro_C::GetDefaultObj()
{
	static class ACinematic_ShizaIntro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACinematic_ShizaIntro_C*>(ACinematic_ShizaIntro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Cinematic_ShizaIntro.Cinematic_ShizaIntro_C.PlayNextShot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_ShizaIntro_C::PlayNextShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaIntro_C", "PlayNextShot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_ShizaIntro.Cinematic_ShizaIntro_C.PostFadeStartScene
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ACinematic_ShizaIntro_C::PostFadeStartScene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaIntro_C", "PostFadeStartScene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Cinematic_ShizaIntro.Cinematic_ShizaIntro_C.ExecuteUbergraph_Cinematic_ShizaIntro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPaperDoll_BP_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScriptedSkeletalActor_Trial_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACinematic_ShizaIntro_C::ExecuteUbergraph_Cinematic_ShizaIntro(int32 EntryPoint, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchInteger_CmpSuccess, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_2, class APlayerPaperDoll_BP_C* CallFunc_Array_Get_Item_3, class UClass* Temp_class_Variable, class AScriptedSkeletalActor_Trial_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Cinematic_ShizaIntro_C", "ExecuteUbergraph_Cinematic_ShizaIntro");

	Params::ACinematic_ShizaIntro_C_ExecuteUbergraph_Cinematic_ShizaIntro_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


