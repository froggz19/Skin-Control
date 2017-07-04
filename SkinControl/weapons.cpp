/*
Skin Control weapons.cpp
By Neutrinobeam
*/

#pragma once
#include "weapons.h"
#include "modMenu.h"

LPCSTR weaponModels[] = {
	"WEAPON_UNARMED","WEAPON_KNIFE", "WEAPON_MACHETE", "WEAPON_FLASHLIGHT", "WEAPON_NIGHTSTICK", "WEAPON_HAMMER", "WEAPON_BAT", "WEAPON_GOLFCLUB", "WEAPON_CROWBAR", "WEAPON_BOTTLE", "WEAPON_DAGGER", "WEAPON_HATCHET", "WEAPON_KNUCKLE", "WEAPON_SWITCHBLADE", "WEAPON_BATTLEAXE", "WEAPON_POOLCUE", "WEAPON_WRENCH",
	"WEAPON_PISTOL", "WEAPON_COMBATPISTOL", "WEAPON_APPISTOL", "WEAPON_PISTOL50", "WEAPON_SNSPISTOL", "WEAPON_HEAVYPISTOL", "WEAPON_VINTAGEPISTOL", "WEAPON_STUNGUN", "WEAPON_FLAREGUN", "WEAPON_MARKSMANPISTOL", "WEAPON_REVOLVER", "WEAPON_PISTOL_MK2", "WEAPON_MICROSMG", "WEAPON_SMG",
	"WEAPON_ASSAULTSMG", "WEAPON_MG", "WEAPON_COMBATMG", "WEAPON_GUSENBERG", "WEAPON_COMBATPDW", "WEAPON_MACHINEPISTOL", "WEAPON_MINISMG", "WEAPON_SMG_MK2", "WEAPON_COMBATMG_MK2", "WEAPON_ASSAULTRIFLE", "WEAPON_CARBINERIFLE", "WEAPON_ADVANCEDRIFLE", "WEAPON_SPECIALCARBINE",
	"WEAPON_BULLPUPRIFLE", "WEAPON_COMPACTRIFLE", "WEAPON_ASSAULTRIFLE_MK2", "WEAPON_CARBINERIFLE_MK2", "WEAPON_PUMPSHOTGUN", "WEAPON_SAWNOFFSHOTGUN", "WEAPON_BULLPUPSHOTGUN", "WEAPON_ASSAULTSHOTGUN", "WEAPON_MUSKET", "WEAPON_HEAVYSHOTGUN", "WEAPON_DBSHOTGUN", "WEAPON_AUTOSHOTGUN",
	"WEAPON_SNIPERRIFLE", "WEAPON_HEAVYSNIPER", "WEAPON_MARKSMANRIFLE", "WEAPON_HEAVYSNIPER_MK2", "WEAPON_GRENADELAUNCHER", "WEAPON_GRENADELAUNCHER_SMOKE", "WEAPON_RPG", "WEAPON_MINIGUN", "WEAPON_FIREWORK", "WEAPON_RAILGUN", "WEAPON_HOMINGLAUNCHER", "WEAPON_COMPACTLAUNCHER",
	"WEAPON_GRENADE", "WEAPON_STICKYBOMB", "WEAPON_PROXMINE", "WEAPON_SMOKEGRENADE", "WEAPON_BZGAS", "WEAPON_MOLOTOV", "WEAPON_FIREEXTINGUISHER", "WEAPON_PETROLCAN", "WEAPON_SNOWBALL", "WEAPON_FLARE", "WEAPON_BALL", "WEAPON_PIPEBOMB", "WEAPON_DIGISCANNER", "WEAPON_BRIEFCASE", "WEAPON_BRIEFCASE_02" };
//weapon_programmablear, weapon_rubbergun, weapon_loudhailer, gadget_nightvision, gadget_parachute
LPCSTR weaponNames[] = {
	"Unarmed", "Knife", "Machete", "Flashlight", "Nightstick", "Hammer", "Baseball Bat", "Golf Club", "Crowbar", "Bottle", "Antique Dagger", "Hatchet", "Knuckle Duster", "Switchblade", "Battle Axe", "Pool Cue", "Pipe Wrench",
	"Pistol", "Combat Pistol", "AP Pistol", "Pistol .50", "SNS Pistol", "Heavy Pistol", "Vintage Pistol", "Stun Gun", "Flare Gun", "Marksman Pistol", "Heavy Revolver", "Pistol Mk II", "Micro SMG",
	"SMG", "Assault SMG", "MG", "Combat MG", "Gusenberg Sweeper", "Combat PDW", "Machine Pistol", "Mini SMG", "SMG Mk II", "Combat MG Mk II", "Assault Rifle", "Carbine Rifle", "Advanced Rifle", "Special Carbine",
	"Bullpup Rifle", "Compact Rifle", "Assault Rifle Mk II", "Carbine Rifle Mk II", "Pump Shotgun", "Sawed-Off Shotgun", "Bullpup Shotgun", "Assault Shotgun", "Musket", "Heavy Shotgun", "Double Barreled Shotgun", "Sweeper Shotgun",
	"Sniper Rifle", "Heavy Sniper", "Marksman Rifle", "Heavy Sniper Mk II", "Grenade Launcher", "Grenade Launcher Smoke", "RPG", "Minigun", "Fireworks Launcher", "Railgun", "Homing Launcher", "Compact Grenade Launcher",
	"Grenade", "Sticky Bomb", "Proximity Mine", "Teargas", "BZ Gas", "Molotov", "Fire Extinguisher", "Jerry Can", "Snowball", "Flare", "Ball", "Pipe Bomb", "Scanner", "Briefcase", "Alt Briefcase" };

LPCSTR weaponComponentNames[] = {
	" ", 
	"COMPONENT_ADVANCEDRIFLE_CLIP_01", "COMPONENT_ADVANCEDRIFLE_CLIP_02", "COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE", "COMPONENT_APPISTOL_CLIP_01",
	"COMPONENT_APPISTOL_CLIP_02", "COMPONENT_APPISTOL_VARMOD_LUXE", "COMPONENT_ASSAULTRIFLE_CLIP_01", "COMPONENT_ASSAULTRIFLE_CLIP_02",
	"COMPONENT_ASSAULTRIFLE_MK2_CAMO", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_02", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_03", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_04",
	"COMPONENT_ASSAULTRIFLE_MK2_CAMO_05", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_06", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_07", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_08",
	"COMPONENT_ASSAULTRIFLE_MK2_CAMO_09", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_10", "COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01", "COMPONENT_ASSAULTRIFLE_MK2_CLIP_01",
	"COMPONENT_ASSAULTRIFLE_MK2_CLIP_02", "COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING", "COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ", "COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY",
	"COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER", "COMPONENT_ASSAULTRIFLE_VARMOD_LUXE", "COMPONENT_ASSAULTSHOTGUN_CLIP_01", "COMPONENT_ASSAULTSHOTGUN_CLIP_02", "COMPONENT_ASSAULTSMG_CLIP_01",
	"COMPONENT_ASSAULTSMG_CLIP_02", "COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER", "COMPONENT_AT_AR_AFGRIP", "COMPONENT_AT_AR_AFGRIP_02", "COMPONENT_AT_AR_BARREL_01", "COMPONENT_AT_AR_BARREL_02",
	"COMPONENT_AT_AR_FLSH", "COMPONENT_AT_AR_SUPP", "COMPONENT_AT_AR_SUPP_02", "COMPONENT_AT_CR_BARREL_01", "COMPONENT_AT_CR_BARREL_02", "COMPONENT_AT_MG_BARREL_01", "COMPONENT_AT_MG_BARREL_02",
	"COMPONENT_AT_MUZZLE_01", "COMPONENT_AT_MUZZLE_02", "COMPONENT_AT_MUZZLE_03", "COMPONENT_AT_MUZZLE_04", "COMPONENT_AT_MUZZLE_05", "COMPONENT_AT_MUZZLE_06", "COMPONENT_AT_MUZZLE_07",
	"COMPONENT_AT_MUZZLE_08", "COMPONENT_AT_MUZZLE_09", "COMPONENT_AT_PI_COMP", "COMPONENT_AT_PI_FLSH", "COMPONENT_AT_PI_FLSH_02", "COMPONENT_AT_PI_RAIL", "COMPONENT_AT_PI_SUPP",
	"COMPONENT_AT_PI_SUPP_02", "COMPONENT_AT_SB_BARREL_01", "COMPONENT_AT_SB_BARREL_02", "COMPONENT_AT_SCOPE_LARGE", "COMPONENT_AT_SCOPE_LARGE_MK2", "COMPONENT_AT_SCOPE_MACRO",
	"COMPONENT_AT_SCOPE_MACRO_02", "COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2", "COMPONENT_AT_SCOPE_MACRO_MK2", "COMPONENT_AT_SCOPE_MAX", "COMPONENT_AT_SCOPE_MEDIUM", "COMPONENT_AT_SCOPE_MEDIUM_MK2",
	"COMPONENT_AT_SCOPE_NV", "COMPONENT_AT_SCOPE_SMALL", "COMPONENT_AT_SCOPE_SMALL_02", "COMPONENT_AT_SCOPE_SMALL_MK2", "COMPONENT_AT_SCOPE_SMALL_SMG_MK2", "COMPONENT_AT_SCOPE_THERMAL",
	"COMPONENT_AT_SIGHTS", "COMPONENT_AT_SIGHTS_SMG", "COMPONENT_AT_SR_BARREL_01", "COMPONENT_AT_SR_BARREL_02", "COMPONENT_AT_SR_SUPP", "COMPONENT_AT_SR_SUPP_03", "COMPONENT_BULLPUPRIFLE_CLIP_01",
	"COMPONENT_BULLPUPRIFLE_CLIP_02", "COMPONENT_BULLPUPRIFLE_VARMOD_LOW", "COMPONENT_CARBINERIFLE_CLIP_01", "COMPONENT_CARBINERIFLE_CLIP_02", "COMPONENT_CARBINERIFLE_MK2_CAMO",
	"COMPONENT_CARBINERIFLE_MK2_CAMO_02", "COMPONENT_CARBINERIFLE_MK2_CAMO_03", "COMPONENT_CARBINERIFLE_MK2_CAMO_04", "COMPONENT_CARBINERIFLE_MK2_CAMO_05", "COMPONENT_CARBINERIFLE_MK2_CAMO_06",
	"COMPONENT_CARBINERIFLE_MK2_CAMO_07", "COMPONENT_CARBINERIFLE_MK2_CAMO_08", "COMPONENT_CARBINERIFLE_MK2_CAMO_09", "COMPONENT_CARBINERIFLE_MK2_CAMO_10", "COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01",
	"COMPONENT_CARBINERIFLE_MK2_CLIP_01", "COMPONENT_CARBINERIFLE_MK2_CLIP_02", "COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING", "COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ",
	"COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY", "COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER", "COMPONENT_CARBINERIFLE_VARMOD_LUXE", "COMPONENT_COMBATMG_CLIP_01",
	"COMPONENT_COMBATMG_CLIP_02", "COMPONENT_COMBATMG_MK2_CAMO", "COMPONENT_COMBATMG_MK2_CAMO_02", "COMPONENT_COMBATMG_MK2_CAMO_03", "COMPONENT_COMBATMG_MK2_CAMO_04",
	"COMPONENT_COMBATMG_MK2_CAMO_05", "COMPONENT_COMBATMG_MK2_CAMO_06", "COMPONENT_COMBATMG_MK2_CAMO_07", "COMPONENT_COMBATMG_MK2_CAMO_08", "COMPONENT_COMBATMG_MK2_CAMO_09",
	"COMPONENT_COMBATMG_MK2_CAMO_10", "COMPONENT_COMBATMG_MK2_CAMO_IND_01", "COMPONENT_COMBATMG_MK2_CLIP_01", "COMPONENT_COMBATMG_MK2_CLIP_02", "COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING",
	"COMPONENT_COMBATMG_MK2_CLIP_FMJ", "COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY", "COMPONENT_COMBATMG_MK2_CLIP_TRACER", "COMPONENT_COMBATMG_VARMOD_LOWRIDER", "COMPONENT_COMBATPDW_CLIP_01",
	"COMPONENT_COMBATPDW_CLIP_02", "COMPONENT_COMBATPISTOL_CLIP_01", "COMPONENT_COMBATPISTOL_CLIP_02", "COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER", "COMPONENT_COMPACTRIFLE_CLIP_01",
	"COMPONENT_COMPACTRIFLE_CLIP_02", "COMPONENT_GUSENBERG_CLIP_01", "COMPONENT_GUSENBERG_CLIP_02", "COMPONENT_HEAVYPISTOL_CLIP_01", "COMPONENT_HEAVYPISTOL_CLIP_02",
	"COMPONENT_HEAVYPISTOL_VARMOD_LUXE", "COMPONENT_HEAVYSHOTGUN_CLIP_01", "COMPONENT_HEAVYSHOTGUN_CLIP_02", "COMPONENT_HEAVYSNIPER_MK2_CAMO", "COMPONENT_HEAVYSNIPER_MK2_CAMO_02",
	"COMPONENT_HEAVYSNIPER_MK2_CAMO_03", "COMPONENT_HEAVYSNIPER_MK2_CAMO_04", "COMPONENT_HEAVYSNIPER_MK2_CAMO_05", "COMPONENT_HEAVYSNIPER_MK2_CAMO_06", "COMPONENT_HEAVYSNIPER_MK2_CAMO_07",
	"COMPONENT_HEAVYSNIPER_MK2_CAMO_08", "COMPONENT_HEAVYSNIPER_MK2_CAMO_09", "COMPONENT_HEAVYSNIPER_MK2_CAMO_10", "COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01", "COMPONENT_HEAVYSNIPER_MK2_CLIP_01",
	"COMPONENT_HEAVYSNIPER_MK2_CLIP_02", "COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING", "COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE", "COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ",
	"COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY", "COMPONENT_KNUCKLE_VARMOD_BALLAS", "COMPONENT_KNUCKLE_VARMOD_BASE", "COMPONENT_KNUCKLE_VARMOD_DIAMOND", "COMPONENT_KNUCKLE_VARMOD_DOLLAR",
	"COMPONENT_KNUCKLE_VARMOD_HATE", "COMPONENT_KNUCKLE_VARMOD_KING", "COMPONENT_KNUCKLE_VARMOD_LOVE", "COMPONENT_KNUCKLE_VARMOD_PIMP", "COMPONENT_KNUCKLE_VARMOD_PLAYER",
	"COMPONENT_KNUCKLE_VARMOD_VAGOS", "COMPONENT_MACHINEPISTOL_CLIP_01", "COMPONENT_MACHINEPISTOL_CLIP_02", "COMPONENT_MARKSMANRIFLE_CLIP_01", "COMPONENT_MARKSMANRIFLE_CLIP_02",
	"COMPONENT_MARKSMANRIFLE_VARMOD_LUXE", "COMPONENT_MG_CLIP_01", "COMPONENT_MG_CLIP_02", "COMPONENT_MG_VARMOD_LOWRIDER", "COMPONENT_MICROSMG_CLIP_01", "COMPONENT_MICROSMG_CLIP_02",
	"COMPONENT_MICROSMG_VARMOD_LUXE", "COMPONENT_MINISMG_CLIP_01", "COMPONENT_MINISMG_CLIP_02", "COMPONENT_PISTOL50_CLIP_01", "COMPONENT_PISTOL50_CLIP_02", "COMPONENT_PISTOL50_VARMOD_LUXE",
	"COMPONENT_PISTOL_CLIP_01", "COMPONENT_PISTOL_CLIP_02", "COMPONENT_PISTOL_MK2_CAMO", "COMPONENT_PISTOL_MK2_CAMO_02", "COMPONENT_PISTOL_MK2_CAMO_03", "COMPONENT_PISTOL_MK2_CAMO_04",
	"COMPONENT_PISTOL_MK2_CAMO_05", "COMPONENT_PISTOL_MK2_CAMO_06", "COMPONENT_PISTOL_MK2_CAMO_07", "COMPONENT_PISTOL_MK2_CAMO_08", "COMPONENT_PISTOL_MK2_CAMO_09", "COMPONENT_PISTOL_MK2_CAMO_10",
	"COMPONENT_PISTOL_MK2_CAMO_IND_01", "COMPONENT_PISTOL_MK2_CLIP_01", "COMPONENT_PISTOL_MK2_CLIP_02", "COMPONENT_PISTOL_MK2_CLIP_FMJ", "COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT",
	"COMPONENT_PISTOL_MK2_CLIP_INCENDIARY", "COMPONENT_PISTOL_MK2_CLIP_TRACER", "COMPONENT_PISTOL_VARMOD_LUXE", "COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER", "COMPONENT_REVOLVER_VARMOD_BOSS",
	"COMPONENT_REVOLVER_VARMOD_GOON", "COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE", "COMPONENT_SMG_CLIP_01", "COMPONENT_SMG_CLIP_02", "COMPONENT_SMG_MK2_CAMO", "COMPONENT_SMG_MK2_CAMO_02",
	"COMPONENT_SMG_MK2_CAMO_03", "COMPONENT_SMG_MK2_CAMO_04", "COMPONENT_SMG_MK2_CAMO_05", "COMPONENT_SMG_MK2_CAMO_06", "COMPONENT_SMG_MK2_CAMO_07", "COMPONENT_SMG_MK2_CAMO_08",
	"COMPONENT_SMG_MK2_CAMO_09", "COMPONENT_SMG_MK2_CAMO_10", "COMPONENT_SMG_MK2_CAMO_IND_01", "COMPONENT_SMG_MK2_CLIP_01", "COMPONENT_SMG_MK2_CLIP_02", "COMPONENT_SMG_MK2_CLIP_FMJ",
	"COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT", "COMPONENT_SMG_MK2_CLIP_INCENDIARY", "COMPONENT_SMG_MK2_CLIP_TRACER", "COMPONENT_SMG_VARMOD_LUXE", "COMPONENT_SNIPERRIFLE_VARMOD_LUXE",
	"COMPONENT_SNSPISTOL_CLIP_01", "COMPONENT_SNSPISTOL_CLIP_02", "COMPONENT_SNSPISTOL_VARMOD_LOWRIDER", "COMPONENT_SPECIALCARBINE_CLIP_01", "COMPONENT_SPECIALCARBINE_CLIP_02",
	"COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER", "COMPONENT_SWITCHBLADE_VARMOD_BASE", "COMPONENT_SWITCHBLADE_VARMOD_VAR1", "COMPONENT_SWITCHBLADE_VARMOD_VAR2",
	"COMPONENT_VINTAGEPISTOL_CLIP_01", "COMPONENT_VINTAGEPISTOL_CLIP_02"
};

LPCSTR weaponSlotNames[numWeaponMods] = { "None", "Extended Clip", "Flashlight", "Suppressor", "Scope", "Grip", "Adv Scope" };

int getNumWeapons(){
	return sizeof(weaponModels) / sizeof (LPCSTR);
}

DWORD getWeaponTintMax(Hash model){
	int index = hashLookup(model);
	if (index < 0){
		return 0;
	}
	else if (index < 12){

		/*WEAPON_UNARMED
		WEAPON_KNIFE
		WEAPON_MACHETE
		WEAPON_FLASHLIGHT
		WEAPON_NIGHTSTICK
		WEAPON_HAMMER
		WEAPON_BAT
		WEAPON_GOLFCLUB
		WEAPON_CROWBAR
		WEAPON_BOTTLE
		WEAPON_DAGGER
		WEAPON_HATCHET*/

		return 1;
	}
	else if (index == 12) {
		//WEAPON_KNUCKLE
		return 10;
	}
	else if (index == 13) {
		//WEAPON_SWITCHBLADE
		return 2;
	}
	else if (index == 14) {
		//WEAPON_BATTLEAXE
		return 1;
	}
	else if (index == 15) {
		//WEAPON_POOLCUE
		return 1;
	}
	else if (index == 16) {
		//WEAPON_WRENCH
		return 1;
	}
	else if (index == 28) {
		//WEAPON_PISTOL_MK2
		return numTintsMk2;
	}
	else if (index == 38) {
		//WEAPON_SMG_MK2
		return numTintsMk2;
	}
	else if (index == 39) {
		//WEAPON_COMBATMG_MK2
		return numTintsMk2;
	}
	else if (index == 46) {
		//WEAPON_ASSAULTRIFLE_MK2
		return numTintsMk2;
	}
	else if (index == 47) {
		//WEAPON_CARBINERIFLE_MK2
		return numTintsMk2;
	}
	else if (index == 59) {
		//WEAPON_HEAVYSNIPER_MK2
		return numTintsMk2;
	}
	else if (index > 67){

		/*WEAPON_GRENADE
		WEAPON_STICKYBOMB
		WEAPON_PROXMINE
		WEAPON_SMOKEGRENADE
		WEAPON_BZGAS
		WEAPON_MOLOTOV
		WEAPON_FIREEXTINGUISHER
		WEAPON_PETROLCAN
		WEAPON_SNOWBALL
		WEAPON_FLARE
		WEAPON_BALL
		WEAPON_PIPEBOMB
		WEAPON_DIGISCANNER
		WEAPON_BRIEFCASE
		WEAPON_BRIEFCASE_02*/

		return 1;
	}
	else{

		/*WEAPON_PISTOL, WEAPON_COMBATPISTOL, WEAPON_APPISTOL, WEAPON_PISTOL50,
		WEAPON_SNSPISTOL, WEAPON_HEAVYPISTOL, WEAPON_VINTAGEPISTOL, WEAPON_STUNGUN,
		WEAPON_FLAREGUN, WEAPON_MARKSMANPISTOL, WEAPON_REVOLVER, WEAPON_MICROSMG, 
		WEAPON_SMG, WEAPON_ASSAULTSMG, WEAPON_MG, WEAPON_COMBATMG,
		WEAPON_GUSENBERG, WEAPON_COMBATPDW, WEAPON_MACHINEPISTOL, WEAPON_MINISMG,
		WEAPON_ASSAULTRIFLE, WEAPON_CARBINERIFLE, WEAPON_ADVANCEDRIFLE, WEAPON_SPECIALCARBINE, 
		WEAPON_BULLPUPRIFLE, WEAPON_COMPACTRIFLE, WEAPON_PUMPSHOTGUN, WEAPON_SAWNOFFSHOTGUN,
		WEAPON_BULLPUPSHOTGUN, WEAPON_ASSAULTSHOTGUN, WEAPON_MUSKET, WEAPON_HEAVYSHOTGUN,
		WEAPON_DBSHOTGUN, WEAPON_AUTOSHOTGUN, WEAPON_SNIPERRIFLE, WEAPON_HEAVYSNIPER,
		WEAPON_MARKSMANRIFLE, WEAPON_GRENADELAUNCHER, WEAPON_GRENADELAUNCHER_SMOKE,
		WEAPON_RPG, WEAPON_MINIGUN, WEAPON_FIREWORK, WEAPON_RAILGUN, WEAPON_HOMINGLAUNCHER, WEAPON_COMPACTLAUNCHER*/

		return numTints;
	}
}


void getWeaponEquipped(PedSkin & skin, Ped id, WeaponData & currentWeaponData){
	Hash weapon;
	WEAPON::GET_CURRENT_PED_WEAPON(id, &weapon, FALSE);
	skin.weapon = weapon;
	int variant = getPedWeaponVariant(id, weapon, currentWeaponData);
	skin.weaponTint = (variant < 0) ? 0 : variant;
	currentWeaponData = getWeaponComponentData(weapon);
	skin.weaponModMask = getPedWeaponModMask(id, weapon, currentWeaponData);
}

void updateWeaponMod(PedSkin & skin, Ped id, WeaponData & currentWeaponData, int i){
	unsigned char componentNameID = currentWeaponData.cmpToHashIDMap[i];
	if (0 < componentNameID){
		Hash component = GAMEPLAY::GET_HASH_KEY((char*)weaponComponentNames[componentNameID]);
		bool alreadyHas = 0 != WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(id, skin.weapon, component);
		if (0 != (skin.weaponModMask & (1 << i))){
			if (!alreadyHas){
				WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(id, skin.weapon, component);
				WAIT(1);
			}
		}
		else if (alreadyHas){
			WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(id, skin.weapon, component);
			WAIT(1);
		}
	}
}
void setWeaponOfPed(PedSkin & skin, Ped id, WeaponData & currentWeaponData){
	if (0 != PED::IS_PED_HUMAN(id)){
		if (0 == WEAPON::HAS_PED_GOT_WEAPON(id, skin.weapon, FALSE)){
			int ammo;
			currentWeaponData.added = true;
			if (0 != WEAPON::GET_MAX_AMMO(id, skin.weapon, &ammo))
				WEAPON::GIVE_WEAPON_TO_PED(id, skin.weapon, ammo, FALSE, TRUE);
			else
				WEAPON::GIVE_WEAPON_TO_PED(id, skin.weapon, -1, FALSE, TRUE);
		}
		else{
			currentWeaponData.added = false;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(id, skin.weapon, TRUE);
		for (int i = 0; i < numWeaponMods; ++i){
			updateWeaponMod(skin, id, currentWeaponData, i);
		}
		if (skin.weaponTint >= 0)
			setWeaponVariant(skin, id, currentWeaponData);
	}
}

void getWeaponsFromPed(Ped pedID, std::vector<Entity> * weapons, std::vector<std::pair<Hash, int>> * ammoWeapons, Hash * equipped){
	Hash weapon;
	std::pair<Hash, int> temp;
	if (0 == PED::IS_PED_HUMAN(pedID)){
		return;
	}
	weapons->clear();
	ammoWeapons->clear();
	if (equipped != NULL)
		WEAPON::GET_CURRENT_PED_WEAPON(pedID, equipped, FALSE);
	for (int i = 0; i < getNumWeapons(); i++){
		weapon = GAMEPLAY::GET_HASH_KEY((char*)weaponModels[i]);
		if (weapon != 0xA2719263 && 0 != WEAPON::HAS_PED_GOT_WEAPON(pedID, weapon, FALSE)){
			if (isAmmoWeapon(weapon)){
				temp.first = weapon;
				temp.second = WEAPON::GET_AMMO_IN_PED_WEAPON(pedID, weapon);
				ammoWeapons->emplace_back(temp);
			}
			else{
				WEAPON::SET_CURRENT_PED_WEAPON(pedID, weapon, TRUE);
				weapons->emplace_back(WEAPON::GET_WEAPON_OBJECT_FROM_PED(pedID, TRUE)); // true?
				ENTITY::SET_ENTITY_VISIBLE(weapons->back(), FALSE, FALSE);
			}
		}
	}
}

void setWeaponsOfPed(Ped pedID, std::vector<Entity> * weapons, std::vector<std::pair<Hash, int>> * ammoWeapons, Hash equipped){
	if (0 != PED::IS_PED_HUMAN(pedID)){
		for (int i = 0; i < weapons->size(); ++i){
			WEAPON::GIVE_WEAPON_OBJECT_TO_PED(weapons->at(i), pedID);
		}
		for (int i = 0; i < ammoWeapons->size(); ++i){
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(pedID, ammoWeapons->at(i).first, ammoWeapons->at(i).second, FALSE);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(pedID, equipped, TRUE);
	}
}

bool getWeaponModSetting(PedSkin & skin, WeaponData & currentWeaponData, int slot){
	unsigned char componentID = getWeaponComponentForSlot(currentWeaponData, slot, true);
	return 0 != (skin.weaponModMask & (1 << componentID));
}
void updateWeaponModMask(PedSkin & skin, WeaponData & currentWeaponData, int slot, bool active){
	unsigned char componentID = getWeaponComponentForSlot(currentWeaponData, slot, true);
	unsigned char defaultID = getWeaponComponentForSlot(currentWeaponData, slot, false);
	if (active){
		skin.weaponModMask |= 1 << componentID;
		if (hasAlternateComponent(currentWeaponData, slot)){
			skin.weaponModMask &= 0xFF - (1 << defaultID);
		}
	}
	else{
		skin.weaponModMask &= 0xFF - (1 << componentID);
		if (hasAlternateComponent(currentWeaponData, slot)){
			skin.weaponModMask |= 1 << defaultID;
		}
	}
}
void updateWeaponModMaskFromPed(Ped pedId, Hash weapon, PedSkin & skin, WeaponData & currentWeaponData){
	// If ped has weapon, read its mods into menuSkin.weaponModMask
	// Otherwise leave default
	if (0 != WEAPON::HAS_PED_GOT_WEAPON(pedId, weapon, FALSE))
		skin.weaponModMask = getPedWeaponModMask(pedId, weapon, currentWeaponData);
}
bool hasAlternateComponent(WeaponData & currentWeaponData, int slot){
	if (0 == currentWeaponData.slotToCmpMap[0] && 1 == slot)
		return true;
	else if (currentWeaponData.defaultMask > 63)
		return true;
	else
		return false;
}
unsigned char getWeaponComponentForSlot(WeaponData & currentWeaponData, int slot, bool active){
	bool defaultSwap = currentWeaponData.slotToCmpMap[0] == 0;
	if (active)
		return currentWeaponData.slotToCmpMap[slot + (defaultSwap ? 1 : 0)];
	else
		return getDefaultComponentForSlot(currentWeaponData, slot);
}
unsigned char getDefaultComponentForSlot(WeaponData & currentWeaponData, int slot){
	if (72 == currentWeaponData.defaultMask && 1 == slot){  // Sniper
		return 4;
	}
	else if (64 == currentWeaponData.defaultMask && 0 == slot){ // Heavy sniper
		return 4;
	}
	else
		return 0;
}

void setWeaponVariant(PedSkin & skin, Ped id, WeaponData & currentWeaponData){
	Hash component;
	if (skin.weapon == 0xD8DF3C3C){ //WEAPON_KNUCKLE
		component = GAMEPLAY::GET_HASH_KEY((char*)weaponComponentNames[currentWeaponData.cmpToHashIDMap[0] + skin.weaponTint]);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(id, skin.weapon, component);
	}
	else {
		WEAPON::SET_PED_WEAPON_TINT_INDEX(id, skin.weapon, skin.weaponTint);
	}
}

DWORD getPedWeaponVariant(Ped pedID, Hash weapon, WeaponData & currentWeaponData){
	Hash component;
	if (0 == WEAPON::HAS_PED_GOT_WEAPON(pedID, weapon, FALSE)){
		return 0;
	}
	if (weapon == 0xD8DF3C3C){ //WEAPON_KNUCKLE
		for (DWORD i = 0; i < getWeaponTintMax(weapon); ++i){
			component = GAMEPLAY::GET_HASH_KEY((char*)weaponComponentNames[currentWeaponData.cmpToHashIDMap[0] + i]);
			if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedID, weapon, component)){
				return i;
			}
		}
		return 0;
	}
	else {
		return WEAPON::GET_PED_WEAPON_TINT_INDEX(pedID, weapon);
	}
}

// Returns the defaultMask of currentWeaponData masked according to the weapon mods ped id has for weapon
DWORD getPedWeaponModMask(Ped id, Hash weapon, WeaponData & currentWeaponData){
	DWORD mask = currentWeaponData.defaultMask;
	DWORD part = 1;
	Hash component;
	for (int i = 0; i < numWeaponMods; ++i)
	{
		unsigned char cmpNameID = currentWeaponData.cmpToHashIDMap[i];
		if (cmpNameID != 0){
			component = GAMEPLAY::GET_HASH_KEY((char*)weaponComponentNames[cmpNameID]);
			mask &= 0xFF - part * (1 - WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(id, weapon, component));
		}
		part <<= 1;
	}
	return mask;
}

Hash getUnarmedHash(){	return 0xA2719263; }

Hash getWeaponHash(int index){
	if (index < 0 || index >= getNumWeapons())
		return getUnarmedHash();
	else
		return GAMEPLAY::GET_HASH_KEY((char*)weaponModels[index]);
}

LPCSTR getWeaponName(Hash weapon){
	int id = hashLookup(weapon);
	if (id < 0 || id >= getNumWeapons())
		return " ";
	return weaponNames[id];
}

bool isAmmoWeapon(Hash weapon){
	switch (weapon)	{
		// Weapons
	case 0x23C9F95C: //WEAPON_BALL
	case 0x0787F0BB: //WEAPON_SNOWBALL
	case 0x93E220BD: //WEAPON_GRENADE
	case 0x2C3731D9: //WEAPON_STICKYBOMB
	case 0xAB564B93: //WEAPON_PROXMINE
	case 0xFDBC8A50: //WEAPON_SMOKEGRENADE
	case 0xA0973D5E: //WEAPON_BZGAS
	case 0x497FACC3: //WEAPON_FLARE
	case 0x24B17070: //WEAPON_MOLOTOV
		return true;
	default:
		return false;
	}
}

bool isKnuckle(Hash weapon){
	return (weapon == 0xD8DF3C3C);
}

WeaponData getWeaponComponentData(Hash weapon){
	switch (weapon) {
	// case hash: return WeaponData(numModSlots, defaultModMask b, modSlotNameIndices, modNameIndices); break;
	case 0x1B06D571: return WeaponData(3, 15, std::vector<unsigned char>{0, 1, 2, 3, 0, 0, 0}, std::vector<unsigned char>{ 17, 18, 1, 4, 0, 0, 0 }); break; //Pistol
	case 0x5EF9FEC4: return WeaponData(3, 15, std::vector<unsigned char>{0, 1, 2, 3, 0, 0, 0}, std::vector<unsigned char>{19, 20, 1, 3, 0, 0, 0}); break; //CombatPistol
	case 0x22D8FE39: return WeaponData(3, 15, std::vector<unsigned char>{0, 1, 2, 3, 0, 0, 0}, std::vector<unsigned char>{21, 22, 1, 3, 0, 0, 0}); break;//APPistol
	case 0x99AEEB3B: return WeaponData(3, 15, std::vector<unsigned char>{0, 1, 2, 3, 0, 0, 0}, std::vector<unsigned char>{23, 24, 1, 6, 0, 0, 0}); break;//Pistol50
	case 0xBFD21232: return WeaponData(1, 3, std::vector<unsigned char>{0, 1, 0, 0, 0, 0, 0}, std::vector<unsigned char>{25, 26, 0, 0, 0, 0, 0}); break;//WEAPON_SNSPISTOL
	case 0xD205520E: return WeaponData(3, 15, std::vector<unsigned char>{0, 1, 2, 3, 0, 0, 0}, std::vector<unsigned char>{27, 28, 1, 3, 0, 0, 0}); break;//WEAPON_HEAVYPISTOL
	case 0x083839C4: return WeaponData(2, 11, std::vector<unsigned char>{0, 1, 3, 0, 0, 0, 0}, std::vector<unsigned char>{29, 30, 0, 3, 0, 0, 0}); break; //WEAPON_VINTAGEPISTOL
	case 0x13532244: return WeaponData(4, 31, std::vector<unsigned char>{0, 1, 2, 3, 4, 0, 0}, std::vector<unsigned char>{31, 32, 1, 6, 8, 0, 0}); break;//MicroSMG
	case 0x2BE6766B: return WeaponData(4, 31, std::vector<unsigned char>{0, 1, 2, 3, 4, 0, 0}, std::vector<unsigned char>{33, 34, 2, 3, 9, 0, 0}); break;//SMG
	case 0xEFE7E2DF: return WeaponData(4, 31, std::vector<unsigned char>{0, 1, 2, 3, 4, 0, 0}, std::vector<unsigned char>{35, 36, 2, 6, 8, 0, 0}); break;//assaultsmg
	case 0xBFEFFF6D: return WeaponData(5, 63, std::vector<unsigned char>{0, 1, 2, 3, 4, 5, 0}, std::vector<unsigned char>{37, 38, 2, 6, 8, 16, 0}); break;//AssaultRifle
	case 0x83BF0278: return WeaponData(5, 63, std::vector<unsigned char>{0, 1, 2, 3, 4, 5, 0}, std::vector<unsigned char>{39, 40, 2, 5, 12, 16, 0}); break;//Carbine
	case 0xAF113F99: return WeaponData(4, 31, std::vector<unsigned char>{0, 1, 2, 3, 4, 0, 0}, std::vector<unsigned char>{41, 42, 2, 5, 10, 0, 0}); break;//advancedrifle
	case 0xC0A3098D: return WeaponData(5, 63, std::vector<unsigned char>{0, 1, 2, 3, 4, 5, 0}, std::vector<unsigned char>{43, 44, 2, 6, 12, 16, 0}); break;//WEAPON_SPECIALCARBINE
	case 0x7F229F94: return WeaponData(5, 63, std::vector<unsigned char>{0, 1, 2, 3, 4, 5, 0}, std::vector<unsigned char>{45, 46, 2, 5, 10, 16, 0}); break;//WEAPON_BULLPUPRIFLE
	case 0x9D07F764: return WeaponData(2, 19, std::vector<unsigned char>{0, 1, 4, 0, 0, 0, 0}, std::vector<unsigned char>{47, 48, 0, 0, 11, 0, 0}); break;//mg
	case 0x7FD62962: return WeaponData(3, 51, std::vector<unsigned char>{0, 1, 4, 5, 0, 0, 0}, std::vector<unsigned char>{49, 50, 0, 0, 12, 16, 0}); break;//combatmg
	case 0x1D073A89: return WeaponData(2, 12, std::vector<unsigned char>{2, 3, 0, 0, 0, 0, 0}, std::vector<unsigned char>{0, 0, 2, 7, 0, 0, 0}); break;//pumpshotgun
	case 0xE284C527: return WeaponData(4, 47, std::vector<unsigned char>{0, 1, 2, 3, 5, 0, 0}, std::vector<unsigned char>{51, 52, 2, 5, 0, 16, 0}); break;//assaultshotgun
	case 0x9D61E50F: return WeaponData(3, 44, std::vector<unsigned char>{2, 3, 5, 0, 0, 0, 0}, std::vector<unsigned char>{0, 0, 2, 6, 0, 16, 0}); break;//bullpupshotgun
	case 0x3AABBBAA: return WeaponData(4, 47, std::vector<unsigned char>{0, 1, 2, 3, 5, 0, 0}, std::vector<unsigned char>{53, 54, 2, 6, 0, 16, 0}); break;//WEAPON_HEAVYSHOTGUN
	case 0x05FC3C11: return WeaponData(2, 72, std::vector<unsigned char>{3, 6, 0, 0, 0, 0, 0}, std::vector<unsigned char>{55, 0, 0, 6, 13, 0, 15}); break;//sniper
	case 0x0C472FE2: return WeaponData(1, 64, std::vector<unsigned char>{6, 0, 0, 0, 0, 0, 0}, std::vector<unsigned char>{56, 0, 0, 0, 13, 0, 15}); break;//heavySniper
	case 0xC734385A: return WeaponData(5, 63, std::vector<unsigned char>{0, 1, 2, 3, 4, 5, 0}, std::vector<unsigned char>{57, 58, 2, 5, 14, 16, 0}); //WEAPON_MARKSMANRIFLE
	case 0xA284510B: return WeaponData(3, 52, std::vector<unsigned char>{2, 4, 5, 0, 0, 0, 0}, std::vector<unsigned char>{0, 0, 2, 0, 10, 16, 0});   //grenadelauncher
	case 0x61012683: return WeaponData(1, 3, std::vector<unsigned char>{0, 1, 0, 0, 0, 0, 0}, std::vector<unsigned char>{59, 60, 0, 0, 0, 0, 0});    //WEAPON_GUSENBERG
	case 0x0A3D4D34: return WeaponData(4, 55, std::vector<unsigned char>{0, 1, 2, 4, 5, 0, 0}, std::vector<unsigned char>{61, 62, 2, 0, 10, 16, 0});  //WEAPON_COMBATPDW
	case 0xD8DF3C3C: return WeaponData(0, 0, std::vector<unsigned char>{0, 0, 0, 0, 0, 0, 0}, std::vector<unsigned char>{63, 0, 0, 0, 0, 0, 0});     //WEAPON_KNUCKLE

	default:
		break;
	}
	return WeaponData(0, 0, std::vector<unsigned char>{0, 0, 0, 0, 0, 0, 0}, std::vector<unsigned char>{0, 0, 0, 0, 0, 0, 0});
};

