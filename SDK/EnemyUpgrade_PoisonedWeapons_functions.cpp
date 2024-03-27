#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyUpgrade_PoisonedWeapons.EnemyUpgrade_PoisonedWeapons_C
// (None)

class UClass* UEnemyUpgrade_PoisonedWeapons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyUpgrade_PoisonedWeapons_C");

	return Clss;
}


// EnemyUpgrade_PoisonedWeapons_C EnemyUpgrade_PoisonedWeapons.Default__EnemyUpgrade_PoisonedWeapons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnemyUpgrade_PoisonedWeapons_C* UEnemyUpgrade_PoisonedWeapons_C::GetDefaultObj()
{
	static class UEnemyUpgrade_PoisonedWeapons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnemyUpgrade_PoisonedWeapons_C*>(UEnemyUpgrade_PoisonedWeapons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyUpgrade_PoisonedWeapons.EnemyUpgrade_PoisonedWeapons_C.UpdateFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnItem*                    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyUpgrade_PoisonedWeapons_C::UpdateFX(class AQtnItem* Item, bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyUpgrade_PoisonedWeapons_C", "UpdateFX");

	Params::UEnemyUpgrade_PoisonedWeapons_C_UpdateFX_Params Parms{};

	Parms.Item = Item;
	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyUpgrade_PoisonedWeapons.EnemyUpgrade_PoisonedWeapons_C.ExecuteUbergraph_EnemyUpgrade_PoisonedWeapons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    K2Node_Event_Item                                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_On                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseWeapon_C*               K2Node_DynamicCast_AsBase_Weapon                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnemyUpgrade_PoisonedWeapons_C::ExecuteUbergraph_EnemyUpgrade_PoisonedWeapons(int32 EntryPoint, class AQtnItem* K2Node_Event_Item, bool K2Node_Event_On, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyUpgrade_PoisonedWeapons_C", "ExecuteUbergraph_EnemyUpgrade_PoisonedWeapons");

	Params::UEnemyUpgrade_PoisonedWeapons_C_ExecuteUbergraph_EnemyUpgrade_PoisonedWeapons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Item = K2Node_Event_Item;
	Parms.K2Node_Event_On = K2Node_Event_On;
	Parms.K2Node_DynamicCast_AsBase_Weapon = K2Node_DynamicCast_AsBase_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


