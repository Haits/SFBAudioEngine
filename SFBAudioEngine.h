/*
 * Copyright (c) 2006 - 2020 Stephen F. Booth <me@sbooth.org>
 * See https://github.com/sbooth/SFBAudioEngine/blob/master/LICENSE.txt for license information
 */

#import <Foundation/Foundation.h>

/// Project version number for SFBAudioEngine.
FOUNDATION_EXPORT double SFBAudioEngineVersionNumber;

/// Project version string for SFBAudioEngine.
FOUNDATION_EXPORT const unsigned char SFBAudioEngineVersionString [];

#import <SFBAudioEngine/SFBInputSource.h>

#import <SFBAudioEngine/SFBAudioDecoding.h>
#import <SFBAudioEngine/SFBPCMDecoding.h>
#import <SFBAudioEngine/SFBAudioDecoder.h>
#import <SFBAudioEngine/SFBDSDDecoding.h>
#import <SFBAudioEngine/SFBDSDDecoder.h>
#import <SFBAudioEngine/SFBDSDPCMDecoder.h>
#import <SFBAudioEngine/SFBDoPDecoder.h>
#import <SFBAudioEngine/SFBLoopableRegionDecoder.h>

#if TARGET_OS_OSX

#import <SFBAudioEngine/SFBAudioDevice.h>
#import <SFBAudioEngine/SFBAudioDeviceDataSource.h>
#import <SFBAudioEngine/SFBAudioOutputDevice.h>

#endif

#import <SFBAudioEngine/SFBAudioPlayerNode.h>
#import <SFBAudioEngine/SFBAudioPlayer.h>

#import <SFBAudioEngine/SFBAudioProperties.h>
#import <SFBAudioEngine/SFBAttachedPicture.h>
#import <SFBAudioEngine/SFBAudioMetadata.h>
#import <SFBAudioEngine/SFBAudioFile.h>

#import <SFBAudioEngine/SFBReplayGainAnalyzer.h>

#import <SFBAudioEngine/SFBAudioExporter.h>
