#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAIBombardier_Marshwalker.BodyPawnAIBombardier_Marshwalker_C
// (Actor, Pawn)

class UClass* ABodyPawnAIBombardier_Marshwalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAIBombardier_Marshwalker_C");

	return Clss;
}


// BodyPawnAIBombardier_Marshwalker_C BodyPawnAIBombardier_Marshwalker.Default__BodyPawnAIBombardier_Marshwalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAIBombardier_Marshwalker_C* ABodyPawnAIBombardier_Marshwalker_C::GetDefaultObj()
{
	static class ABodyPawnAIBombardier_Marshwalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAIBombardier_Marshwalker_C*>(ABodyPawnAIBombardier_Marshwalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAIBombardier_Marshwalker.BodyPawnAIBombardier_Marshwalker_C.AlivenessEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIBombardier_Marshwalker_C::AlivenessEvent(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIBombardier_Marshwalker_C", "AlivenessEvent");

	Params::ABodyPawnAIBombardier_Marshwalker_C_AlivenessEvent_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAIBombardier_Marshwalker.BodyPawnAIBombardier_Marshwalker_C.ExecuteUbergraph_BodyPawnAIBombardier_Marshwalker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_bodyPawn                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_alivenessInstigator                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_oldBodyAliveness                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_Event_bodyAliveness                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAIBombardier_Marshwalker_C::ExecuteUbergraph_BodyPawnAIBombardier_Marshwalker(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_bodyPawn, class AActor* K2Node_Event_alivenessInstigator, enum class EQtnBodyAliveness K2Node_Event_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_Event_bodyAliveness, bool K2Node_Event_isServer, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAIBombardier_Marshwalker_C", "ExecuteUbergraph_BodyPawnAIBombardier_Marshwalker");

	Params::ABodyPawnAIBombardier_Marshwalker_C_ExecuteUbergraph_BodyPawnAIBombardier_Marshwalker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bodyPawn = K2Node_Event_bodyPawn;
	Parms.K2Node_Event_alivenessInstigator = K2Node_Event_alivenessInstigator;
	Parms.K2Node_Event_oldBodyAliveness = K2Node_Event_oldBodyAliveness;
	Parms.K2Node_Event_bodyAliveness = K2Node_Event_bodyAliveness;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


