syren_veega_madish = Creature:new {
	objectName = "",
	customName = "Veega Madish",
	socialGroup = "rebel",
	faction = "rebel",
	mobType = MOB_NPC,
	level = 15,
	chanceHit = 0.31,
	damageMin = 160,
	damageMax = 170,
	baseXp = 831,
	baseHAM = 2400,
	baseHAMmax = 3000,
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
	creatureBitmask = NONE,
	optionsBitmask = INVULNERABLE + CONVERSABLE,
	diet = HERBIVORE,

	templates = {"object/mobile/dressed_rebel_colonel_bothan_male.iff"},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "rebelVeegaMadishConvoTemplate",
	attacks = merge(pistoleermaster,brawlermaster)
}

CreatureTemplates:addCreatureTemplate(syren_veega_madish, "syren_veega_madish")
