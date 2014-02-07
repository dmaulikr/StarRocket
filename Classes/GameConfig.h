//
//  GameConfig.h
//  Temp
//
//  Created by Michael Fogleman on 12/12/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#ifndef __GAME_CONFIG_H
#define __GAME_CONFIG_H

//
// Supported Autorotations:
//		None,
//		UIViewController,
//		CCDirector
//
#define kGameAutorotationNone 0
#define kGameAutorotationCCDirector 1
#define kGameAutorotationUIViewController 2

//
// Define here the type of autorotation that you want for your game
//
#define GAME_AUTOROTATION kGameAutorotationCCDirector


#endif // __GAME_CONFIG_H