#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyPlacementComp.EnemyPlacementComp_C
// (SceneComponent)

class UClass* UEnemyPlacementComp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyPlacementComp_C");

	return Clss;
}


// EnemyPlacementComp_C EnemyPlacementComp.Default__EnemyPlacementComp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyPlacementComp_C* UEnemyPlacementComp_C::GetDefaultObj()
{
	static class UEnemyPlacementComp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyPlacementComp_C*>(UEnemyPlacementComp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyPlacementComp.EnemyPlacementComp_C.GetClassToSpawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUIFactionEnum          Faction                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Class                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyPlacementComp_C::GetClassToSpawn(enum class EUIFactionEnum Faction, class UClass** Class, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyPlacementComp_C", "GetClassToSpawn");

	Params::UEnemyPlacementComp_C_GetClassToSpawn_Params Parms{};

	Parms.Faction = Faction;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Class != nullptr)
		*Class = Parms.Class;

}

}


