imo_vledmo = Creature:new {
	objectName = "",
	customName = "Imo Vledmo",
	socialGroup = "townsperson",
	faction = "townsperson",
	level = 100,
	chanceHit = 1,
	damageMin = 645,
	damageMax = 1000,
	baseXp = 9429,
	baseHAM = 24000,
	baseHAMmax = 30000,
	armor = 0,
	resists = {0,0,0,0,0,0,0,0,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = NONE,
	creatureBitmask = PACK,
	optionsBitmask = AIENABLED + CONVERSABLE + INTERESTING + INVULNERABLE,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_dathomir_prisoner_01.iff",
				 "object/mobile/dressed_dathomir_prisoner_02.iff",
				 "object/mobile/dressed_dathomir_prisoner_03.iff",
				 "object/mobile/dressed_dathomir_prisoner_04.iff",
				 "object/mobile/dressed_dathomir_prisoner_05.iff"},
	lootGroups = {},
	-- Primary and secondary weapon should be different types (rifle/carbine, carbine/pistol, rifle/unarmed, etc)	-- Unarmed should be put on secondary unless the mobile doesn't use weapons, in which case "unarmed" should be put primary and "none" as secondary	primaryWeapon = "unarmed",
	secondaryWeapon = "none",
	conversationTemplate = "corvetteVledmoConvoTemplate",
	
	-- primaryAttacks and secondaryAttacks should be separate skill groups specific to the weapon type listed in primaryWeapon and secondaryWeapon
	-- Use merge() to merge groups in creatureskills.lua together. If a weapon is set to "none", set the attacks variable to empty brackets
	primaryAttacks = {},
	secondaryAttacks = { }
}

CreatureTemplates:addCreatureTemplate(imo_vledmo, "imo_vledmo")