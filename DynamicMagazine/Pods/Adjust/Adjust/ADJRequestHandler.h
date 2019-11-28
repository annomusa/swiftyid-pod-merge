//
//  ADJRequestHandler.h
//  Adjust
//
//  Created by Christian Wellenbrock on 2013-07-04.
//  Copyright (c) 2013 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADJPackageHandler.h"

@protocol ADJRequestHandler

- (id)initWithPackageHandler:(id<ADJPackageHandler>)packageHandler
          andActivityHandler:(id<ADJActivityHandler>)activityHandler;

- (void)sendPackage:(ADJActivityPackage *)activityPackage
          queueSize:(NSUInteger)queueSize;

- (void)teardown;

@end

@interface ADJRequestHandler : NSObject <ADJRequestHandler>

+ (id<ADJRequestHandler>)handlerWithPackageHandler:(id<ADJPackageHandler>)packageHandler
                                andActivityHandler:(id<ADJActivityHandler>)activityHandler;

@end
