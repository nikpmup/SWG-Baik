sentry_hermit_spider = Creature:new {
	objectName = "@mob/creature_names:sentry_hermit_spider",
	socialGroup = "spider",
	faction = "",
	level = 10,
	chanceHit = 0.27,
	damageMin = 70,
	damageMax = 75,
	baseXp = 405,
	baseHAM = 405,
	baseHAMmax = 495,
	armor = 0,
	resists = {115,115,0,0,0,0,0,-1,-1},
	meatType = "meat_insect",
	meatAmount = 9,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + HERD + KILLER + STALKER,
	optionsBitmask = AIENABLED,
	diet = CARNIVORE,

	templates = {"object/mobile/hermit_spider_hue.iff"},
	hues = { 16, 17, 18, 19, 20, 21, 22, 23 },
	scale = 1.1,
	lootGroups = {},
	-- Primary and secondary weapon should be different types (rifle/carbine, carbine/pistol, rifle/unarmed, etc)	-- Unarmed should be put on secondary unless the mobile doesn't use weapons, in which case "unarmed" should be put primary and "none" as secondary	primaryWeapon = "unarmed",
	secondaryWeapon = "none",
	conversationTemplate = "",
	
	-- primaryAttacks and secondaryAttacks should be separate skill groups specific to the weapon type listed in primaryWeapon and secondaryWeapon
	-- Use merge() to merge groups in creatureskills.lua together. If a weapon is set to "none", set the attacks variable to empty brackets
	primaryAttacks = { {"intimidationattack",""}, {"mildpoison",""} },
	secondaryAttacks = { }
}

CreatureTemplates:addCreatureTemplate(sentry_hermit_spider, "sentry_hermit_spider")
