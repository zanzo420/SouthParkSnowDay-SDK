#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamPlayerStatus_Widget.TeamPlayerStatus_Widget_C
// (None)

class UClass* UTeamPlayerStatus_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamPlayerStatus_Widget_C");

	return Clss;
}


// TeamPlayerStatus_Widget_C TeamPlayerStatus_Widget.Default__TeamPlayerStatus_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamPlayerStatus_Widget_C* UTeamPlayerStatus_Widget_C::GetDefaultObj()
{
	static class UTeamPlayerStatus_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamPlayerStatus_Widget_C*>(UTeamPlayerStatus_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamPlayerStatus_Widget.TeamPlayerStatus_Widget_C.AnimationDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTeamPlayerStatus_Widget_C::AnimationDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerStatus_Widget_C", "AnimationDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TeamPlayerStatus_Widget.TeamPlayerStatus_Widget_C.ExecuteUbergraph_TeamPlayerStatus_Widget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamPlayerStatus_Widget_C::ExecuteUbergraph_TeamPlayerStatus_Widget(int32 EntryPoint, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamPlayerStatus_Widget_C", "ExecuteUbergraph_TeamPlayerStatus_Widget");

	Params::UTeamPlayerStatus_Widget_C_ExecuteUbergraph_TeamPlayerStatus_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


