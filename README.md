# DayZ Overpoch Mission server files

This repo has all of the custom stuff that one needs to set up an Arma 2 DayZ Overpoch server. I made this because I spent a long time gathering all of the things needed and it seems that nobody has a ready-to-deploy server with files ready for anyone. I hope these files help someone.

## Getting Started

These instructions will get you going with an Overpoch server that includes WAI missions, custom shop prices, full Overwatch integration, vehicle towing, and some extra addons.

### Prerequisites

Currently in this repo are the mission files for the Panthera map. Instructions for installing with a different map are further down...

What you will need in your server directory for these files:

```
All Arma 2 files. These are the ones from the client's game directory, these include things like 'Addons' and 'ArmA2OA.exe'.
@DayZ_Epoch - these are the client files for Epoch. Arma 2 needs client files for the server for whatever reason. [Download from Epoch website](http://epochmod.com/a2dayzepoch.php)
@DayZOverwatch - these are the client files Overwatch. To get them, you will need DayZ Launcher.
@panthera - this is the map that you want to run the server with. For these instructions, you want Panthera. [Download from Armaholic](http://www.armaholic.com/page.php?id=7467)
@DayZ_Epoch_Server - These files contain a few custom modifications for the server, such as WAI missions. [Download from Epoch website](http://epochmod.com/a2dayzepoch.php)
Four .dlls that came with the above download.
One User config folder. In this includes the config.cfg, server.cfg, server logs and the database connection .ini file. Examples are included in the above download. 
```

### Installing

Now that @DayZ_Epoch, @DayZOverwatch, @panthera, @DayZ_Epoch_Server, your user config folder, and a few extra .dlls are in your server root folder, you have what you need.

1. If you want to use the Epoch server files in this repo that include WAI missions, remove the default @DayZ_Epoch_Server that came with the download from the Epoch website, and replace it with the one in this repo. Now the mission can technically be ran without errors from the epoch server files.
2. Now to establish a connection to your SQL server. Find HiveExt.ini in your user config folder and find the lines that say 'Database = ', 'Username = ', and 'Password = '. Change them accordingly.
3a. Create a database. I used MySQL workbench.
3b. Now it is time to create the tables that will house all player objects, players, and users. Open the SQL script 'epoch.sql' that is located in the SQL folder included in the Epoch server download. Now run it.
	This script will add more tables then needed for the mission in this repo, however they will not impact anything; they are just obsolete trader tables.
3c. This is technically optional; create another user like 'DayZ'. This is for the sake of logging, so 'root' is not doing everything for the DayZ server.
4. Edit the server.cfg files. The options in this file include server name, passwords, mission directory link, and other low-level server options.
5. Assuming Panthera, overwatch, or Epoch have not updated since the time this repo was created, your server should be ready to deploy.
6. Very, very recommended: Change overpoch1.jpg and rules.sqf in the mission folder. Make them your own.

When the server first runs, it will be populating the database with vehicles. If you enter the server shortly after it launches, it will take a bit until you can play.

If there are any issues in your installation, submit an issue ticket to this repo.

## Authors

* **Bohemia Interactive**
* **Developers of Epoch**
* **Developers of Overwatch**
* **Creators of Panthera**
* **Authors of the Towing script**
* **Authors of WAI Missions**
* **Max Oakes**