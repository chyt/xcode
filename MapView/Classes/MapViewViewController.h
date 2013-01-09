//
//  MapViewViewController.h
//  MapView
//
//  Created by Charles Tian on 3/18/11.
//  Copyright 2011 N/A. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapViewViewController : UIViewController <MKMapViewDelegate> {
	MKMapView *mapView;
}
@property(nonatomic,retain) IBOutlet MKMapView *mapView;
@end

