#include <string>

using namespace std;

// locations
string farmerRing[14] = { "Farm 1", "Farm 2", "Farm 3", "Farm 4", "Farm 5", "Farm 6", "Pond 1", "Pond 2", "Pond 3", "Windmill 1", "Windmill 2", "Windmill 3", "Dark Forest" , "Gate 1" };
string craftsmanRing[10] = { "Leatherworker 1", "Leatherworker 2", "Cook 1", "Cook 2", "Blacksmith 1", "Blacksmith 2", "Weaver 1", "Weaver 2", "Gate 2", "Gate 1" };
string eliteClassRing[8] = { "Rich Family 1", "Rich Family 2", "Rich Family 3", "Rich Family 4", "Rich Family 5", "Rich Family 6" , "Gate 3", "Gate 2" };
string castle;


/* weapon data
    
    if specialAttack has a 0 it means it has no attack
    Special attack is not yet implemented into the code. */
string weaponList[10][9] = {
               // Name,              WeakAttack, MindAttack2, BigAttack3, SpecialAttack, Attack1Name, Attack2Name, Attack3Name, Attack4Name
                  {"Short Sword",       "10",        "15",       "20",         "0",        "Stab",        "Swipe",          "Epic Attack",    " "},
                  {"Crossbow",          "5",         "10",       "15",         "0",        "cQuickshot",  "cChargedShot",   "epicSShot",      " "},
                  {"Axe",               "7",         "11",       "17",         "0",        "aSwing",      "chargedASwing",  "epicASwing",     " "},
                  {"Sword",             "15",	     "20",       "25",	       "0",	       "lSwing",	  "lSwing",	        "epicLSwing",	  " "},
                  {"Bow",		        "5",	     "10",       "15",	       "0",	       "bQuickshot",  "bChargedShot",	"epicBShot",	  " "},
                  {"Spear",	            "5",	     "10",       "15",         "0",	       "sLunge",	  "sChargedLunge",  "epicSLunge",     " "},
                  {"Club",	            "10",	     "12",       "18",         "0",        "cSwing",	  "cChargedSwing",  "epicCSwing",     " "},
                  {"Pitchfork",	        "7",	     "10",       "12",         "0", 	   "pLunge",	  "pChargedLunge",  "epicPLunge",     " "},
                  {"Trident",	        "8",	     "11",       "13",         "0",        "tLunge",	  "tChargedLunge",  "epicTLunge",     " "},
                  {"Scythe",	        "10",        "12",       "16",	       "0",        "sSwoosh",	  "sChargedSwoosh", "epicSSwoosh",    " "}

};

/* people array list */
string peopleList[2][6] = {
                   // Name,              WeakAttack, MindAttack2, BigAttack3, Armor, Health
                      {"TestDummy",        "10",        "20",         "30",      "1",   "100"},
                      {"TestDummy2",       "10",        "20",         "30",      "1",   "100"}
}



