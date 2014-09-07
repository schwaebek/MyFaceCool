//
//  MFCViewController.h
//  My Face Cool
//
//  Created by Katlyn Schwaebe on 8/20/14.
//  Copyright (c) 2014 Katlyn Schwaebe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MFCViewController : UIViewController<UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePhoto:(id)sender;

- (IBAction)selectPhoto:(id)sender;

@end
