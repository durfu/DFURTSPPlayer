//
//  DFUViewController.h
//  DFURTSPPlayer
//
//  Created by Bogdan Furdui on 3/7/13.
//  Copyright (c) 2013 Bogdan Furdui. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VideoFrameExtractor;

@interface DFUViewController : UIViewController
{
    IBOutlet UIImageView *imageView;
	IBOutlet UILabel *label;
	IBOutlet UIButton *playButton;
    VideoFrameExtractor *video;
	float lastFrameTime;
}

@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, retain) IBOutlet UIButton *playButton;
@property (nonatomic, retain) VideoFrameExtractor *video;

- (IBAction)playButtonAction:(id)sender;
- (IBAction)showTime:(id)sender;

@end
