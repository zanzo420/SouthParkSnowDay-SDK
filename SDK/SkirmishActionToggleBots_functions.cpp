#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkirmishActionToggleBots.SkirmishActionToggleBots_C
// (None)

class UClass* USkirmishActionToggleBots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkirmishActionToggleBots_C");

	return Clss;
}


// SkirmishActionToggleBots_C SkirmishActionToggleBots.Default__SkirmishActionToggleBots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkirmishActionToggleBots_C* USkirmishActionToggleBots_C::GetDefaultObj()
{
	static class USkirmishActionToggleBots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkirmishActionToggleBots_C*>(USkirmishActionToggleBots_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SkirmishActionToggleBots.SkirmishActionToggleBots_C.ExecuteSkirmishAction
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AQtnSkirmish*                OwningSkirmish                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnSkirmishTrigger*         OwningTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAllyBotManager*          CallFunc_GetAllyBotManager_ServerOnly_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkirmishActionToggleBots_C::ExecuteSkirmishAction(class AQtnSkirmish* OwningSkirmish, class UQtnSkirmishTrigger* OwningTrigger, class UQtnAllyBotManager* CallFunc_GetAllyBotManager_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkirmishActionToggleBots_C", "ExecuteSkirmishAction");

	Params::USkirmishActionToggleBots_C_ExecuteSkirmishAction_Params Parms{};

	Parms.OwningSkirmish = OwningSkirmish;
	Parms.OwningTrigger = OwningTrigger;
	Parms.CallFunc_GetAllyBotManager_ServerOnly_ReturnValue = CallFunc_GetAllyBotManager_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


