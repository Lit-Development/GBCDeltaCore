//
//  GBCEmulatorBridge.h
//  GBCDeltaCore
//
//  Created by Riley Testut on 4/11/17.
//  Copyright © 2017 Riley Testut. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol DLTAEmulatorBridging;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, GameboyPalette)
{
    NONE NS_SWIFT_NAME(none) = 0,
    DMG_LIBRETRO NS_SWIFT_NAME(dmgLibretro) = 1,
    POCKET_LIBRETRO NS_SWIFT_NAME(pocketLibretro) = 2,
    LIGHT_LIBRETRO NS_SWIFT_NAME(lightLibretro) = 3,
    DMG NS_SWIFT_NAME(dmg) = 4,
    POCKET NS_SWIFT_NAME(pocket) = 5,
    LIGHT NS_SWIFT_NAME(light) = 6
};

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything" // Silence "Cannot find protocol definition" warning due to forward declaration.
@interface GBCEmulatorBridge : NSObject <DLTAEmulatorBridging>
#pragma clang diagnostic pop

@property (class, nonatomic, readonly) GBCEmulatorBridge *sharedBridge;
@property (nonatomic) GameboyPalette palette;
- (void)updatePalette;

@end

NS_ASSUME_NONNULL_END
