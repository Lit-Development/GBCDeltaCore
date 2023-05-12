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

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything" // Silence "Cannot find protocol definition" warning due to forward declaration.
@interface GBCEmulatorBridge : NSObject <DLTAEmulatorBridging>
#pragma clang diagnostic pop

@property (class, nonatomic, readonly) GBCEmulatorBridge *sharedBridge;

@property (nonatomic) UInt32 palette0color0;
@property (nonatomic) UInt32 palette0color1;
@property (nonatomic) UInt32 palette0color2;
@property (nonatomic) UInt32 palette0color3;
@property (nonatomic) UInt32 palette1color0;
@property (nonatomic) UInt32 palette1color1;
@property (nonatomic) UInt32 palette1color2;
@property (nonatomic) UInt32 palette1color3;
@property (nonatomic) UInt32 palette2color0;
@property (nonatomic) UInt32 palette2color1;
@property (nonatomic) UInt32 palette2color2;
@property (nonatomic) UInt32 palette2color3;

- (void)updatePalette;

@end

NS_ASSUME_NONNULL_END

