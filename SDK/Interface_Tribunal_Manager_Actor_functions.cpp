#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C
// (None)

class UClass* IInterface_Tribunal_Manager_Actor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Interface_Tribunal_Manager_Actor_C");

	return Clss;
}


// Interface_Tribunal_Manager_Actor_C Interface_Tribunal_Manager_Actor.Default__Interface_Tribunal_Manager_Actor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IInterface_Tribunal_Manager_Actor_C* IInterface_Tribunal_Manager_Actor_C::GetDefaultObj()
{
	static class IInterface_Tribunal_Manager_Actor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IInterface_Tribunal_Manager_Actor_C*>(IInterface_Tribunal_Manager_Actor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.OnTribunalUpgradeChoice_Local
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Tribunal_Manager_Actor_C::OnTribunalUpgradeChoice_Local()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Tribunal_Manager_Actor_C", "OnTribunalUpgradeChoice_Local");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.DoEventChoiceConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           ChoosingPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInterface_Tribunal_Manager_Actor_C::DoEventChoiceConfirmed(int32 ChoiceIndex, class ABodyPawnPlayer_C* ChoosingPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Tribunal_Manager_Actor_C", "DoEventChoiceConfirmed");

	Params::IInterface_Tribunal_Manager_Actor_C_DoEventChoiceConfirmed_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;
	Parms.ChoosingPlayer = ChoosingPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.DoAdvanceSequenceServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IInterface_Tribunal_Manager_Actor_C::DoAdvanceSequenceServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Tribunal_Manager_Actor_C", "DoAdvanceSequenceServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Interface_Tribunal_Manager_Actor.Interface_Tribunal_Manager_Actor_C.DoGetRunInEditor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RunInEditor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInterface_Tribunal_Manager_Actor_C::DoGetRunInEditor(bool* RunInEditor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Interface_Tribunal_Manager_Actor_C", "DoGetRunInEditor");

	Params::IInterface_Tribunal_Manager_Actor_C_DoGetRunInEditor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RunInEditor != nullptr)
		*RunInEditor = Parms.RunInEditor;

}

}


