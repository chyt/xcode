//
//  MapViewViewController.m
//  MapView
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import "MapViewViewController.h"

@implementation MapViewViewController

@synthesize mapView;

- (void)location
{
	MKCoordinateRegion region;
	region.center.latitude = 37.786996;
	region.center.longitude = -122.440100;
	region.span.latitudeDelta = 0.112872;
	region.span.longitudeDelta = 0.109863;
	
	[self.mapView setRegion:region animated:YES];
}

- (void)viewDidLoad {
    self.mapView.mapType = MKMapTypeStandard;
	[self location];
}


- (void)viewDidUnload {
	self.mapView = nil;
}


- (void)dealloc {
	[mapView release];
    [super dealloc];
}

@end
