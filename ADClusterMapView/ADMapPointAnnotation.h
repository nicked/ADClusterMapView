//
//  ADMapPointAnnotation.h
//  ClusterDemo
//
//  Created by Patrick Nollet on 11/10/12.
//  Copyright (c) 2012 Applidium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
@interface ADMapPointAnnotation : NSObject
@property (nonatomic, readonly, assign) MKMapPoint mapPoint;
@property (nonatomic, readonly, strong) id<MKAnnotation> annotation;
- (id)initWithAnnotation:(id<MKAnnotation>)annotation;
@end
